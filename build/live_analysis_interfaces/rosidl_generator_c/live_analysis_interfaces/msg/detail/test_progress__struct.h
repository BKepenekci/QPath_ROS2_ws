// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live_analysis_interfaces:msg/TestProgress.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_PROGRESS__STRUCT_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TestProgress in the package live_analysis_interfaces.
typedef struct live_analysis_interfaces__msg__TestProgress
{
  uint8_t structure_needs_at_least_one_member;
} live_analysis_interfaces__msg__TestProgress;

// Struct for a sequence of live_analysis_interfaces__msg__TestProgress.
typedef struct live_analysis_interfaces__msg__TestProgress__Sequence
{
  live_analysis_interfaces__msg__TestProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live_analysis_interfaces__msg__TestProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_PROGRESS__STRUCT_H_
