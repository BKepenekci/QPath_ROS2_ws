// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from live_analysis_interfaces:msg/TestDone.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "live_analysis_interfaces/msg/detail/test_done__struct.hpp"
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

void TestDone_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) live_analysis_interfaces::msg::TestDone(_init);
}

void TestDone_fini_function(void * message_memory)
{
  auto typed_message = static_cast<live_analysis_interfaces::msg::TestDone *>(message_memory);
  typed_message->~TestDone();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestDone_message_member_array[1] = {
  {
    "user_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(live_analysis_interfaces::msg::TestDone, user_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestDone_message_members = {
  "live_analysis_interfaces::msg",  // message namespace
  "TestDone",  // message name
  1,  // number of fields
  sizeof(live_analysis_interfaces::msg::TestDone),
  TestDone_message_member_array,  // message members
  TestDone_init_function,  // function to initialize message memory (memory has to be allocated)
  TestDone_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestDone_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestDone_message_members,
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
get_message_type_support_handle<live_analysis_interfaces::msg::TestDone>()
{
  return &::live_analysis_interfaces::msg::rosidl_typesupport_introspection_cpp::TestDone_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, live_analysis_interfaces, msg, TestDone)() {
  return &::live_analysis_interfaces::msg::rosidl_typesupport_introspection_cpp::TestDone_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
