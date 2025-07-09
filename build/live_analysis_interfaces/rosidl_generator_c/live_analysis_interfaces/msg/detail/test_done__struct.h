// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TestDone.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_DONE__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_DONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'user_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TestDone in the package live_analysis_interfaces.
typedef struct live_analysis_interfaces__msg__TestDone
{
  rosidl_runtime_c__String user_id;
} live_analysis_interfaces__msg__TestDone;

// Struct for a sequence of live_analysis_interfaces__msg__TestDone.
typedef struct live_analysis_interfaces__msg__TestDone__Sequence
{
  live_analysis_interfaces__msg__TestDone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TestDone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_DONE__STRUCT_H_
