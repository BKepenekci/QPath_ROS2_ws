// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TrainResultMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/train_result_msg.h"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__STRUCT_H_

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
// Member 'model_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TrainResultMsg in the package live_analysis_interfaces.
typedef struct live_analysis_interfaces__msg__TrainResultMsg
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String model_name;
  rosidl_runtime_c__String model_id;
  float total_time;
  int32_t total_train_imgs;
  int32_t total_eval_imgs;
  float m_ap;
  float duration;
  rosidl_runtime_c__String model_path;
  bool training_completed;
  int32_t epoc;
  int32_t current_epoc;
} live_analysis_interfaces__msg__TrainResultMsg;

// Struct for a sequence of live_analysis_interfaces__msg__TrainResultMsg.
typedef struct live_analysis_interfaces__msg__TrainResultMsg__Sequence
{
  live_analysis_interfaces__msg__TrainResultMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TrainResultMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__STRUCT_H_
