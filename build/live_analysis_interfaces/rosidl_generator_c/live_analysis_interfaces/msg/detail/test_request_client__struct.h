// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TestRequestClient.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'id'
// Member 'model_id'
// Member 'model_path'
// Member 'yolo_path'
// Member 'image_paths'
#include "rosidl_runtime_c/string.h"
// Member 'images'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/TestRequestClient in the package live_analysis_interfaces.
typedef struct live_analysis_interfaces__msg__TestRequestClient
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String model_id;
  rosidl_runtime_c__String model_path;
  rosidl_runtime_c__String yolo_path;
  bool with_bounding_box;
  float area_th;
  float confidance_th;
  sensor_msgs__msg__Image__Sequence images;
  rosidl_runtime_c__String__Sequence image_paths;
} live_analysis_interfaces__msg__TestRequestClient;

// Struct for a sequence of live_analysis_interfaces__msg__TestRequestClient.
typedef struct live_analysis_interfaces__msg__TestRequestClient__Sequence
{
  live_analysis_interfaces__msg__TestRequestClient * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TestRequestClient__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__STRUCT_H_
