#!/usr/bin/env python

#____________________________________________________________________________________________________________________
#
# This code initially, defines two callback functions and the function which will analyze given image and show the 
# results. The callback function called on recieveing image message converts the data of image message to PIL 
# (pillow) image and the one called on string message, opens the image on given path as a string message with 
# PIL.Image.Open(). In the analysis function, it gets the saved state of anomaly detection model for wood and
# applies transforms with torchvision.transforms. After applying transforms to the image, it predicts the results 
# calling _predict() method and giving the image converted from ROS sensor_msgs/Image as a one element list. As 
# _predict() method return the segmentations, scores and features it will append segmentations, scores and features 
# into their respectives lists inside a dictionary whichs has keys of "segmentations", "scores" and "features" and 
# an empty list as value of each key. After appending values to lists in dictionaries, through a number of 
# calculations it normalizes segmentations and scores to be used on creating segmentation images.
# Then, creates an instance of simplenet and initializes a ROS node that listens to  ROS Image 
# and String topics to get name of the image file or the image on which analysis will be done. After initializing 
# the node creates subscribers and publishers for listening to string and image topics and publishing into image and 
# string topics.  applies transforms with torchvision.transforms. After applying 
# transforms to the image, it predicts the results calling _predict() method and giving the frame we got with 
# cv2.VideoCapture() and read() to _predict() method as a one element list. As _predict() method return the 
# segmentations, scores and features it will append segmentations, scores and features into their respectives lists 
# inside a dictionary whichs has keys of "segmentations", "scores" and "features" and an empty list as value of each 
# key. After appending values to lists in dictionaries, through a number of calculations it normalizes segmentations 
# and scores to be used on creating segmentation images. After normalizations, using cv2.imshow() method it will 
# display frames from the camera and their respective segmentation images. After closing of any of windows both 
# windows will shut down, using cv2.destroyAllWindows() method.
#
#--------------------------------------------------------------------------------------------------------------------


# Here we are just importing libraries needed for the code...

import argparse
import copy
import os
import sys
import math
import numpy as np
import matplotlib
import matplotlib.pyplot as plt
import cv2
import PIL
import rospy
import torch
import tqdm
import torch.utils.tensorboard
from sensor_msgs.msg import Image
from std_msgs.msg import String
from live_analysis_ros.msg import testModelMsg, testResultMsg
from torchvision import transforms
from io import BytesIO
from ultralytics import YOLO


# This function initializes and prepares the simplenet and the model for subsequent analyzes

