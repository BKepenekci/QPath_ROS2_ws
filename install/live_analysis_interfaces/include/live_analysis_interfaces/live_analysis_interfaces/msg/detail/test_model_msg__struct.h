// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TestModelMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/test_model_msg.h"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__STRUCT_H_

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
// Member 'model_name'
#include "rosidl_runtime_c/string.h"
// Member 'images'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/TestModelMsg in the package live_analysis_interfaces.
/**
  * TestModelMsg.msg
 */
typedef struct live_analysis_interfaces__msg__TestModelMsg
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String model_id;
  rosidl_runtime_c__String model_name;
  bool with_bounding_box;
  uint32_t gpu;
  float area_th;
  float confidance_th;
  sensor_msgs__msg__Image__Sequence images;
} live_analysis_interfaces__msg__TestModelMsg;

// Struct for a sequence of live_analysis_interfaces__msg__TestModelMsg.
typedef struct live_analysis_interfaces__msg__TestModelMsg__Sequence
{
  live_analysis_interfaces__msg__TestModelMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TestModelMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__STRUCT_H_
