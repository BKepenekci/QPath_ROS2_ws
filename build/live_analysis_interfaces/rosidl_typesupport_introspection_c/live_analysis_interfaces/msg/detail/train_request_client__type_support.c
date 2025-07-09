// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from live_analysis_interfaces:msg/TrainRequestClient.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "live_analysis_interfaces/msg/detail/train_request_client__rosidl_typesupport_introspection_c.h"
#include "live_analysis_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "live_analysis_interfaces/msg/detail/train_request_client__functions.h"
#include "live_analysis_interfaces/msg/detail/train_request_client__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `user_id`
// Member `algorithm_id`
// Member `model_id`
// Member `data_class`
// Member `class_labels`
#include "rosidl_runtime_c/string_functions.h"
// Member `train_images`
// Member `eval_images`
#include "sensor_msgs/msg/image.h"
// Member `train_images`
// Member `eval_images`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `rectangles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  live_analysis_interfaces__msg__TrainRequestClient__init(message_memory);
}

void live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_fini_function(void * message_memory)
{
  live_analysis_interfaces__msg__TrainRequestClient__fini(message_memory);
}

size_t live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__size_function__Image__train_images(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__get_const_function__Image__train_images(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__get_function__Image__train_images(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

bool live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__resize_function__Image__train_images(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

size_t live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__size_function__Image__eval_images(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__get_const_function__Image__eval_images(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__get_function__Image__eval_images(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

bool live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__resize_function__Image__eval_images(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_member_array[16] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, header),  // bytes offset in struct
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
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, user_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "algorithm_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, algorithm_id),  // bytes offset in struct
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
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, model_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "epochs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, epochs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, min_accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "batch_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, batch_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_detection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, use_detection),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, use_label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, data_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "train_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, train_images),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__size_function__Image__train_images,  // size() function pointer
    live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__get_const_function__Image__train_images,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__get_function__Image__train_images,  // get(index) function pointer
    live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__resize_function__Image__train_images  // resize(index) function pointer
  },
  {
    "eval_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, eval_images),  // bytes offset in struct
    NULL,  // default value
    live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__size_function__Image__eval_images,  // size() function pointer
    live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__get_const_function__Image__eval_images,  // get_const(index) function pointer
    live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__get_function__Image__eval_images,  // get(index) function pointer
    live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__resize_function__Image__eval_images  // resize(index) function pointer
  },
  {
    "class_labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, class_labels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rectangles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, rectangles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "files_completed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, files_completed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seq_no",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces__msg__TrainRequestClient, seq_no),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_members = {
  "live_analysis_interfaces__msg",  // message namespace
  "TrainRequestClient",  // message name
  16,  // number of fields
  sizeof(live_analysis_interfaces__msg__TrainRequestClient),
  live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_member_array,  // message members
  live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_init_function,  // function to initialize message memory (memory has to be allocated)
  live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_type_support_handle = {
  0,
  &live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, live_analysis_interfaces, msg, TrainRequestClient)() {
  live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_type_support_handle.typesupport_identifier) {
    live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &live_analysis_interfaces__msg__TrainRequestClient__rosidl_typesupport_introspection_c__TrainRequestClient_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
