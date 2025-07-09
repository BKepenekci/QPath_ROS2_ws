from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='anomaly_detector',
            executable='training_node',
            name='training_node',
            output='screen',
            parameters=[
                {'image_dir': '/tmp/train_data'}  # Bu kısmı istediğin path ile değiştirebilirsin
            ]
        )
    ])