// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/StopTestingRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TESTING_REQUEST__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TESTING_REQUEST__STRUCT_H_

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
// Member 'test_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/StopTestingRequest in the package live_analysis_interfaces.
typedef struct live_analysis_interfaces__msg__StopTestingRequest
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String user_id;
  rosidl_runtime_c__String model_id;
  rosidl_runtime_c__String test_id;
} live_analysis_interfaces__msg__StopTestingRequest;

// Struct for a sequence of live_analysis_interfaces__msg__StopTestingRequest.
typedef struct live_analysis_interfaces__msg__StopTestingRequest__Sequence
{
  live_analysis_interfaces__msg__StopTestingRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__StopTestingRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TESTING_REQUEST__STRUCT_H_
