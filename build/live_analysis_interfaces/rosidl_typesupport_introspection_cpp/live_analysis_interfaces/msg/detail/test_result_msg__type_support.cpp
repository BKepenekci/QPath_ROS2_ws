// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from live_analysis_interfaces:msg/TestResultMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "live_analysis_interfaces/msg/detail/test_result_msg__functions.h"
#include "live_analysis_interfaces/msg/detail/test_result_msg__struct.hpp"
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

void TestResultMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) live_analysis_interfaces::msg::TestResultMsg(_init);
}

void TestResultMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<live_analysis_interfaces::msg::TestResultMsg *>(message_memory);
  typed_message->~TestResultMsg();
}

size_t size_function__TestResultMsg__img_result_strs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestResultMsg__img_result_strs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TestResultMsg__img_result_strs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestResultMsg__img_result_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TestResultMsg__img_result_strs(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TestResultMsg__img_result_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TestResultMsg__img_result_strs(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TestResultMsg__img_result_strs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestResultMsg__img_result_confidance(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestResultMsg__img_result_confidance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TestResultMsg__img_result_confidance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestResultMsg__img_result_confidance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TestResultMsg__img_result_confidance(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TestResultMsg__img_result_confidance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TestResultMsg__img_result_confidance(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TestResultMsg__img_result_confidance(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestResultMsg__heat_maps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestResultMsg__heat_maps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__TestResultMsg__heat_maps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestResultMsg__heat_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::Image *>(
    get_const_function__TestResultMsg__heat_maps(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::Image *>(untyped_value);
  value = item;
}

void assign_function__TestResultMsg__heat_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::Image *>(
    get_function__TestResultMsg__heat_maps(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::Image *>(untyped_value);
  item = value;
}

void resize_function__TestResultMsg__heat_maps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestResultMsg__result_imgs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestResultMsg__result_imgs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__TestResultMsg__result_imgs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestResultMsg__result_imgs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::Image *>(
    get_const_function__TestResultMsg__result_imgs(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::Image *>(untyped_value);
  value = item;
}

void assign_function__TestResultMsg__result_imgs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::Image *>(
    get_function__TestResultMsg__result_imgs(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::Image *>(untyped_value);
  item = value;
}

void resize_function__TestResultMsg__result_imgs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestResultMsg_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestResultMsg, header),  // bytes offset in struct
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
    offsetof(live_analysis_interfaces::msg::TestResultMsg, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_imgs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestResultMsg, total_imgs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "img_result_strs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestResultMsg, img_result_strs),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestResultMsg__img_result_strs,  // size() function pointer
    get_const_function__TestResultMsg__img_result_strs,  // get_const(index) function pointer
    get_function__TestResultMsg__img_result_strs,  // get(index) function pointer
    fetch_function__TestResultMsg__img_result_strs,  // fetch(index, &value) function pointer
    assign_function__TestResultMsg__img_result_strs,  // assign(index, value) function pointer
    resize_function__TestResultMsg__img_result_strs  // resize(index) function pointer
  },
  {
    "img_result_confidance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestResultMsg, img_result_confidance),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestResultMsg__img_result_confidance,  // size() function pointer
    get_const_function__TestResultMsg__img_result_confidance,  // get_const(index) function pointer
    get_function__TestResultMsg__img_result_confidance,  // get(index) function pointer
    fetch_function__TestResultMsg__img_result_confidance,  // fetch(index, &value) function pointer
    assign_function__TestResultMsg__img_result_confidance,  // assign(index, value) function pointer
    resize_function__TestResultMsg__img_result_confidance  // resize(index) function pointer
  },
  {
    "heat_maps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestResultMsg, heat_maps),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestResultMsg__heat_maps,  // size() function pointer
    get_const_function__TestResultMsg__heat_maps,  // get_const(index) function pointer
    get_function__TestResultMsg__heat_maps,  // get(index) function pointer
    fetch_function__TestResultMsg__heat_maps,  // fetch(index, &value) function pointer
    assign_function__TestResultMsg__heat_maps,  // assign(index, value) function pointer
    resize_function__TestResultMsg__heat_maps  // resize(index) function pointer
  },
  {
    "result_imgs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestResultMsg, result_imgs),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestResultMsg__result_imgs,  // size() function pointer
    get_const_function__TestResultMsg__result_imgs,  // get_const(index) function pointer
    get_function__TestResultMsg__result_imgs,  // get(index) function pointer
    fetch_function__TestResultMsg__result_imgs,  // fetch(index, &value) function pointer
    assign_function__TestResultMsg__result_imgs,  // assign(index, value) function pointer
    resize_function__TestResultMsg__result_imgs  // resize(index) function pointer
  },
  {
    "total_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestResultMsg, total_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestResultMsg_message_members = {
  "live_analysis_interfaces::msg",  // message namespace
  "TestResultMsg",  // message name
  8,  // number of fields
  sizeof(live_analysis_interfaces::msg::TestResultMsg),
  false,  // has_any_key_member_
  TestResultMsg_message_member_array,  // message members
  TestResultMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  TestResultMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestResultMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestResultMsg_message_members,
  get_message_typesupport_handle_function,
  &live_analysis_interfaces__msg__TestResultMsg__get_type_hash,
  &live_analysis_interfaces__msg__TestResultMsg__get_type_description,
  &live_analysis_interfaces__msg__TestResultMsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace live_analysis_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<live_analysis_interfaces::msg::TestResultMsg>()
{
  return &::live_analysis_interfaces::msg::rosidl_typesupport_introspection_cpp::TestResultMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, live_analysis_interfaces, msg, TestResultMsg)() {
  return &::live_analysis_interfaces::msg::rosidl_typesupport_introspection_cpp::TestResultMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
