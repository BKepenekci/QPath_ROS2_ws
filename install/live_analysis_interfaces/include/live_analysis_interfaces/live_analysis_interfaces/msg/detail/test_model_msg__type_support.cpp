// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from live_analysis_interfaces:msg/TestModelMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "live_analysis_interfaces/msg/detail/test_model_msg__functions.h"
#include "live_analysis_interfaces/msg/detail/test_model_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace live_analysis_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TestModelMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) live_analysis_interfaces::msg::TestModelMsg(_init);
}

void TestModelMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<live_analysis_interfaces::msg::TestModelMsg *>(message_memory);
  typed_message->~TestModelMsg();
}

size_t size_function__TestModelMsg__images(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestModelMsg__images(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__TestModelMsg__images(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestModelMsg__images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::Image *>(
    get_const_function__TestModelMsg__images(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::Image *>(untyped_value);
  value = item;
}

void assign_function__TestModelMsg__images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::Image *>(
    get_function__TestModelMsg__images(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::Image *>(untyped_value);
  item = value;
}

void resize_function__TestModelMsg__images(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestModelMsg_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestModelMsg, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestModelMsg, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "model_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestModelMsg, model_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "model_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestModelMsg, model_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "with_bounding_box",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestModelMsg, with_bounding_box),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gpu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestModelMsg, gpu),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "area_th",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestModelMsg, area_th),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confidance_th",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestModelMsg, confidance_th),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "images",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestModelMsg, images),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestModelMsg__images,  // size() function pointer
    get_const_function__TestModelMsg__images,  // get_const(index) function pointer
    get_function__TestModelMsg__images,  // get(index) function pointer
    fetch_function__TestModelMsg__images,  // fetch(index, &value) function pointer
    assign_function__TestModelMsg__images,  // assign(index, value) function pointer
    resize_function__TestModelMsg__images  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestModelMsg_message_members = {
  "live_analysis_interfaces::msg",  // message namespace
  "TestModelMsg",  // message name
  9,  // number of fields
  sizeof(live_analysis_interfaces::msg::TestModelMsg),
  false,  // has_any_key_member_
  TestModelMsg_message_member_array,  // message members
  TestModelMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  TestModelMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestModelMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestModelMsg_message_members,
  get_message_typesupport_handle_function,
  &live_analysis_interfaces__msg__TestModelMsg__get_type_hash,
  &live_analysis_interfaces__msg__TestModelMsg__get_type_description,
  &live_analysis_interfaces__msg__TestModelMsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace live_analysis_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<live_analysis_interfaces::msg::TestModelMsg>()
{
  return &::live_analysis_interfaces::msg::rosidl_typesupport_introspection_cpp::TestModelMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, live_analysis_interfaces, msg, TestModelMsg)() {
  return &::live_analysis_interfaces::msg::rosidl_typesupport_introspection_cpp::TestModelMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
