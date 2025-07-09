// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TrainRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__STRUCT_H_

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
// Member 'user_id'
// Member 'algorithm_id'
// Member 'model_id'
// Member 'gpu'
// Member 'data_class'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TrainRequest in the package live_analysis_interfaces.
typedef struct live_analysis_interfaces__msg__TrainRequest
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String user_id;
  rosidl_runtime_c__String algorithm_id;
  rosidl_runtime_c__String model_id;
  int32_t epochs;
  float min_accuracy;
  int32_t batch_size;
  rosidl_runtime_c__String gpu;
  int32_t sample_count;
  bool use_detection;
  bool use_label;
  rosidl_runtime_c__String data_class;
} live_analysis_interfaces__msg__TrainRequest;

// Struct for a sequence of live_analysis_interfaces__msg__TrainRequest.
typedef struct live_analysis_interfaces__msg__TrainRequest__Sequence
{
  live_analysis_interfaces__msg__TrainRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TrainRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__STRUCT_H_
