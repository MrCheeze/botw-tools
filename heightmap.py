from PIL import Image, ImageDraw
import os

img = Image.new("RGB", (0x100*6*2, 0x100*6*2))

file_paths = []
# os.walk does not guarantee order, for example mac file system will have random results,
# so need to sort it to make sure files are processed in order
for folder, _, files in os.walk('terrain'):
    if len(files) == 0:
        continue
    file_paths.append((folder, sorted(files)))
file_paths.sort()

i = 0
for folder, files in file_paths:
    y_high = [0,0,0,1,2,1,
              1,2,2,0,0,0,
              1,1,2,2,1,2,
              3,4,3,3,4,4,
              5,5,5,3,3,4,
              4,3,4,5,5,5][i] * 0x200
    x_high = [0,1,2,0,0,1,
              2,1,2,3,4,5,
              3,4,3,4,5,5,
              0,0,1,2,1,2,
              0,1,2,3,4,3,
              4,5,5,3,4,5][i] * 0x200
    
    x_mid = 0
    y_mid = 0
    for file in files:
        print(file)
        f = open(folder+'/'+file, 'rb')
        for y in range(y_high + y_mid, y_high + y_mid + 0x100):
            for x in range(x_high + x_mid, x_high + x_mid + 0x100):
                val = int.from_bytes(f.read(2),'little')
                img.putpixel((x,y), (val//256, val//256, val//256))
        f.close()
        x_mid += 0x100
        if x_mid == 0x200:
            x_mid = 0
            y_mid += 0x100
    i += 1
img.save('heightmap.png')
            
