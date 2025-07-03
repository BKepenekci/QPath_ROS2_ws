import rclpy
from rclpy.node import Node
from anomaly_detector.msg import LabeledImages
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import torch
import torchvision.models as models
import torch.nn.functional as F
import numpy as np
import os
from scipy.spatial.distance import cosine
from pathlib import Path
from datetime import datetime

class PatchMinerNode(Node):
    def __init__(self):
        super().__init__('patch_miner_node')
        self.sub = self.create_subscription(LabeledImages, '/annotated_images', self.callback, 10)
        self.bridge = CvBridge()

        # Pretrained ResNet18 (fc replaced with identity)
        model = models.resnet18(weights=models.ResNet18_Weights.DEFAULT)
        model.fc = torch.nn.Identity()
        self.feature_extractor = model.eval().to('cpu')

        # Settings
        self.crop_size = 128
        self.stride = 32
        self.sim_threshold = 0.92
        self.nms_iou_threshold = 0.4

        # Dataset paths
        timestamp = datetime.now().strftime('%Y%m%d_%H%M%S')
        self.root_dir = Path(f'/tmp/export_dataset_{timestamp}')
        self.image_dir = self.root_dir / 'images/train'
        self.label_dir = self.root_dir / 'labels/train'
        self.class_map = {}
        self.class_index = 0
        self.img_counter = 0

        self.image_dir.mkdir(parents=True, exist_ok=True)
        self.label_dir.mkdir(parents=True, exist_ok=True)

        self.get_logger().info(f"PatchMinerNode aktif 🚀 Kayıt yeri: {self.root_dir}")

    def generate_data_yaml(self):
        yaml_path = self.root_dir / 'data.yaml'
        with open(yaml_path, 'w') as f:
            f.write(f"train: {self.image_dir}\n")
            f.write(f"val: {self.image_dir}\n\n")
            f.write("names:\n")
            for class_id, class_name in sorted(self.class_map.items(), key=lambda x: x[1]):
                f.write(f"  {class_id}: {class_name}\n")
        self.get_logger().info(f"data.yaml dosyası oluşturuldu: {yaml_path}")

    def callback(self, msg):
        images = msg.images
        rectangles = list(zip(*[iter(msg.rectangles)] * 4))
        class_labels = msg.class_labels
        ref_vec, ref_label = None, None

        for i, (img_msg, rect, label) in enumerate(zip(images, rectangles, class_labels)):
            cv_img = self.bridge.imgmsg_to_cv2(img_msg, desired_encoding='rgb8')
            h, w, _ = cv_img.shape
            x, y, rw, rh = map(int, rect)

            if ref_vec is None and rw > 0 and label:
                ref_crop = cv_img[y:y+rh, x:x+rw]
                ref_crop = cv2.resize(ref_crop, (224, 224))
                ref_vec = self.extract_feature(ref_crop)
                ref_label = label
                self.get_logger().info(f"Referans nesne: {ref_label}")
                if ref_label not in self.class_map:
                    self.class_map[ref_label] = self.class_index
                    self.class_index += 1
                continue

            if ref_vec is None:
                continue  # referans örnek hâlâ seçilmedi

            patches = self.find_similar_patches(cv_img, ref_vec)
            boxes = self.non_max_suppression(patches)

            for score, (px, py, pw, ph) in boxes:
                crop = cv_img[py:py+ph, px:px+pw]
                resized_crop = cv2.resize(crop, (224, 224))

                # Save image
                img_name = f"patch_{self.img_counter:05d}.jpg"
                img_path = self.image_dir / img_name
                cv2.imwrite(str(img_path), resized_crop)

                # Normalize bbox for YOLO
                cx = (px + pw / 2) / w
                cy = (py + ph / 2) / h
                nw = pw / w
                nh = ph / h

                class_id = self.class_map[ref_label]
                label_path = self.label_dir / f"{img_path.stem}.txt"
                with open(label_path, 'w') as f:
                    f.write(f"{class_id} {cx:.6f} {cy:.6f} {nw:.6f} {nh:.6f}\n")

                self.img_counter += 1

            self.get_logger().info(f"{len(boxes)} patch çıkarıldı [{ref_label}] → {self.img_counter} toplam örnek")
        self.generate_data_yaml()

    def extract_feature(self, img):
        tensor = torch.tensor(img.transpose(2, 0, 1)).unsqueeze(0).float() / 255.0
        with torch.no_grad():
            feat = self.feature_extractor(tensor)
        return feat.squeeze().numpy()

    def find_similar_patches(self, img, ref_vec):
        h, w, _ = img.shape
        matches = []
        for y in range(0, h - self.crop_size, self.stride):
            for x in range(0, w - self.crop_size, self.stride):
                patch = img[y:y+self.crop_size, x:x+self.crop_size]
                feat = self.extract_feature(cv2.resize(patch, (224, 224)))
                sim = 1 - cosine(ref_vec, feat)
                if sim >= self.sim_threshold:
                    matches.append((sim, [x, y, self.crop_size, self.crop_size]))
        return matches

    def non_max_suppression(self, detections):
        if not detections:
            return []
        boxes = np.array([b for _, b in detections])
        scores = np.array([s for s, _ in detections])
        x1, y1 = boxes[:, 0], boxes[:, 1]
        x2 = boxes[:, 0] + boxes[:, 2]
        y2 = boxes[:, 1] + boxes[:, 3]
        areas = boxes[:, 2] * boxes[:, 3]
        order = scores.argsort()[::-1]
        keep = []
        while len(order) > 0:
            i = order[0]
            keep.append((scores[i], boxes[i]))
            xx1 = np.maximum(x1[i], x1[order[1:]])
            yy1 = np.maximum(y1[i], y1[order[1:]])
            xx2 = np.minimum(x2[i], x2[order[1:]])
            yy2 = np.minimum(y2[i], y2[order[1:]])
            inter = np.maximum(0, xx2 - xx1) * np.maximum(0, yy2 - yy1)
            iou = inter / (areas[i] + areas[order[1:]] - inter + 1e-6)
            order = order[1:][iou <= self.nms_iou_threshold]
        return keep