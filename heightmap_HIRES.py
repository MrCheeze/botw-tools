import struct
from PIL import Image, ImageDraw
import math
import numpy as np
import cv2

data = open('MainField.tscb','rb').read()
area_array_len = int.from_bytes(data[0x1C:0x20], 'big')
matinfo_section_size = int.from_bytes(data[0x30:0x34], 'big')

base = 0x30 + matinfo_section_size

imwidth = None
imheight = None
img = None

prev_area_scale = None

for i in range(area_array_len):
    entry_offset_offset = base+4*i
    entry_offset = entry_offset_offset + int.from_bytes(data[entry_offset_offset:entry_offset_offset+4], 'big')
    entry = struct.unpack('>fffffffiiiii', data[entry_offset:entry_offset+0x30])
    filename_offset = entry_offset + 0x20 + entry[8]
    filename = data[filename_offset:].split(b'\x00',1)[0].decode('ascii')
    print(entry, filename)
    if entry[2] != prev_area_scale:
        imwidth = int(0x100*32/entry[2])
        imheight = int(0x100*32/entry[2])
        if img is None:
            img = Image.new("I;16", (imwidth,imheight))
        else:
            img.save('heightmap_HIRES_%s.png'%prev_area_scale)
            # pillow cannot do a high quality resize of 16-bit data, but opencv can
            img = Image.fromarray(cv2.resize(np.array(img), (imwidth, imheight)), mode='I;16')
            
    heightfile = open('terrain_HIRES/%s.hght'%filename,'rb')

    x_off = entry[0]*(0x100//entry[2]) + imwidth//2 - 0x80
    y_off = entry[1]*(0x100//entry[2]) + imheight//2 - 0x80
    assert x_off % 1 == 0
    assert y_off % 1 == 0
    x_off = int(x_off)
    y_off = int(y_off)

    for y in range(0x100):
        for x in range(0x100):
            assert 0 <= x+x_off < imwidth
            assert 0 <= y+y_off < imheight
            img.putpixel((x+x_off,y+y_off), int.from_bytes(heightfile.read(2),'little'))

    heightfile.close()
    prev_area_scale = entry[2]
    
img.save('heightmap_HIRES_%s.png'%prev_area_scale)

# This script outputs the following images, all with 16-bit grayscale colour:
#
# heightmap_HIRES_32.0.png  - 256x256     -  96 KB
# heightmap_HIRES_16.0.png  - 512x512     - 346 KB
# heightmap_HIRES_8.0.png   - 1024x1024   -   1 MB
# heightmap_HIRES_4.0.png   - 2048x2048   -   4 MB
# heightmap_HIRES_2.0.png   - 4096x4096   -  14 MB
# heightmap_HIRES_1.png     - 8192x8192   -  46 MB
# heightmap_HIRES_0.5.png   - 16384x16384 - 141 MB
# heightmap_HIRES_0.25.png  - 32768x32768 - 416 MB
# heightmap_HIRES_0.125.png - 65536x65536 -   1 GB
#
# Since these files are huge, I resized the 65536x65536 back down to 16384x16384 and uploaded it to mega:
# https://mega.nz/file/rdEEgLJT#qAB5b9yQYRJPkiZnwgdin9H88qsnR9C-bg-B_wMFWg0
#
# (I did this instead of uploading the original 16384x16384, because there are artifacts in the lowres data.)
