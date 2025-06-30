// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TrainAlgorithmMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/train_algorithm_msg.h"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__STRUCT_H_

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
// Member 'model_name'
// Member 'model_id'
// Member 'train_set_annotations'
// Member 'eval_set_annotations'
// Member 'algorithm_id'
// Member 'algorithm_name'
// Member 'gpu'
// Member 'model_path'
#include "rosidl_runtime_c/string.h"
// Member 'train_images'
// Member 'eval_images'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/TrainAlgorithmMsg in the package live_analysis_interfaces.
typedef struct live_analysis_interfaces__msg__TrainAlgorithmMsg
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String model_name;
  rosidl_runtime_c__String model_id;
  sensor_msgs__msg__Image__Sequence train_images;
  sensor_msgs__msg__Image__Sequence eval_images;
  rosidl_runtime_c__String__Sequence train_set_annotations;
  rosidl_runtime_c__String__Sequence eval_set_annotations;
  int32_t epoc;
  int32_t batchsize;
  rosidl_runtime_c__String algorithm_id;
  rosidl_runtime_c__String algorithm_name;
  rosidl_runtime_c__String gpu;
  rosidl_runtime_c__String model_path;
  bool files_completed;
} live_analysis_interfaces__msg__TrainAlgorithmMsg;

// Struct for a sequence of live_analysis_interfaces__msg__TrainAlgorithmMsg.
typedef struct live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence
{
  live_analysis_interfaces__msg__TrainAlgorithmMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__STRUCT_H_
