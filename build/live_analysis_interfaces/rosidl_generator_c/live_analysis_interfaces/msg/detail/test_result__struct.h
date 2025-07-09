// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TestResult.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__STRUCT_H_

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
// Member 'model_id'
// Member 'image_path'
#include "rosidl_runtime_c/string.h"
// Member 'heatmap'
// Member 'mask'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'bboxes'
// Member 'confidences'
// Member 'ok_list'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/TestResult in the package live_analysis_interfaces.
typedef struct live_analysis_interfaces__msg__TestResult
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String user_id;
  rosidl_runtime_c__String model_id;
  bool ok;
  sensor_msgs__msg__Image heatmap;
  sensor_msgs__msg__Image mask;
  rosidl_runtime_c__int32__Sequence bboxes;
  rosidl_runtime_c__float__Sequence confidences;
  rosidl_runtime_c__boolean__Sequence ok_list;
  rosidl_runtime_c__String image_path;
  int32_t percent_done;
} live_analysis_interfaces__msg__TestResult;

// Struct for a sequence of live_analysis_interfaces__msg__TestResult.
typedef struct live_analysis_interfaces__msg__TestResult__Sequence
{
  live_analysis_interfaces__msg__TestResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TestResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__STRUCT_H_
