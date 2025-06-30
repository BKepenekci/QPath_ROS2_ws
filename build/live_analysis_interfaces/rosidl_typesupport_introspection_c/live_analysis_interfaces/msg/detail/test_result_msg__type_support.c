// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from live_analysis_interfaces:msg/TestResultMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "live_analysis_interfaces/msg/detail/test_result_msg__rosidl_typesupport_introspection_c.h"
#include "live_analysis_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "live_analysis_interfaces/msg/detail/test_result_msg__functions.h"
#include "live_analysis_interfaces/msg/detail/test_result_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `id`
// Member `img_result_strs`
#include "rosidl_runtime_c/string_functions.h"
// Member `img_result_confidance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `heat_maps`
// Member `result_imgs`
#include "sensor_msgs/msg/image.h"
// Member `heat_maps`
// Member `result_imgs`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  live_analysis_interfaces__msg__TestResultMsg__init(message_memory);
}

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_fini_function(void * message_memory)
{
  live_analysis_interfaces__msg__TestResultMsg__fini(message_memory);
}

size_t live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__size_function__TestResultMsg__img_result_strs(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__img_result_strs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__img_result_strs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__fetch_function__TestResultMsg__img_result_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__img_result_strs(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__assign_function__TestResultMsg__img_result_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__img_result_strs(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__resize_function__TestResultMsg__img_result_strs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__size_function__TestResultMsg__img_result_confidance(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__img_result_confidance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__img_result_confidance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__fetch_function__TestResultMsg__img_result_confidance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__img_result_confidance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__assign_function__TestResultMsg__img_result_confidance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__img_result_confidance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__resize_function__TestResultMsg__img_result_confidance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__size_function__TestResultMsg__heat_maps(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__heat_maps(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__heat_maps(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__fetch_function__TestResultMsg__heat_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__Image * item =
    ((const sensor_msgs__msg__Image *)
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__heat_maps(untyped_member, index));
  sensor_msgs__msg__Image * value =
    (sensor_msgs__msg__Image *)(untyped_value);
  *value = *item;
}

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__assign_function__TestResultMsg__heat_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__Image * item =
    ((sensor_msgs__msg__Image *)
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__heat_maps(untyped_member, index));
  const sensor_msgs__msg__Image * value =
    (const sensor_msgs__msg__Image *)(untyped_value);
  *item = *value;
}

bool live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__resize_function__TestResultMsg__heat_maps(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

size_t live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__size_function__TestResultMsg__result_imgs(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__result_imgs(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__result_imgs(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__fetch_function__TestResultMsg__result_imgs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__Image * item =
    ((const sensor_msgs__msg__Image *)
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__result_imgs(untyped_member, index));
  sensor_msgs__msg__Image * value =
    (sensor_msgs__msg__Image *)(untyped_value);
  *value = *item;
}

void live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__assign_function__TestResultMsg__result_imgs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__Image * item =
    ((sensor_msgs__msg__Image *)
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__result_imgs(untyped_member, index));
  const sensor_msgs__msg__Image * value =
    (const sensor_msgs__msg__Image *)(untyped_value);
  *item = *value;
}

bool live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__resize_function__TestResultMsg__result_imgs(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResultMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResultMsg, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_imgs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResultMsg, total_imgs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "img_result_strs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResultMsg, img_result_strs),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__size_function__TestResultMsg__img_result_strs,  // size() function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__img_result_strs,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__img_result_strs,  // get(index) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__fetch_function__TestResultMsg__img_result_strs,  // fetch(index, &value) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__assign_function__TestResultMsg__img_result_strs,  // assign(index, value) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__resize_function__TestResultMsg__img_result_strs  // resize(index) function pointer
  },
  {
    "img_result_confidance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResultMsg, img_result_confidance),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__size_function__TestResultMsg__img_result_confidance,  // size() function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__img_result_confidance,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__img_result_confidance,  // get(index) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__fetch_function__TestResultMsg__img_result_confidance,  // fetch(index, &value) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__assign_function__TestResultMsg__img_result_confidance,  // assign(index, value) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__resize_function__TestResultMsg__img_result_confidance  // resize(index) function pointer
  },
  {
    "heat_maps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResultMsg, heat_maps),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__size_function__TestResultMsg__heat_maps,  // size() function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__heat_maps,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__heat_maps,  // get(index) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__fetch_function__TestResultMsg__heat_maps,  // fetch(index, &value) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__assign_function__TestResultMsg__heat_maps,  // assign(index, value) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__resize_function__TestResultMsg__heat_maps  // resize(index) function pointer
  },
  {
    "result_imgs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResultMsg, result_imgs),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__size_function__TestResultMsg__result_imgs,  // size() function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_const_function__TestResultMsg__result_imgs,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__get_function__TestResultMsg__result_imgs,  // get(index) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__fetch_function__TestResultMsg__result_imgs,  // fetch(index, &value) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__assign_function__TestResultMsg__result_imgs,  // assign(index, value) function pointer
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__resize_function__TestResultMsg__result_imgs  // resize(index) function pointer
  },
  {
    "total_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TestResultMsg, total_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_members = {
  "live_analysis_interfaces__msg",  // message namespace
  "TestResultMsg",  // message name
  8,  // number of fields
  sizeof(live_analysis_interfaces__msg__TestResultMsg),
  false,  // has_any_key_member_
  live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_member_array,  // message members
  live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_type_support_handle = {
  0,
  &live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_members,
  get_message_typesupport_handle_function,
  &live_analysis_interfaces__msg__TestResultMsg__get_type_hash,
  &live_analysis_interfaces__msg__TestResultMsg__get_type_description,
  &live_analysis_interfaces__msg__TestResultMsg__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, live_analysis_interfaces, msg, TestResultMsg)() {
  live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_type_support_handle.typesupport_identifier) {
    live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &live_analysis_interfaces__msg__TestResultMsg__rosidl_typesupport_introspection_c__TestResultMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
