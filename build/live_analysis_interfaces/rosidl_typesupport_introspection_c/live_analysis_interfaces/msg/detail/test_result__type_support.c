// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from live_analysis_interfaces:msg/TestResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "live_analysis_interfaces/msg/detail/test_result__rosidl_typesupport_introspection_c.h"
#include "live_analysis_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "live_analysis_interfaces/msg/detail/test_result__functions.h"
#include "live_analysis_interfaces/msg/detail/test_result__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `user_id`
// Member `model_id`
// Member `image_path`
#include "rosidl_runtime_c/string_functions.h"
// Member `heatmap`
// Member `mask`
#include "sensor_msgs/msg/image.h"
// Member `heatmap`
// Member `mask`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `bboxes`
// Member `confidences`
// Member `ok_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  live_analysis_interfaces__msg__TestResult__init(message_memory);
}

void live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_fini_function(void * message_memory)
{
  live_analysis_interfaces__msg__TestResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, user_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, model_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heatmap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, heatmap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bboxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, bboxes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, confidences),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ok_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, ok_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, image_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "percent_done",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResult, percent_done),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_members = {
  "live_analysis_interfaces__msg",  // message namespace
  "TestResult",  // message name
  11,  // number of fields
  sizeof(live_analysis_interfaces__msg__TestResult),
  live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_member_array,  // message members
  live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_init_function,  // function to initialize message memory (memory has to be allocated)
  live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_type_support_handle = {
  0,
  &live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, live_analysis_interfaces, msg, TestResult)() {
  live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_type_support_handle.typesupport_identifier) {
    live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &live_analysis_interfaces__msg__TestResult__rosidl_typesupport_introspection_c__TestResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
