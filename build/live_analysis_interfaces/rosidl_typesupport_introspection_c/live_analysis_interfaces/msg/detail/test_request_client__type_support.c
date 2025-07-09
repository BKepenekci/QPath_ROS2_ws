// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from live_analysis_interfaces:msg/TestRequestClient.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "live_analysis_interfaces/msg/detail/test_request_client__rosidl_typesupport_introspection_c.h"
#include "live_analysis_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "live_analysis_interfaces/msg/detail/test_request_client__functions.h"
#include "live_analysis_interfaces/msg/detail/test_request_client__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `id`
// Member `model_id`
// Member `model_path`
// Member `yolo_path`
// Member `image_paths`
#include "rosidl_runtime_c/string_functions.h"
// Member `images`
#include "sensor_msgs/msg/image.h"
// Member `images`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  live_analysis_interfaces__msg__TestRequestClient__init(message_memory);
}

void live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_fini_function(void * message_memory)
{
  live_analysis_interfaces__msg__TestRequestClient__fini(message_memory);
}

size_t live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__size_function__Image__images(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__get_const_function__Image__images(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__get_function__Image__images(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

bool live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__resize_function__Image__images(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestRequestClient, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestRequestClient, id),  // bytes offset in struct
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
    offsetof(live_analysis_interfaces__msg__TestRequestClient, model_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestRequestClient, model_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yolo_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestRequestClient, yolo_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "with_bounding_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestRequestClient, with_bounding_box),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_th",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestRequestClient, area_th),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidance_th",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestRequestClient, confidance_th),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestRequestClient, images),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__size_function__Image__images,  // size() function pointer
    live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__get_const_function__Image__images,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__get_function__Image__images,  // get(index) function pointer
    live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__resize_function__Image__images  // resize(index) function pointer
  },
  {
    "image_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestRequestClient, image_paths),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_members = {
  "live_analysis_interfaces__msg",  // message namespace
  "TestRequestClient",  // message name
  10,  // number of fields
  sizeof(live_analysis_interfaces__msg__TestRequestClient),
  live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_member_array,  // message members
  live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_init_function,  // function to initialize message memory (memory has to be allocated)
  live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_type_support_handle = {
  0,
  &live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, live_analysis_interfaces, msg, TestRequestClient)() {
  live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_type_support_handle.typesupport_identifier) {
    live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &live_analysis_interfaces__msg__TestRequestClient__rosidl_typesupport_introspection_c__TestRequestClient_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
