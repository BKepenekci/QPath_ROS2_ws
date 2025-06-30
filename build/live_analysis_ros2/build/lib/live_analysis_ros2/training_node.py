import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Header
from live_analysis_interfaces.msg import TrainAlgorithmMsg, TrainResultMsg

import sys
import os
import torch
import numpy as np
import cv2
import time
from collections import OrderedDict

sys.path.append("src")
import backbones
import simplenet
import utils

class TrainingNode(Node):
    def __init__(self):
        super().__init__('training_node')
        self.publisher = self.create_publisher(TrainResultMsg, 'QPATH/train_result', 10)
        self.subscription = self.create_subscription(TrainAlgorithmMsg, 'QPATH/model_train_topic', self.train_callback, 10)
        self.timer = self.create_timer(2.0, self.publish_status)

        self.device = torch.device("cuda:0")
        utils.fix_seeds(0, self.device)

        self.model = simplenet.SimpleNet(self.device)
        self.backbone = backbones.load("wideresnet50")
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
            proj_layer_type=0
        )

        self.start_time = time.perf_counter()
        self.total_time = 0
        self.result_m_ap = 0.0
        self.current_epoc = 0
        self.total_train_imgs = 0
        self.model_path = ""
        self.training_completed = False
        self.training_started = False
        self.output_msg = None
        self.get_logger().info("Training node initialized.")

    def train_callback(self, msg):
        self.get_logger().info("Received training request.")
        self.training_started = True
        self.start_time = time.perf_counter()

        self.total_train_imgs = 0
        self.training_completed = False
        self.current_epoc = 0

        self.output_msg = TrainResultMsg()
        self.output_msg.header = msg.header
        self.output_msg.id = msg.id
        self.output_msg.model_name = msg.model_name
        self.output_msg.model_id = msg.model_id
        self.output_msg.epoc = msg.epoc
        self.output_msg.total_eval_imgs = 0

        image_folder = msg.model_path
        if not os.path.exists(image_folder):
            os.makedirs(image_folder, exist_ok=True)

        for idx, image in enumerate(msg.train_images):
            img_data = np.frombuffer(image.data, dtype=np.uint8).reshape((image.height, image.width, -1))
            img_path = os.path.join(image_folder, f"{idx:03}.png")
            cv2.imwrite(img_path, img_data)
            self.total_train_imgs += 1

        from datasets.pvds import PVDataset
        dataset = PVDataset(source=image_folder)
        dataloader = torch.utils.data.DataLoader(dataset, batch_size=msg.batchsize, shuffle=True, num_workers=2)

        self.model.model_dir = image_folder
        self.model.ckpt_dir = image_folder
        self.model.tb_dir = image_folder
        self.model.logger = simplenet.TBWrapper(self.model.tb_dir)
        self.model.meta_epochs = msg.epoc
        self.model.dsc_schl = torch.optim.lr_scheduler.CosineAnnealingLR(
            self.model.dsc_opt,
            (self.model.meta_epochs - self.model.aed_meta_epochs) * self.model.gan_epochs,
            self.model.dsc_lr * 0.4
        )

        best_result = 0.0
        state_dict = {}

        for ep in range(self.model.meta_epochs):
            self.model._train_discriminator(dataloader)
            scores, segmentations, features, _, _ = self.model.predict(dataloader)

            average_likelihood = sum([seg.mean().item() for seg in segmentations]) / len(segmentations)

            if average_likelihood > best_result:
                best_result = average_likelihood
                state_dict = {
                    "discriminator": OrderedDict({k: v.cpu() for k, v in self.model.discriminator.state_dict().items()})
                }
                if self.model.pre_proj > 0:
                    state_dict["pre_projection"] = OrderedDict({k: v.cpu() for k, v in self.model.pre_projection.state_dict().items()})

            self.result_m_ap = average_likelihood
            self.current_epoc = ep + 1

        ckpt_path = os.path.join(image_folder, msg.model_name + ".pth")
        torch.save(state_dict, ckpt_path)
        self.model_path = ckpt_path
        self.total_time = time.perf_counter() - self.start_time
        self.training_completed = True

        self.get_logger().info("Training complete.")

    def publish_status(self):
        if not self.training_started:
            return

        self.output_msg.total_time = self.total_time
        self.output_msg.total_train_imgs = self.total_train_imgs
        self.output_msg.m_ap = self.result_m_ap
        self.output_msg.duration = time.perf_counter() - self.start_time
        self.output_msg.model_path = self.model_path
        self.output_msg.training_completed = self.training_completed
        self.output_msg.current_epoc = self.current_epoc

        self.publisher.publish(self.output_msg)


def main(args=None):
    rclpy.init(args=args)
    node = TrainingNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
