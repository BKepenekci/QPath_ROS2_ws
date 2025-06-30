// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from live_analysis_interfaces:msg/TrainAlgorithmMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "live_analysis_interfaces/msg/detail/train_algorithm_msg__rosidl_typesupport_introspection_c.h"
#include "live_analysis_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "live_analysis_interfaces/msg/detail/train_algorithm_msg__functions.h"
#include "live_analysis_interfaces/msg/detail/train_algorithm_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `id`
// Member `model_name`
// Member `model_id`
// Member `train_set_annotations`
// Member `eval_set_annotations`
// Member `algorithm_id`
// Member `algorithm_name`
// Member `gpu`
// Member `model_path`
#include "rosidl_runtime_c/string_functions.h"
// Member `train_images`
// Member `eval_images`
#include "sensor_msgs/msg/image.h"
// Member `train_images`
// Member `eval_images`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  live_analysis_interfaces__msg__TrainAlgorithmMsg__init(message_memory);
}

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_fini_function(void * message_memory)
{
  live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(message_memory);
}

size_t live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__size_function__TrainAlgorithmMsg__train_images(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__train_images(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__train_images(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__fetch_function__TrainAlgorithmMsg__train_images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__Image * item =
    ((const sensor_msgs__msg__Image *)
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__train_images(untyped_member, index));
  sensor_msgs__msg__Image * value =
    (sensor_msgs__msg__Image *)(untyped_value);
  *value = *item;
}

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__assign_function__TrainAlgorithmMsg__train_images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__Image * item =
    ((sensor_msgs__msg__Image *)
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__train_images(untyped_member, index));
  const sensor_msgs__msg__Image * value =
    (const sensor_msgs__msg__Image *)(untyped_value);
  *item = *value;
}

bool live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__resize_function__TrainAlgorithmMsg__train_images(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

size_t live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__size_function__TrainAlgorithmMsg__eval_images(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__eval_images(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__eval_images(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__fetch_function__TrainAlgorithmMsg__eval_images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__Image * item =
    ((const sensor_msgs__msg__Image *)
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__eval_images(untyped_member, index));
  sensor_msgs__msg__Image * value =
    (sensor_msgs__msg__Image *)(untyped_value);
  *value = *item;
}

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__assign_function__TrainAlgorithmMsg__eval_images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__Image * item =
    ((sensor_msgs__msg__Image *)
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__eval_images(untyped_member, index));
  const sensor_msgs__msg__Image * value =
    (const sensor_msgs__msg__Image *)(untyped_value);
  *item = *value;
}

bool live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__resize_function__TrainAlgorithmMsg__eval_images(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

size_t live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__size_function__TrainAlgorithmMsg__train_set_annotations(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__train_set_annotations(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__train_set_annotations(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__fetch_function__TrainAlgorithmMsg__train_set_annotations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__train_set_annotations(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__assign_function__TrainAlgorithmMsg__train_set_annotations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__train_set_annotations(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__resize_function__TrainAlgorithmMsg__train_set_annotations(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__size_function__TrainAlgorithmMsg__eval_set_annotations(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__eval_set_annotations(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__eval_set_annotations(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__fetch_function__TrainAlgorithmMsg__eval_set_annotations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__eval_set_annotations(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__assign_function__TrainAlgorithmMsg__eval_set_annotations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__eval_set_annotations(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__resize_function__TrainAlgorithmMsg__eval_set_annotations(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_member_array[15] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, header),  // bytes offset in struct
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
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, model_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, model_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "train_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, train_images),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__size_function__TrainAlgorithmMsg__train_images,  // size() function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__train_images,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__train_images,  // get(index) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__fetch_function__TrainAlgorithmMsg__train_images,  // fetch(index, &value) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__assign_function__TrainAlgorithmMsg__train_images,  // assign(index, value) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__resize_function__TrainAlgorithmMsg__train_images  // resize(index) function pointer
  },
  {
    "eval_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, eval_images),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__size_function__TrainAlgorithmMsg__eval_images,  // size() function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__eval_images,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__eval_images,  // get(index) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__fetch_function__TrainAlgorithmMsg__eval_images,  // fetch(index, &value) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__assign_function__TrainAlgorithmMsg__eval_images,  // assign(index, value) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__resize_function__TrainAlgorithmMsg__eval_images  // resize(index) function pointer
  },
  {
    "train_set_annotations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, train_set_annotations),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__size_function__TrainAlgorithmMsg__train_set_annotations,  // size() function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__train_set_annotations,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__train_set_annotations,  // get(index) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__fetch_function__TrainAlgorithmMsg__train_set_annotations,  // fetch(index, &value) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__assign_function__TrainAlgorithmMsg__train_set_annotations,  // assign(index, value) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__resize_function__TrainAlgorithmMsg__train_set_annotations  // resize(index) function pointer
  },
  {
    "eval_set_annotations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, eval_set_annotations),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__size_function__TrainAlgorithmMsg__eval_set_annotations,  // size() function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_const_function__TrainAlgorithmMsg__eval_set_annotations,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__get_function__TrainAlgorithmMsg__eval_set_annotations,  // get(index) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__fetch_function__TrainAlgorithmMsg__eval_set_annotations,  // fetch(index, &value) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__assign_function__TrainAlgorithmMsg__eval_set_annotations,  // assign(index, value) function pointer
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__resize_function__TrainAlgorithmMsg__eval_set_annotations  // resize(index) function pointer
  },
  {
    "epoc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, epoc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "batchsize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, batchsize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "algorithm_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, algorithm_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "algorithm_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, algorithm_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, gpu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, model_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "files_completed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainAlgorithmMsg, files_completed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_members = {
  "live_analysis_interfaces__msg",  // message namespace
  "TrainAlgorithmMsg",  // message name
  15,  // number of fields
  sizeof(live_analysis_interfaces__msg__TrainAlgorithmMsg),
  false,  // has_any_key_member_
  live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_member_array,  // message members
  live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_type_support_handle = {
  0,
  &live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_members,
  get_message_typesupport_handle_function,
  &live_analysis_interfaces__msg__TrainAlgorithmMsg__get_type_hash,
  &live_analysis_interfaces__msg__TrainAlgorithmMsg__get_type_description,
  &live_analysis_interfaces__msg__TrainAlgorithmMsg__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, live_analysis_interfaces, msg, TrainAlgorithmMsg)() {
  live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_type_support_handle.typesupport_identifier) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &live_analysis_interfaces__msg__TrainAlgorithmMsg__rosidl_typesupport_introspection_c__TrainAlgorithmMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
