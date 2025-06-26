cmake_minimum_required(VERSION 3.5)
project(live_analysis_ros2)

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/TestModelMsg.msg"
  "msg/TestResultMsg.msg"
  "msg/TrainModelMsg.msg"
  "msg/TrainResultMsg.msg"
  DEPENDENCIES std_msgs sensor_msgs builtin_interfaces
)

ament_package()
