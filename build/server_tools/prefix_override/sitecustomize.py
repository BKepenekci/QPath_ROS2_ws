import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/paranavision/ros2_ws/QPath_ROS2_ws/install/server_tools'
