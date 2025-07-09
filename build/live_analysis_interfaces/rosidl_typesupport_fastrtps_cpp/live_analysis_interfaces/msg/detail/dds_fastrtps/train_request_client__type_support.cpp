// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from live_analysis_interfaces:msg/TrainRequestClient.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/train_request_client__rosidl_typesupport_fastrtps_cpp.hpp"
#include "live_analysis_interfaces/msg/detail/train_request_client__struct.hpp"

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

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::Image &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::Image &);
size_t get_serialized_size(
  const sensor_msgs::msg::Image &,
  size_t current_alignment);
size_t
max_serialized_size_Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::Image &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::Image &);
size_t get_serialized_size(
  const sensor_msgs::msg::Image &,
  size_t current_alignment);
size_t
max_serialized_size_Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace live_analysis_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
cdr_serialize(
  const live_analysis_interfaces::msg::TrainRequestClient & ros_message,
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
  // Member: epochs
  cdr << ros_message.epochs;
  // Member: min_accuracy
  cdr << ros_message.min_accuracy;
  // Member: batch_size
  cdr << ros_message.batch_size;
  // Member: use_detection
  cdr << (ros_message.use_detection ? true : false);
  // Member: use_label
  cdr << (ros_message.use_label ? true : false);
  // Member: data_class
  cdr << ros_message.data_class;
  // Member: train_images
  {
    size_t size = ros_message.train_images.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.train_images[i],
        cdr);
    }
  }
  // Member: eval_images
  {
    size_t size = ros_message.eval_images.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.eval_images[i],
        cdr);
    }
  }
  // Member: class_labels
  {
    cdr << ros_message.class_labels;
  }
  // Member: rectangles
  {
    cdr << ros_message.rectangles;
  }
  // Member: files_completed
  cdr << (ros_message.files_completed ? true : false);
  // Member: seq_no
  cdr << ros_message.seq_no;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  live_analysis_interfaces::msg::TrainRequestClient & ros_message)
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

  // Member: epochs
  cdr >> ros_message.epochs;

  // Member: min_accuracy
  cdr >> ros_message.min_accuracy;

  // Member: batch_size
  cdr >> ros_message.batch_size;

  // Member: use_detection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_detection = tmp ? true : false;
  }

  // Member: use_label
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_label = tmp ? true : false;
  }

  // Member: data_class
  cdr >> ros_message.data_class;

  // Member: train_images
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.train_images.resize(size);
    for (size_t i = 0; i < size; i++) {
      sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.train_images[i]);
    }
  }

  // Member: eval_images
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.eval_images.resize(size);
    for (size_t i = 0; i < size; i++) {
      sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.eval_images[i]);
    }
  }

  // Member: class_labels
  {
    cdr >> ros_message.class_labels;
  }

  // Member: rectangles
  {
    cdr >> ros_message.rectangles;
  }

  // Member: files_completed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.files_completed = tmp ? true : false;
  }

  // Member: seq_no
  cdr >> ros_message.seq_no;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
get_serialized_size(
  const live_analysis_interfaces::msg::TrainRequestClient & ros_message,
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
  // Member: epochs
  {
    size_t item_size = sizeof(ros_message.epochs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_accuracy
  {
    size_t item_size = sizeof(ros_message.min_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batch_size
  {
    size_t item_size = sizeof(ros_message.batch_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_detection
  {
    size_t item_size = sizeof(ros_message.use_detection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_label
  {
    size_t item_size = sizeof(ros_message.use_label);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data_class
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.data_class.size() + 1);
  // Member: train_images
  {
    size_t array_size = ros_message.train_images.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.train_images[index], current_alignment);
    }
  }
  // Member: eval_images
  {
    size_t array_size = ros_message.eval_images.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.eval_images[index], current_alignment);
    }
  }
  // Member: class_labels
  {
    size_t array_size = ros_message.class_labels.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.class_labels[index].size() + 1);
    }
  }
  // Member: rectangles
  {
    size_t array_size = ros_message.rectangles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rectangles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: files_completed
  {
    size_t item_size = sizeof(ros_message.files_completed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seq_no
  {
    size_t item_size = sizeof(ros_message.seq_no);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_live_analysis_interfaces
max_serialized_size_TrainRequestClient(
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

  // Member: epochs
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_accuracy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: batch_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: use_detection
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_label
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data_class
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

  // Member: train_images
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: eval_images
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: class_labels
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: rectangles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: files_completed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: seq_no
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TrainRequestClient__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const live_analysis_interfaces::msg::TrainRequestClient *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrainRequestClient__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<live_analysis_interfaces::msg::TrainRequestClient *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrainRequestClient__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const live_analysis_interfaces::msg::TrainRequestClient *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrainRequestClient__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrainRequestClient(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrainRequestClient__callbacks = {
  "live_analysis_interfaces::msg",
  "TrainRequestClient",
  _TrainRequestClient__cdr_serialize,
  _TrainRequestClient__cdr_deserialize,
  _TrainRequestClient__get_serialized_size,
  _TrainRequestClient__max_serialized_size
};

static rosidl_message_type_support_t _TrainRequestClient__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrainRequestClient__callbacks,
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
get_message_type_support_handle<live_analysis_interfaces::msg::TrainRequestClient>()
{
  return &live_analysis_interfaces::msg::typesupport_fastrtps_cpp::_TrainRequestClient__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, live_analysis_interfaces, msg, TrainRequestClient)() {
  return &live_analysis_interfaces::msg::typesupport_fastrtps_cpp::_TrainRequestClient__handle;
}

#ifdef __cplusplus
}
#endif
