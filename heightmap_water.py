from PIL import Image, ImageDraw, ImageFilter
import os
import math

for mat in range(8):
    img = Image.new("RGBA", (0x40*6*2, 0x40*6*2))
    i = 0
    for folder, _, files in os.walk('terrain_water'):
        if folder == 'terrain_water':
            continue
        y_high = [0,0,0,1,2,1,
                  1,2,2,0,0,0,
                  1,1,2,2,1,2,
                  3,4,3,3,4,4,
                  5,5,5,3,3,4,
                  4,3,4,5,5,5][i] * 0x80
        x_high = [0,1,2,0,0,1,
                  2,1,2,3,4,5,
                  3,4,3,4,5,5,
                  0,0,1,2,1,2,
                  0,1,2,3,4,3,
                  4,5,5,3,4,5][i] * 0x80
        
        for file in files:
            if file == '.gitignore':
                continue
            tile = int(file[-13:-11],0x10)%4
            if tile == 0:
                x_mid = 0
                y_mid = 0
            elif tile == 1:
                x_mid = 0x40
                y_mid = 0
            elif tile == 2:
                x_mid = 0
                y_mid = 0x40
            elif tile == 3:
                x_mid = 0x40
                y_mid = 0x40
            print(file)
            f = open(folder+'/'+file, 'rb')
            for y in range(y_high + y_mid, y_high + y_mid + 0x40):
                for x in range(x_high + x_mid, x_high + x_mid + 0x40):
                    height = int.from_bytes(f.read(2),'little') // 256
                    x_flow = int.from_bytes(f.read(2),'little') - 0x8000
                    y_flow = int.from_bytes(f.read(2),'little') - 0x8000
                    f.read(1)
                    material = int.from_bytes(f.read(1),'little')
                    assert material < 8
                    angle = int(math.atan2(y_flow, x_flow) * 128/math.pi + 128)
                    magnitude = int(23*math.log(1+math.hypot(x_flow, y_flow)))
                    if material == mat:
                        img.putpixel((x,y), (height, height, height, 255))
            f.close()
        i += 1
    img.save('heightmap_water_mat%d.png'%mat)
            
