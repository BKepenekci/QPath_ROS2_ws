import os
import sys
import math
import numpy as np
import cv2
import PIL
import torch
import tqdm
import torch.utils.tensorboard
from torchvision import transforms

# Here we are moving to our directory to import classes in codes inside the directory this code is in...

sys.path.append("src")
import backbones
import common
import metrics
import simplenet 
import utils

# Here we create the VideoCapture object and set it's format as "mjpeg" to capture frames from camera...

cap = cv2.VideoCapture("/dev/video0")
cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc('M', 'J', 'P', 'G'))

# We get the frame, convert it to pillow (PIL) image, transform it with torchvision.transforms, predict and use the 
# results to create and to show a segmentation image...

while 1:

    # Here we read the frame from camera....

    _, frame = cap.read()

    print("\n\nRead the frame...\n\n")

    cv2.imshow("Segmentation Mask", frame)

    # Waits for keyboard imput to close the window and break from the while loop to stop getting frames...

    if cv2.waitKey(1) & 0xFF == ord('q'):

        break

# Here we releasing camera resources and close windows we have opened to display the results...

print("\n\nHere we releasing camera resources and close windows we have opened to display the results...\n\n")

cap.release()
cv2.destroyAllWindows()
