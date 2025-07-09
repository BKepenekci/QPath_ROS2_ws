from launch import LaunchDescription
from launch.actions import ExecuteProcess
import os

def generate_launch_description():
    venv_python = os.path.expanduser('~/ros2env/bin/python')
    node_script = os.path.expanduser('~/ros2_ws/src/live_analysis_ros2/live_analysis_ros2/analysis_node.py')

    return LaunchDescription([
        ExecuteProcess(
            cmd=[venv_python, node_script],
            output='screen'
        )
    ])
