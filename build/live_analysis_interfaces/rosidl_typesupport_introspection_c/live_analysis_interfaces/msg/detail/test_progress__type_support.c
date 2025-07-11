// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from live_analysis_interfaces:msg/TestProgress.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "live_analysis_interfaces/msg/detail/test_progress__rosidl_typesupport_introspection_c.h"
#include "live_analysis_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "live_analysis_interfaces/msg/detail/test_progress__functions.h"
#include "live_analysis_interfaces/msg/detail/test_progress__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  live_analysis_interfaces__msg__TestProgress__init(message_memory);
}

void live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_fini_function(void * message_memory)
{
  live_analysis_interfaces__msg__TestProgress__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestProgress, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_message_members = {
  "live_analysis_interfaces__msg",  // message namespace
  "TestProgress",  // message name
  1,  // number of fields
  sizeof(live_analysis_interfaces__msg__TestProgress),
  live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_message_member_array,  // message members
  live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_init_function,  // function to initialize message memory (memory has to be allocated)
  live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_message_type_support_handle = {
  0,
  &live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, live_analysis_interfaces, msg, TestProgress)() {
  if (!live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_message_type_support_handle.typesupport_identifier) {
    live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &live_analysis_interfaces__msg__TestProgress__rosidl_typesupport_introspection_c__TestProgress_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
