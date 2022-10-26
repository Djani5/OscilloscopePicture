import cv2
import numpy as np
k = 0
p = cv2.imread("circle_full.png")
print("{", end="")
for i in range(64):
    for j in range(64):
        if p[i][j][0] == 0:
            k = k+1
            print(j, end=",")
print("};")
print(k)