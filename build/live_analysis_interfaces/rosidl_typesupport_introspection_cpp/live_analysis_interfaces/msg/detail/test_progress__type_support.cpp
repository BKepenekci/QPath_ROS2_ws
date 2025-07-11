// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from live_analysis_interfaces:msg/TestProgress.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "live_analysis_interfaces/msg/detail/test_progress__struct.hpp"
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

void TestProgress_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) live_analysis_interfaces::msg::TestProgress(_init);
}

void TestProgress_fini_function(void * message_memory)
{
  auto typed_message = static_cast<live_analysis_interfaces::msg::TestProgress *>(message_memory);
  typed_message->~TestProgress();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestProgress_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestProgress, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestProgress_message_members = {
  "live_analysis_interfaces::msg",  // message namespace
  "TestProgress",  // message name
  1,  // number of fields
  sizeof(live_analysis_interfaces::msg::TestProgress),
  TestProgress_message_member_array,  // message members
  TestProgress_init_function,  // function to initialize message memory (memory has to be allocated)
  TestProgress_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestProgress_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestProgress_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace live_analysis_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<live_analysis_interfaces::msg::TestProgress>()
{
  return &::live_analysis_interfaces::msg::rosidl_typesupport_introspection_cpp::TestProgress_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, live_analysis_interfaces, msg, TestProgress)() {
  return &::live_analysis_interfaces::msg::rosidl_typesupport_introspection_cpp::TestProgress_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
