import os
from enum import Enum

import PIL
import torch
from torchvision import transforms


IMAGENET_MEAN = [0.485, 0.456, 0.406]
IMAGENET_STD = [0.229, 0.224, 0.225]

class DatasetSplit(Enum):
    TRAIN = "train"

class PVDataset(torch.utils.data.Dataset):
    """
    PyTorch Dataset for a dynamic dataset.
    """

    def __init__(
        self,
        source,
        split = DatasetSplit.TRAIN,
        **kwargs,
    ):
        """
        Args:
            source: [str]. Path to the directory where images are saved.
        """
        super().__init__()
        self.source = source
        self.split = split
        self.transform_std = IMAGENET_STD
        self.transform_mean = IMAGENET_MEAN
        self.imgpaths_of_dataset, self.data_to_iterate = self.get_image_data()

        self.transform_img = [
            transforms.Resize(329),
            # transforms.RandomRotation(rotate_degrees, transforms.InterpolationMode.BILINEAR),
            transforms.ColorJitter(0.0, 0.0, 0.0),
            transforms.RandomHorizontalFlip(0.0),
            transforms.RandomVerticalFlip(0.0),
            transforms.RandomGrayscale(0.0),
            transforms.RandomAffine(0, 
                                    translate=(0.0, 0.0),
                                    scale=(1.0, 1.0),
                                    interpolation=transforms.InterpolationMode.BILINEAR),
            transforms.CenterCrop(288),
            transforms.ToTensor(),
            transforms.Normalize(mean=IMAGENET_MEAN, std=IMAGENET_STD),
        ]
        self.transform_img = transforms.Compose(self.transform_img)

        self.imagesize = (3, 288, 288)

    def __getitem__(self, idx):
        
        #image_path = self.data_to_iterate[idx]
        _, _, image_path, _ = self.data_to_iterate[idx]

        image = PIL.Image.open(image_path).convert("RGB")
        image = self.transform_img(image)

        mask = torch.zeros([1, *image.size()[1:]])

        return {
            "image": image,
            "mask" : mask,
            "classname": "sample",
            "anomaly": "good",
            "is_anomaly": int("good" != "good"),
            "image_name": "/".join(image_path.split("/")[-4:]),
            "image_path": image_path,
        }

    def __len__(self):
        return len(self.data_to_iterate)

    def get_image_data(self):
        imgpaths_per_class = {}
        maskpaths_per_class = {}

        imgpaths_per_class["sample"] = {}
        maskpaths_per_class["sample"] = {}

        # TODO: Add filtering and listing image files in the source. Here we are filtering image files that only cointain numbers and filtering
        #       the numbers out that don't have a file named one lesser than it (except for 1)...

        foundNumberedPNGFiles = []
        foundNumberedPNGFile = {}

        for file in os.listdir(self.source):

            splittedFileName = file.split(".")

            if len(splittedFileName) == 2 and splittedFileName[-1] == "png" and splittedFileName[0].isdigit():

                foundNumberedPNGFile[file] = int(splittedFileName[0])
                foundNumberedPNGFiles.append(foundNumberedPNGFile)

        #for theImageFile in foundNumberedPNGFiles:
        #
        #    minus_one_exists = False
        #    plus_one_exists = False
        #    minus_plus_one_exists = False
        #
        #    fullNameKeys = list(theImageFile.keys())
        #    numberKeyValues = list(theImageFile.values())
        #
        #    theFullName = fullNameKeys[0]
        #    theNumber = numberKeyValues[0]
        #
        #    if theNumber != 1:
        #
        #        for anotherImageFile in foundNumberedPNGFiles:
        #
        #            theOtherNumber = list(anotherImageFile.values())
        #            theOtherNumber = theOtherNumber[0]
        #
        #            if theOtherNumber == theNumber + 1:
        #
        #                plus_one_exists = True
        #
        #            elif theOtherNumber == theNumber - 1:
        #
        #                minus_one_exists = True
        #
        #    else:
        #
        #        plus_one_exists = True
        #        minus_one_exists = True
        #
        #    if not plus_one_exists and not minus_one_exists:
        #
        #        foundNumberedPNGFiles.remove(theImageFile)

        imgpaths_per_class["sample"]["good"] = []

        fileIndex = 0

        for foundPNGFile in foundNumberedPNGFiles:

            trainingImagePath = list(foundPNGFile.keys())
            trainingImagePath = trainingImagePath[fileIndex]

            print("Length of foundNumberedPNGFiles: " + str(len(foundNumberedPNGFiles)) + "\n")
            print("First three elements of 'foundNumberedPNGFiles': " + str(foundNumberedPNGFiles[0]) + "\n" + str(foundNumberedPNGFiles[1]) + "\n" + str(foundNumberedPNGFiles[2]) + "\n")

            print("Value of 'self.source': " + str(self.source) + "\n")
            print("Type of 'self.source': " + str(type(self.source)) + "\n")

            sourcePathDirectory = str(self.source)

            print("Type of 'sourcePathDirectory': " + str(type(sourcePathDirectory)) + "\n")

            trainingImagePath = os.path.join(sourcePathDirectory, trainingImagePath)

            print("Resulting 'trainingImagePath' value: " + str(trainingImagePath))

            imgpaths_per_class["sample"]["good"].append(trainingImagePath)

            fileIndex = fileIndex + 1

        maskpaths_per_class["sample"]["good"] = None

        # Unrolls the data dictionary to an easy-to-iterate list.
        data_to_iterate = []
        
        print("\n\n\nImage Paths at the end: \n\n")

        for i, image_path in enumerate(imgpaths_per_class["sample"]["good"]):
            
            print(str(image_path) + "\n")
            
            data_tuple = ["sample", "good", image_path]
            data_tuple.append(None)
            data_to_iterate.append(data_tuple)

        return imgpaths_per_class, data_to_iterate