def InitializeSimpleNet():
    
    # Here we are moving to our directory to import classes in codes inside the directory this code is in...
    
    sys.path.append("src")
    import backbones
    import common
    import metrics
    import simplenet 
    import utils
    
    # Switching matplot backend from default one (probably 'tkagg') to 'agg' as ROS subscribe callback 
    # functions are running on different threads and matplotlib doesn't work work well with different
    # threads with default backend...
    
    matplotlib.use('agg')
    
    # Here we are initializing a bool to control if the code finished with inferring on the latest frame it 
    # got...
    
    global isInferringOnFrame
    isInferringOnFrame = False
    
    # Here we are initializing a bool to control if it received image or the path to the image file as ROS
    # message...
    
    global hasRecievedImage
    hasRecievedImage = False
    
    # Setting ckpt.pth directory (to reload state of the model)...
    
    global modelStatePath
    modelStatePath="/home/mericgeren/catkin_ws/src/live_analysis_ros/src/results/MVTecAD_Results/simplenet_mvtec/run/models/0/mvtec_wood/ckpt.pth"
    
    # Setting the torch device and fixing seeds using device and seed value of 0...

    global device
    device = torch.device("cuda:0")
    utils.fix_seeds(0, device)

    # Setting the torchvision transforms to be applied on frames from cameras...

    global pilTransforms
    pilTransforms = [transforms.Resize(329), transforms.ColorJitter(0.0, 0.0, 0.0), transforms.RandomHorizontalFlip(0.0), transforms.RandomVerticalFlip(0.0), transforms.RandomGrayscale(0.0), transforms.RandomAffine(0, translate = (0.0, 0.0), scale = (1.0, 1.0), interpolation = transforms.InterpolationMode.BILINEAR), transforms.CenterCrop(288), transforms.ToTensor(), transforms.Normalize(mean = [0.485, 0.456, 0.406], std = [0.229, 0.224, 0.225]),]
    pilTransforms = transforms.Compose(pilTransforms)
    
    # Creating and initializing the SimpleNet and it's backbone here...

    global backbone
    backbone = backbones.load("wideresnet50")
    backbone.name = "wideresnet50"
    backbone.seed = None
    global theNet
    theNet = simplenet.SimpleNet(device)
    theNet.load(device = device, backbone = backbone, layers_to_extract_from = ["layer2", "layer3"], input_shape = (3, 288, 288), pretrain_embed_dimension = 1536, target_embed_dimension = 1536, patchsize = 3, patchstride = 1, meta_epochs = 40, embedding_size = 256, aed_meta_epochs = 1, gan_epochs = 4, noise_std = 0.015, mix_noise = 1, noise_type = "GAU", dsc_layers = 2, dsc_hidden = 1024, dsc_margin=.5, dsc_lr = 0.0002, auto_noise = 0, train_backbone = False, cos_lr = False, lr = 1e-3, pre_proj = 1, proj_layer_type = 0)

    # Loading the state of the model here...

    if(os.path.exists(modelStatePath)):
        
        print("Found ckpt.pth for wood...\n\n")
        global state_dicts
        state_dicts = torch.load(modelStatePath, map_location=theNet.device)
        
        if "discriminator" in state_dicts:
        
            print("\n\n FOUND DISCRIMINATOR...\n\n")
            theNet.discriminator.load_state_dict(state_dicts["discriminator"])
            
        if "pre_projection" in state_dicts:
        
            print("\n\n FOUND PRE PROJECTION...\n\n")
            theNet.pre_projection.load_state_dict(state_dicts["pre_projection"])

    # Here we stop the code, if path is not valid or the path does not exists...

    else:

        sys.exit("\n\nPath \"" + modelStatePath + "\" does not exists.\nQUITTING...")

    # Here we create the dictionary to hold output of _predict method...

    global aggregator
    aggregator = {"scores": [], "segmentations": [], "features": []}

# This function receives the ROS image message. If, selected model argument is 'simplenet_wood', the node
# takes the image and converts it to a pillow image and calls AnalyzeImage with converted image. If,
# selected model argument is 'yolo', the node will call the predict method of yolo on image converted to
# OpenCV image and then, prepare the result to be displayed...

def OnROSMessageReceived(incomingModelTest):

    global isInferringOnFrame
    global hasRecievedImage

    global minBlobArea
    global minConfidence
    
    #TODO: Add testResultMsg here...

    global resultingImages
    resultingImages = []
    global resultingHeatMaps
    resultingHeatMaps = []
    global resultingConfidences
    resultingConfidences = []
    global resultingClasses
    resultingClasses = []

    processStartTime = time.time()

    try:

        if not isInferringOnFrame:

            isInferringOnFrame = True
            hasRecievedImage = True

            incomingHeader = incomingModelTest.header
            testID = incomingModelTest.id
            incomingImages = incomingModelTest.images
            modelSelected = incomingModelTest.modelName

            deviceGPU = incomingModelTest.gpu

            minBlobArea = incomingModelTest.areaTh
            minConfidence = incomingModelTest.confidanceTh
            withBBox = incomingModelTest.withBoundingBox

            for imageMessage in incomingImages:

                data = imageMessage.data
                imageHeight = imageMessage.height
                imageWidth = imageMessage.width

                opencvImage = np.frombuffer(imageMessage.data, dtype=np.uint8).reshape((imageHeight, imageWidth, -1))

                imageMessage = None
                data = None

                if modelSelected == "simplenet":
                

                    image = PIL.Image.fromarray(cv2.cvtColor(opencvImage, cv2.COLOR_BGR2RGB))
                
                    opencvImage = None
                
                    SimpleNetTest(image)
           
                elif modelSelected == "yolo":

                    model = YOLO("yolov8n.pt")
                    yoloResults = model(opencvImage)


                    yoloResult = yoloResults[0]
                    yoloResultBB = yoloResult.boxes
                    normalizedBoxes = yoloResultBB.xyxyn

                    yoloConfidences = yoloResultBB.conf
                    yoloClasses = yoloResultBB.cls

                    yoloResult.show()

            outboundResult = testResultMsg()

            outboundResult.header = incomingHeader
            outboundResult.id = testID
            outboundResult.totalImgs = len(incomingImages)
            outboundResult.imgResultStrs = resultingClasses
            outboundResult.imgResultConfidance = resultingConfidences
            outboundResult.heatMaps = resultingHeatMaps
            outboundResult.resultImgs = resultingImages

            processEndTime  = time.time()

            timePassed = processEndTime - processStartTime

            outboundResult.totalTime = timePassed

            outboundResultPublisher.publish(outboundResult)

