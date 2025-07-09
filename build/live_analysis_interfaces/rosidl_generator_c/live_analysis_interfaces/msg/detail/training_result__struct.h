// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TrainingResult.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__STRUCT_H_

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
// Member 'msg_txt'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TrainingResult in the package live_analysis_interfaces.
typedef struct live_analysis_interfaces__msg__TrainingResult
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String user_id;
  rosidl_runtime_c__String algorithm_id;
  rosidl_runtime_c__String model_id;
  float total_time;
  int32_t total_patches;
  float loss;
  float duration;
  int32_t epochs;
  int32_t current_epoch;
  rosidl_runtime_c__String msg_txt;
  bool training_completed;
  bool stopped;
} live_analysis_interfaces__msg__TrainingResult;

// Struct for a sequence of live_analysis_interfaces__msg__TrainingResult.
typedef struct live_analysis_interfaces__msg__TrainingResult__Sequence
{
  live_analysis_interfaces__msg__TrainingResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TrainingResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__STRUCT_H_
