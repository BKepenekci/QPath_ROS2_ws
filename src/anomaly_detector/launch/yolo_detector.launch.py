from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='anomaly_detector',
            executable='yolo_detector_node',
            name='yolo_detector',
            parameters=[{'model_path': '/path/to/best.pt'}],
            output='screen'
        )
    ])