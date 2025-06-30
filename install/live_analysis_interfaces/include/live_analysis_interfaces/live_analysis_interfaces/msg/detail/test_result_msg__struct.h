// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TestResultMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/test_result_msg.h"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__STRUCT_H_

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
// Member 'img_result_strs'
#include "rosidl_runtime_c/string.h"
// Member 'img_result_confidance'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'heat_maps'
// Member 'result_imgs'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/TestResultMsg in the package live_analysis_interfaces.
/**
  * TestResultMsg.msg
 */
typedef struct live_analysis_interfaces__msg__TestResultMsg
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String id;
  int32_t total_imgs;
  rosidl_runtime_c__String__Sequence img_result_strs;
  rosidl_runtime_c__float__Sequence img_result_confidance;
  sensor_msgs__msg__Image__Sequence heat_maps;
  sensor_msgs__msg__Image__Sequence result_imgs;
  float total_time;
} live_analysis_interfaces__msg__TestResultMsg;

// Struct for a sequence of live_analysis_interfaces__msg__TestResultMsg.
typedef struct live_analysis_interfaces__msg__TestResultMsg__Sequence
{
  live_analysis_interfaces__msg__TestResultMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TestResultMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__STRUCT_H_
