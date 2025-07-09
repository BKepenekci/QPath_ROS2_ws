#!/usr/bin/env python

# Doing imports

import os
import time
import numpy as np
import cv2
import rospy
import std_msgs.msg
from sensor_msgs.msg import Image
from live_analysis_ros.msg import testModelMsg, testResultMsg, trainAlgorithmMsg, trainResultMsg
from io import BytesIO

# Creating the publisher

trainAlgorithmPublisher = rospy.Publisher("QPATH/model_train_topic", trainAlgorithmMsg, queue_size=10)

# initializing the node

rospy.init_node('train_node_testing', anonymous = True)

# TODO: Add a while loop which will loop for a certain amount of iterations to test part by part sending pf images in multiple messages

i = 0
imageNumberToBeTraversed = 0

# Before getting the images we get a list of the images at the directory we will get images from

imageList = os.listdir("/home/mericgeren/mvtech_dataset/wood/train/good")

while(i < len(imageList)):

    print("\n\n\n" + "Value of 'i': " + str(i))

    if len(imageList) - i < 10:

        imageNumberToBeTraversed = len(imageList) - i

        print("Remaining number of images: " + str(len(imageList) - i)  + "\n")

    else:

        print("Getting next 10 images\n") 

        imageNumberToBeTraversed = 10

    # Creating the trainAlgoritmMsg message

    trainAlgorithmMessage = trainAlgorithmMsg()

    # Creating the header of the message

    trainAlgorithmMessageHeader = std_msgs.msg.Header()
    trainAlgorithmMessageHeader.stamp = rospy.Time.now()

    # Filling header, id, modelName and modelID fields of the message

    trainAlgorithmMessage.header = trainAlgorithmMessageHeader
    trainAlgorithmMessage.id = "1"
    #trainAlgorithmMessage.modelName = "firstTrainedModel"
    trainAlgorithmMessage.modelName = "modelTrainedWithAverage"
    trainAlgorithmMessage.modelID = "1"

    # Getting the images to be used as training images and converting them to ROS Image messages and put them on an array of Image messages

    for imageCount in range(imageNumberToBeTraversed):

        # Reading the image and converting it to ROS Image message data

        print(str(i + imageCount) + "\n")
        print( imageList[i + imageCount] + "\n")

        openCVImage = cv2.imread("/home/mericgeren/mvtech_dataset/wood/train/good/" + imageList[i])
        imageData = np.array(openCVImage).tobytes()

        # Creating Image message to be appended to a list of ROS Image messages

        trainingImage = Image()
        trainingImage.header.stamp = rospy.Time.now()
        trainingImage.header.frame_id = 'training_image'
        trainingImage.height = openCVImage.shape[0]
        trainingImage.width = openCVImage.shape[1]
        trainingImage.is_bigendian = False
        trainingImage.encoding = "bgr8"
        trainingImage.step = 3 * openCVImage.shape[1]
        trainingImage.data = imageData

        trainAlgorithmMessage.trainImages.append(trainingImage)

    # Here we are leaving eval image and annotation fields of the message empty, as we are testing a node
    # training simplenet model and as we are giving training images right here we don't have any access 
    # to segmentation images (annotations for simplenet) and thus a evaluation set

    trainAlgorithmMessage.evalImages = []
    trainAlgorithmMessage.trainSetAnnotations = []
    trainAlgorithmMessage.evalSetAnnotations = []

    # Filling epoc, batchsize, algorithmID, algorithmName, gpu, modelPath fields of the message

    trainAlgorithmMessage.epoc = 40
    trainAlgorithmMessage.batchsize = 10
    trainAlgorithmMessage.algorithmID = "1"
    trainAlgorithmMessage.algorithmName = "simplenet"
    trainAlgorithmMessage.gpu = "testDevice"
    trainAlgorithmMessage.modelPath = os.path.join(os.getcwd(),"trained_models")

    # If there is no other group of images to be sent, filesCompleted field is true, if there is another group of images to be sent then it's true

    if imageNumberToBeTraversed < 10:
        
        print("Image broadcast is complete \n\n\n")
        trainAlgorithmMessage.filesCompleted = True

    else:

         print("Image broadcast is continuing \n\n\n")
         trainAlgorithmMessage.filesCompleted = False

    # Publishing trainAlgorithmMsgü

    trainAlgorithmPublisher.publish(trainAlgorithmMessage)

    # Incrementing i value to traverse through the images and to determine if file transfer is completed

    i = i + imageNumberToBeTraversed

    # Waiting 20 seconds to give model training node enough time to save all the images sent to it

    time.sleep(20)
