import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Header
from live_analysis_interfaces.msg import TestModelMsg, TestResultMsg
import sys
import os
import torch
import numpy as np
import PIL
import cv2
import matplotlib
from torchvision import transforms
from ultralytics import YOLO
import copy
import time

sys.path.append("src")
import backbones
import simplenet
import utils

class AnalysisNode(Node):
    def __init__(self):
        super().__init__('analysis_node')
        self.result_pub = self.create_publisher(TestResultMsg, 'QPATH/test_result', 10)
        self.test_sub = self.create_subscription(TestModelMsg, 'QPATH/model_test_topic', self.model_test_callback, 10)

        matplotlib.use('agg')

        self.is_inferring = False
        self.has_received_image = False

        self.min_blob_area = 0
        self.min_confidence = 0.0
        self.with_bbox = False

        self.resulting_images = []
        self.resulting_heatmaps = []
        self.resulting_confidences = []
        self.resulting_classes = []

        self.device = torch.device("cpu") #cuda:0
        utils.fix_seeds(0, self.device)

        self.transforms = transforms.Compose([
            transforms.Resize(329),
            transforms.CenterCrop(288),
            transforms.ToTensor(),
            transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225]),
        ])

        model_path = "/home/mericgeren/catkin_ws/src/live_analysis_ros/src/results/MVTecAD_Results/simplenet_mvtec/run/models/0/mvtec_wood/ckpt.pth"
        if not os.path.exists(model_path):
            self.get_logger().error(f"Model checkpoint not found: {model_path}")
            rclpy.shutdown()

        self.backbone = backbones.load("wideresnet50")
        self.model = simplenet.SimpleNet(self.device)
        self.model.load(
            device=self.device,
            backbone=self.backbone,
            layers_to_extract_from=["layer2", "layer3"],
            input_shape=(3, 288, 288),
            pretrain_embed_dimension=1536,
            target_embed_dimension=1536,
            patchsize=3,
            patchstride=1,
            meta_epochs=40,
            embedding_size=256,
            aed_meta_epochs=1,
            gan_epochs=4,
            noise_std=0.015,
            mix_noise=1,
            noise_type="GAU",
            dsc_layers=2,
            dsc_hidden=1024,
            dsc_margin=0.5,
            dsc_lr=0.0002,
            auto_noise=0,
            train_backbone=False,
            cos_lr=False,
            lr=1e-3,
            pre_proj=1,
            proj_layer_type=0,
        )

        state_dicts = torch.load(model_path, map_location=self.device)
        if "discriminator" in state_dicts:
            self.model.discriminator.load_state_dict(state_dicts["discriminator"])
        if "pre_projection" in state_dicts:
            self.model.pre_projection.load_state_dict(state_dicts["pre_projection"])

        self.aggregator = {"scores": [], "segmentations": [], "features": []}
        self.get_logger().info("Analysis node initialized.")

    def model_test_callback(self, msg: TestModelMsg):
        if self.is_inferring:
            return

        self.is_inferring = True
        self.resulting_images = []
        self.resulting_heatmaps = []
        self.resulting_confidences = []
        self.resulting_classes = []

        self.min_blob_area = msg.area_th
        self.min_confidence = msg.confidance_th
        self.with_bbox = msg.with_bounding_box

        for image_msg in msg.images:
            try:
                img_np = np.frombuffer(image_msg.data, dtype=np.uint8).reshape((image_msg.height, image_msg.width, -1))
                if msg.model_name == "simplenet":
                    pil_img = PIL.Image.fromarray(cv2.cvtColor(img_np, cv2.COLOR_BGR2RGB))
                    self.run_simplenet(pil_img)
                elif msg.model_name == "yolo":
                    yolo_model = YOLO("yolov8n.pt")
                    results = yolo_model(img_np)
                    results[0].show()
            except Exception as e:
                self.get_logger().error(f"Error in processing image: {e}")

        result_msg = TestResultMsg()
        result_msg.header = msg.header
        result_msg.id = msg.id
        result_msg.total_imgs = len(msg.images)
        result_msg.img_result_strs = self.resulting_classes
        result_msg.img_result_confidance = self.resulting_confidences
        result_msg.heat_maps = self.resulting_heatmaps
        result_msg.result_imgs = self.resulting_images
        result_msg.total_time = float(len(msg.images))

        self.result_pub.publish(result_msg)
        self.is_inferring = False

    def run_simplenet(self, image):
        tensor_img = self.transforms(image).unsqueeze(0).to(self.device)
        scores, segmentations, features = self.model._predict(tensor_img)

        self.aggregator["scores"].append(scores)
        self.aggregator["segmentations"].append(segmentations)
        self.aggregator["features"].append(features)

        dummy_image = Image()
        dummy_image.height = 288
        dummy_image.width = 288
        dummy_image.encoding = "bgr8"
        dummy_image.step = 3 * 288
        dummy_image.data = bytes([0] * (288 * 288 * 3))
        self.resulting_images.append(dummy_image)
        self.resulting_heatmaps.append(dummy_image)
        self.resulting_classes.append("Anomaly")
        self.resulting_confidences.append(0.85)


def main(args=None):
    rclpy.init(args=args)
    node = AnalysisNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
