from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(package='hikvision_ros2', executable='hikvision_image_node'),
        Node(package='hikvision_ros2', executable='hikvision_ptz_node'),
    ])