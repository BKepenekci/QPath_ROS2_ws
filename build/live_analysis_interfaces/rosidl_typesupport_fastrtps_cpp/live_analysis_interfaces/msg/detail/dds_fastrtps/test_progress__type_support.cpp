// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from live_analysis_interfaces:msg/TestProgress.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/test_progress__rosidl_typesupport_fastrtps_cpp.hpp"
#include "live_analysis_interfaces/msg/detail/test_progress__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace live_analysis_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
cdr_serialize(
  const live_analysis_interfaces::msg::TestProgress & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  live_analysis_interfaces::msg::TestProgress & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
get_serialized_size(
  const live_analysis_interfaces::msg::TestProgress & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
max_serialized_size_TestProgress(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TestProgress__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const live_analysis_interfaces::msg::TestProgress *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TestProgress__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<live_analysis_interfaces::msg::TestProgress *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TestProgress__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const live_analysis_interfaces::msg::TestProgress *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TestProgress__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TestProgress(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TestProgress__callbacks = {
  "live_analysis_interfaces::msg",
  "TestProgress",
  _TestProgress__cdr_serialize,
  _TestProgress__cdr_deserialize,
  _TestProgress__get_serialized_size,
  _TestProgress__max_serialized_size
};

static rosidl_message_type_support_t _TestProgress__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TestProgress__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace live_analysis_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<live_analysis_interfaces::msg::TestProgress>()
{
  return &live_analysis_interfaces::msg::typesupport_fastrtps_cpp::_TestProgress__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, live_analysis_interfaces, msg, TestProgress)() {
  return &live_analysis_interfaces::msg::typesupport_fastrtps_cpp::_TestProgress__handle;
}

#ifdef __cplusplus
}
#endif
