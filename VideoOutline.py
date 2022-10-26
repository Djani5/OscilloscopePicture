import cv2
import numpy as np
cap = cv2.VideoCapture(0)

min_v = np.array([0, 0, 100])
max_v = np.array([255, 255, 150])

while(True):
    ret, frame = cap.read()

    imgHSV = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

    mask = cv2.inRange(imgHSV, min_v, max_v)

    cv2.imshow("mask", mask)

    if cv2.waitKey(10) & 0xFF == ord(' '):
        break

cap.release()
cv2.destroyAllWindows()