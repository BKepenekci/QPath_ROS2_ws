// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from live_analysis_interfaces:msg/TrainingResult.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/training_result__rosidl_typesupport_fastrtps_cpp.hpp"
#include "live_analysis_interfaces/msg/detail/training_result__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace live_analysis_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
cdr_serialize(
  const live_analysis_interfaces::msg::TrainingResult & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: user_id
  cdr << ros_message.user_id;
  // Member: algorithm_id
  cdr << ros_message.algorithm_id;
  // Member: model_id
  cdr << ros_message.model_id;
  // Member: total_time
  cdr << ros_message.total_time;
  // Member: total_patches
  cdr << ros_message.total_patches;
  // Member: loss
  cdr << ros_message.loss;
  // Member: duration
  cdr << ros_message.duration;
  // Member: epochs
  cdr << ros_message.epochs;
  // Member: current_epoch
  cdr << ros_message.current_epoch;
  // Member: msg_txt
  cdr << ros_message.msg_txt;
  // Member: training_completed
  cdr << (ros_message.training_completed ? true : false);
  // Member: stopped
  cdr << (ros_message.stopped ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  live_analysis_interfaces::msg::TrainingResult & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: user_id
  cdr >> ros_message.user_id;

  // Member: algorithm_id
  cdr >> ros_message.algorithm_id;

  // Member: model_id
  cdr >> ros_message.model_id;

  // Member: total_time
  cdr >> ros_message.total_time;

  // Member: total_patches
  cdr >> ros_message.total_patches;

  // Member: loss
  cdr >> ros_message.loss;

  // Member: duration
  cdr >> ros_message.duration;

  // Member: epochs
  cdr >> ros_message.epochs;

  // Member: current_epoch
  cdr >> ros_message.current_epoch;

  // Member: msg_txt
  cdr >> ros_message.msg_txt;

  // Member: training_completed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.training_completed = tmp ? true : false;
  }

  // Member: stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stopped = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
get_serialized_size(
  const live_analysis_interfaces::msg::TrainingResult & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: user_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.user_id.size() + 1);
  // Member: algorithm_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.algorithm_id.size() + 1);
  // Member: model_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.model_id.size() + 1);
  // Member: total_time
  {
    size_t item_size = sizeof(ros_message.total_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_patches
  {
    size_t item_size = sizeof(ros_message.total_patches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loss
  {
    size_t item_size = sizeof(ros_message.loss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: duration
  {
    size_t item_size = sizeof(ros_message.duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epochs
  {
    size_t item_size = sizeof(ros_message.epochs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_epoch
  {
    size_t item_size = sizeof(ros_message.current_epoch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_txt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.msg_txt.size() + 1);
  // Member: training_completed
  {
    size_t item_size = sizeof(ros_message.training_completed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stopped
  {
    size_t item_size = sizeof(ros_message.stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
max_serialized_size_TrainingResult(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: user_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: algorithm_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: model_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: total_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: total_patches
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: loss
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: epochs
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_epoch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: msg_txt
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: training_completed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stopped
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TrainingResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const live_analysis_interfaces::msg::TrainingResult *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrainingResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<live_analysis_interfaces::msg::TrainingResult *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrainingResult__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const live_analysis_interfaces::msg::TrainingResult *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrainingResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrainingResult(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrainingResult__callbacks = {
  "live_analysis_interfaces::msg",
  "TrainingResult",
  _TrainingResult__cdr_serialize,
  _TrainingResult__cdr_deserialize,
  _TrainingResult__get_serialized_size,
  _TrainingResult__max_serialized_size
};

static rosidl_message_type_support_t _TrainingResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrainingResult__callbacks,
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
get_message_type_support_handle<live_analysis_interfaces::msg::TrainingResult>()
{
  return &live_analysis_interfaces::msg::typesupport_fastrtps_cpp::_TrainingResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, live_analysis_interfaces, msg, TrainingResult)() {
  return &live_analysis_interfaces::msg::typesupport_fastrtps_cpp::_TrainingResult__handle;
}

#ifdef __cplusplus
}
#endif