#TODO: call yolo predict method and prepare results here...

    except Exception as e:
    
        rospy.logerr("Error processing image: %s", str(e))

# This function analyzes image given and publishes results 

def SimpleNetTest(image):
    
    global isInferringOnFrame
    global pilTransforms
    global theNet
    global aggregator

    global resultingImages
    global resultingHeatMaps
    global resultingConfidences
    global resultingClasses

    global minBlobArea
    global minConfidence

    original_img_std = [0.229, 0.224, 0.225]
    original_img_mean = [0.485, 0.456, 0.406]

    original_img_std = np.array(original_img_std).reshape(-1, 1, 1)
    original_img_mean = np.array(original_img_mean).reshape(-1, 1, 1)

    originalImage = image

    image = pilTransforms(image)

    originalImage = image

    originalImage = np.clip((originalImage.numpy() * original_img_std + original_img_mean) * 255, 0, 255).astype(np.uint8)

    image = image.unsqueeze(0)

    # Here we call the _predict() method with the converted and tranformed PIL image...

    scores, segmentations, features = theNet._predict(image)
    
    #print("\n\nPrediction complete...\n\n")
    
    # Here we append scores, segmentations and features to dictionary…

    aggregator["scores"].append(scores)
    aggregator["segmentations"].append(segmentations)
    aggregator["features"].append(features)
    
    # Here we make some calculations on scores and segmentations to ready them for creation of
    # segmentation image...
    
    scores = np.array(aggregator["scores"])
    min_scores = scores.min(axis=-1).reshape(-1, 1)
    max_scores = scores.max(axis=-1).reshape(-1, 1)
    #scores = (scores - min_scores) / (max_scores - min_scores)
    #scores = np.mean(scores, axis=0)

    segmentations = np.array(aggregator["segmentations"])
    min_scores = (
        segmentations.reshape(len(segmentations), -1)
        .min(axis=-1)
        .reshape(-1, 1, 1, 1)
    )
    max_scores = (
        segmentations.reshape(len(segmentations), -1)
        .max(axis=-1)
        .reshape(-1, 1, 1, 1)
    )
    segmentations = (segmentations - min_scores) / (max_scores - min_scores)
    segmentations = np.mean(segmentations, axis=0)

    #print("\n\nCalculations on scores and segmentations are complete...\n\n")

    # Here we colorize segmentations accordingly to their values with 'viridis' color map...

    for segmentation in segmentations:

        #print("\n\nAt \"imshow()\" method of matplotlib.pyplot...\n\n")
        
        #print("Here is the shape:" + "\n\n\n" + str(segmentation.shape) + "\n\n")
        

        countCanBeSeen = 0
        countExceedingMax = 0
        commonConfidenceValue = 0

        for i in range(segmentation.shape[0]):

            for j in range(segmentation.shape[1]):

                if segmentation[i,j] > minConfidence and not withBBox:

                    countCanBeSeen = countCanBeSeen + 1
                    commonConfidenceValue = commonConfidenceValue + segmentation[i,j]

                    if segmentation[i,j] > 1:

                        countExceedingMax = countExceedingMax + 1

                if segmentation[i,j] < minConfidence:

                    segmentation[i,j] = 0

                #segmentation[i,j] = segmentation[i,j] * 255
                #segmentation[i,j] = int(round(segmentation[i,j]))

        if not withBBox:

            if countCanBeSeen == 0:

                    print("\n\ncountCanBeSeen is 0\n\n")

                    commonConfidenceValue = 0
            
            commonConfidenceValue = commonConfidenceValue/countCanBeSeen
            commonConfidenceValue = round(commonConfidenceValue,6)

            if commonConfidenceValue != 0:

                resultingClasses.append("Anomaly")
                resultingConfidences.append(commonConfidenceValue)

        else:

            filtered = copy.deepcopy(segmentation)

        segmentation = (segmentation * 255).round().astype(np.uint8)

        #segmentation.astype(np.uint8)
        
        #print("\n\nType of segmetation: " + str(type(segmentation)) + "\n\n")
        #print("\n\ndtype of segmetation: " + str(segmentation.dtype) + "\n\n")

            #contours = cv2.findContours(binBWImage, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

            #contours = contours[0] if len(contours) == 2 else contours[1]

            #for contour in contours:

            #    x, y, w, h = cv2.boundingRect(contour)        

        resultingImage = copy.deepcopy(segmentation)
        resultingImage = cv2.cvtColor(resultingImage, cv2.COLOR_GRAY2RGB)

        #first_element = resultingImage[0,0]

        #print("First Element: " + str(first_element))
        #print("\n\n" + str(type(resultingImage)) + "\n\n")

        #resultingImage = cv2.applyColorMap(resultingImage,cv2.COLORMAP_VIRIDIS)

        #print("\n\nCurrent values of result:\n\n" + str(resultingImage) + "\n\n")
        
        if withBBox:

            blobConfidences = []
            blobClasses = []

            binBWImage = copy.deepcopy(segmentation)

            #print("\n\nType of segmentation: " + str(type(segmentation)) + "\n\n")
            #print("\n\nType of resultingImage: " + str(type(resultingImage)) + "\n\n")
            #print("\n\nShape of filtered: " + str(type(filtered)) + "\n\n")
            #print("\n\nShape of binBWImage: " + str(type(binBWImage)) + "\n\n")

            #if segmentation is None:

                #print("\n\nsegmentation is empty")
            
            #if resultingImage is None:

                #print("\n\nresulting Image is empty")

            #if filtered is None:

                #print("\n\nfiltered is empty\n\n")

            #if binBWImage is None:

                #print("\n\nbinBWImage is empty\n\n")

            #print("\n\nCopied 'segmentation' into 'binBWImage'\n\n")

            thresholdFilteredImage = cv2.threshold(binBWImage, round(255*minConfidence), 255, cv2.THRESH_BINARY)
            
            #print("\n\nCreated black and white pixel image\n\n")
            
            #print("\n\nthresholdFilteredImage:\n\n" + str(thresholdFilteredImage[1])  + "\n\n")

            #print("\n\nShape of thresholdFilteredImage: " + str(type(thresholdFilteredImage[1])) + "\n\n")

            #print("\n\nDisplayed BW image\n\n")

            #if binBWImage is None:

                #print("\n\nbinBWImage is empty\n\n")
            
            totalLabels, labels, stats, centroids = cv2.connectedComponentsWithStats(thresholdFilteredImage[1], connectivity=8)

            sizeFilteredImage = np.zeros((labels.shape))

            labelsToDelete = []

            #print("\n\nIdentified blobs\n\n")

            #TODO: Traverse labels (id of each blob) and by doing that, first, get bbox x,y,w,h and calculate
            #      the average confidence for the blob (by traversing points between upper left corner and 
            #      lower right corner in original float numpy array and adding 1 to a varibale holding total
            #      points in the blob and adding confidence of the current point to another variable holding
            #      total confidence. Then, dividing total value to number of points.), after that, add the 
            #      bounding box using the coordinates at the hand. Then, get the center of blob with 
            #      'centroid' and if x value of the center is smaller than 144 calculate 'textPosX' to the 
            #      right of bounding box, otherwise, calculate it to the left. If, y value of the center is
            #      is smaller than 144, calculate 'textPosY' to bottom of the bounding box, othervise, 
            #      calculate it to top of bounding box. Then, put the texts showing confidence to the 
            #      calculated position and then repeat these steps for each blob while traversing labels...
            
            #Note: 144,144 is the middle of the image...
            
            #Note: 'filtered' holds the original array with float confidence values...
            
            #Note: You can access the stats with labels. Example: 'stats[label, cv2.CC_STAT_WIDTH]' gives
            #      width of bounding box...
            
            #Note: label = 0 is background. Thus you sjould strat from 1 to traverse labels...
            
            #Note: Numpy array indexing: arr[row, col], So you traverse Y in outer for, X in inner for...

            for label in  range(1, totalLabels):
            
                blobArea = stats[label, cv2.CC_STAT_AREA]

                if blobArea >= minBlobArea:

                    sizeFilteredImage[label] = 255

                else:

                    labelsToDelete.append(label)

            for labelToDelete in labelsToDelete:

                del labels[labelToDelete]
                del stats[labelToDelete]
                del centroids[labelToDelete]

                totalLabels = totalLabels - 1

            for i in range(0, sizeFilteredImage.shape[0]):
            
                for j in range(0, sizeFilteredImage.shape[1]):

                    if sizeFilteredImage[i, j] == 0:

                        resultingImage[i, j] = 0
                        filtered[i, j] = 0

            for label in  range(1, totalLabels):

                bboxLeft = stats[label, cv2.CC_STAT_LEFT]
                bboxTop = stats[label, cv2.CC_STAT_TOP]
                
                width = stats[label, cv2.CC_STAT_WIDTH]
                height = stats[label, cv2.CC_STAT_HEIGHT]

                blobArea = stats[label, cv2.CC_STAT_AREA]

                bboxRight = bboxLeft + width
                bboxBottom = bboxTop + height

                if bboxRight > 287:

                    bboxRight = 287

                if bboxBottom > 287:

                    bboxBottom = 287


                countOfPointsInBlob = 0
                averageConfidenceOfBlob = 0

                labelCentroidX = int(centroids[label][0])
                labelCentroidY = int(centroids[label][1])

                textPosX = 0
                textPosY = 0

                for blobTraverserY in range(bboxTop, bboxBottom):

                    for blobTraverserX in range(bboxLeft, bboxRight):

                        if filtered[blobTraverserY, blobTraverserX] > minConfidence:

                            averageConfidenceOfBlob = averageConfidenceOfBlob + filtered[blobTraverserY, blobTraverserX]

                if blobArea == 0:

                    print("\n\ncountOfPointsInBlob is 0\n\n")

                    averageConfidenceOfBlob = 0

                averageConfidenceOfBlob = averageConfidenceOfBlob/blobArea

                averageConfidenceOfBlob = round(averageConfidenceOfBlob, 2)

                blobConfidences.append(averageConfidenceOfBlob)
                blobClasses.append("Anomaly")

                #print("\n\nAverage confidence of blob: " + str(averageConfidenceOfBlob) + "\n\n")

                #print("\n\nText Width:" + str(textWidth) + "\nText Height: " + str(textHeight)  + "\n\n")

                if labelCentroidX < 144:

                    textPosX = bboxRight

                else:

                    textPosX = bboxLeft

                if labelCentroidY < 144:

                    textPosY = bboxBottom

                else:

                    textPosY = bboxTop

                if bboxRight < 280:

                    bboxRight = bboxRight + 5

                if bboxLeft > 5:

                    bboxLeft = bboxLeft - 5

                if bboxTop > 5:

                    bboxTop = bboxTop - 5

                if bboxBottom < 280:

                    bboxBottom = bboxBottom + 5

                #print("\n\nCalculated Bounding Box position\n\n")

                resultingImage = cv2.applyColorMap(resultingImage,cv2.COLORMAP_VIRIDIS)

                theHeatMap = copy.deepcopy(resultingImage)

                cv2.rectangle(resultingImage, (bboxLeft, bboxTop), (bboxRight, bboxBottom), (255, 0, 0), 2)

                #print("\n\nCalculated text position\n\n")


                cv2.putText(resultingImage, "Anomaly: " + str(averageConfidenceOfBlob), (textPosX, textPosY), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 1, cv2.LINE_AA)

                resultingConfidences.append(averageConfidenceOfBlob)
                resultingClasses.append("Anomaly")

                

        else:

            resultingImage = cv2.applyColorMap(resultingImage,cv2.COLORMAP_VIRIDIS)

        #cv2.imshow('Image', cv2.cvtColor(resultingImage, cv2.COLOR_RGBA2BGR))

        #cv2.waitKey(1)

        # Here we are converting opencv image into ROS image and publish ROS image...

        #imageData = np.array(resultingImage).tobytes()

        #rosImageMessage = Image()
        #rosImageMessage.header.stamp = rospy.Time.now()
        #rosImageMessage.header.frame_id = 'resulting_image'
        #rosImageMessage.height = resultingImage.shape[0]
        #rosImageMessage.width = resultingImage.shape[1]

        #rosImageMessage.is_bigendian = False
        #rosImageMessage.encoding = "bgr8"
        #rosImageMessage.step = 3 * resultingImage.shape[1]

        #rosImageMessage.data = imageData

