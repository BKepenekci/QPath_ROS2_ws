cmake_minimum_required(VERSION 3.5)
project(live_analysis_interfaces)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/TestRequest.msg"
  "msg/TestRequestClient.msg"
  "msg/TestResult.msg"
  "msg/TrainRequest.msg"
  "msg/TrainRequestClient.msg"
  "msg/TrainingResult.msg"
  "msg/TestDone.msg"
  "msg/TestProgress.msg"  
  "msg/StopTrainingRequest.msg"  
  "msg/StopTestingRequest.msg"  
  DEPENDENCIES std_msgs sensor_msgs builtin_interfaces
)

ament_package()
