// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from live_analysis_interfaces:msg/TestModelMsg.idl
// generated code does not contain a copyright notice
#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "live_analysis_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "live_analysis_interfaces/msg/detail/test_model_msg__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
bool cdr_serialize_live_analysis_interfaces__msg__TestModelMsg(
  const live_analysis_interfaces__msg__TestModelMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
bool cdr_deserialize_live_analysis_interfaces__msg__TestModelMsg(
  eprosima::fastcdr::Cdr &,
  live_analysis_interfaces__msg__TestModelMsg * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t get_serialized_size_live_analysis_interfaces__msg__TestModelMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t max_serialized_size_live_analysis_interfaces__msg__TestModelMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
bool cdr_serialize_key_live_analysis_interfaces__msg__TestModelMsg(
  const live_analysis_interfaces__msg__TestModelMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t get_serialized_size_key_live_analysis_interfaces__msg__TestModelMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t max_serialized_size_key_live_analysis_interfaces__msg__TestModelMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, live_analysis_interfaces, msg, TestModelMsg)();

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