#TODO: Add resultingImage message and heatmap message

        if withBBox:

            #analysisResultPublisher.publish("Classes: " + str(blobClasses) + "Confidences: " + str(blobConfidences))

            imageData = np.array(resultingImage).tobytes()

            rosImageMessage = Image()
            rosImageMessage.header.stamp = rospy.Time.now()
            rosImageMessage.header.frame_id = 'resulting_image'
            rosImageMessage.height = resultingImage.shape[0]
            rosImageMessage.width = resultingImage.shape[1]

            rosImageMessage.is_bigendian = False
            rosImageMessage.encoding = "bgr8"
            rosImageMessage.step = 3 * resultingImage.shape[1]

            rosImageMessage.data = imageData

            resultingImages.append(rosImageMessage)

            imageData = np.array(theHeatMap).tobytes()

            rosImageMessage = Image()
            rosImageMessage.header.stamp = rospy.Time.now()
            rosImageMessage.header.frame_id = 'heat_map'
            rosImageMessage.height = theHeatMap.shape[0]
            rosImageMessage.width = theHeatMap.shape[1]

            rosImageMessage.is_bigendian = False
            rosImageMessage.encoding = "bgr8"
            rosImageMessage.step = 3 * theHeatMap.shape[1]

            rosImageMessage.data = imageData

            resultingHeatMaps.append(rosImageMessage)

        else:

            #analysisResultPublisher.publish("Classes: Anomaly" + " Confidences: " + str(commonConfidenceValue))

            imageData = np.array(resultingImage).tobytes()

            rosImageMessage = Image()
            rosImageMessage.header.stamp = rospy.Time.now()
            rosImageMessage.header.frame_id = 'resulting_image'
            rosImageMessage.height = resultingImage.shape[0]
            rosImageMessage.width = resultingImage.shape[1]

            rosImageMessage.is_bigendian = False
            rosImageMessage.encoding = "bgr8"
            rosImageMessage.step = 3 * resultingImage.shape[1]

            rosImageMessage.data = imageData

            resultingImages.append(rosImageMessage)
            resultingHeatMaps.append(rosImageMessage)

        # Here we are getting and publishing result values as a ROS string message...

    aggregator["scores"] = []
    aggregator["segmentations"] = []
    aggregator["features"] = []

    scores = None
    segmentations = None
    features = None

    segmentation = None
    filtered = None
    binBWImage = None
    thresholdFilteredImage = None

    theHeatMap = None
    sizeFilteredImage = None
    labelsToDelete = None

    labels = None
    stats = None
    centroids = None

    colorMap = None

    image = None
    rosImageMessage = None
    imageData = None

    resultingImage = None

    isInferringOnFrame = False

# Here we initialize the ROS node and create listeners and subscribers for receiving target image and
# publishing  results...

InitializeSimpleNet()

outboundResultPublisher = rospy.Publisher('QPATH/test_result', testResultMsg, queue_size=1)

rospy.init_node('analysis_node', anonymous=True)

rospy.Subscriber('QPATH/model_test_topic', testModelMsg, OnROSMessageReceived)

rospy.spin()

