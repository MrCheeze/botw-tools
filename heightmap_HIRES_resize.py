import struct
from PIL import Image, ImageDraw
import math
import numpy as np
import cv2

Image.MAX_IMAGE_PIXELS = 4294967296

img = Image.open("heightmap_HIRES_0.125.png")
img = Image.fromarray(cv2.resize(np.array(img), (16384, 16384)), mode='I;16')
img.save("heightmap_HIRES_0.125_resized.png")

# see the comment at the bottom of heightmap_HIRES.py
