// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from live_analysis_interfaces:msg/TestResultMsg.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/test_result_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "live_analysis_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "live_analysis_interfaces/msg/detail/test_result_msg__struct.h"
#include "live_analysis_interfaces/msg/detail/test_result_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // img_result_confidance
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // img_result_confidance
#include "rosidl_runtime_c/string.h"  // id, img_result_strs
#include "rosidl_runtime_c/string_functions.h"  // id, img_result_strs
#include "sensor_msgs/msg/detail/image__functions.h"  // heat_maps, result_imgs
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_serialize_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_deserialize_sensor_msgs__msg__Image(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__Image * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_serialize_key_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t get_serialized_size_key_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t max_serialized_size_key_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _TestResultMsg__ros_msg_type = live_analysis_interfaces__msg__TestResultMsg;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
bool cdr_serialize_live_analysis_interfaces__msg__TestResultMsg(
  const live_analysis_interfaces__msg__TestResultMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: total_imgs
  {
    cdr << ros_message->total_imgs;
  }

  // Field name: img_result_strs
  {
    size_t size = ros_message->img_result_strs.size;
    auto array_ptr = ros_message->img_result_strs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: img_result_confidance
  {
    size_t size = ros_message->img_result_confidance.size;
    auto array_ptr = ros_message->img_result_confidance.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: heat_maps
  {
    size_t size = ros_message->heat_maps.size;
    auto array_ptr = ros_message->heat_maps.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_sensor_msgs__msg__Image(
        &array_ptr[i], cdr);
    }
  }

  // Field name: result_imgs
  {
    size_t size = ros_message->result_imgs.size;
    auto array_ptr = ros_message->result_imgs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_sensor_msgs__msg__Image(
        &array_ptr[i], cdr);
    }
  }

  // Field name: total_time
  {
    cdr << ros_message->total_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
bool cdr_deserialize_live_analysis_interfaces__msg__TestResultMsg(
  eprosima::fastcdr::Cdr & cdr,
  live_analysis_interfaces__msg__TestResultMsg * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: total_imgs
  {
    cdr >> ros_message->total_imgs;
  }

  // Field name: img_result_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->img_result_strs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->img_result_strs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->img_result_strs, size)) {
      fprintf(stderr, "failed to create array for field 'img_result_strs'");
      return false;
    }
    auto array_ptr = ros_message->img_result_strs.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'img_result_strs'\n");
        return false;
      }
    }
  }

  // Field name: img_result_confidance
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->img_result_confidance.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->img_result_confidance);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->img_result_confidance, size)) {
      fprintf(stderr, "failed to create array for field 'img_result_confidance'");
      return false;
    }
    auto array_ptr = ros_message->img_result_confidance.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: heat_maps
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->heat_maps.data) {
      sensor_msgs__msg__Image__Sequence__fini(&ros_message->heat_maps);
    }
    if (!sensor_msgs__msg__Image__Sequence__init(&ros_message->heat_maps, size)) {
      fprintf(stderr, "failed to create array for field 'heat_maps'");
      return false;
    }
    auto array_ptr = ros_message->heat_maps.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_sensor_msgs__msg__Image(cdr, &array_ptr[i]);
    }
  }

  // Field name: result_imgs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->result_imgs.data) {
      sensor_msgs__msg__Image__Sequence__fini(&ros_message->result_imgs);
    }
    if (!sensor_msgs__msg__Image__Sequence__init(&ros_message->result_imgs, size)) {
      fprintf(stderr, "failed to create array for field 'result_imgs'");
      return false;
    }
    auto array_ptr = ros_message->result_imgs.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_sensor_msgs__msg__Image(cdr, &array_ptr[i]);
    }
  }

  // Field name: total_time
  {
    cdr >> ros_message->total_time;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t get_serialized_size_live_analysis_interfaces__msg__TestResultMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestResultMsg__ros_msg_type * ros_message = static_cast<const _TestResultMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);

  // Field name: total_imgs
  {
    size_t item_size = sizeof(ros_message->total_imgs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: img_result_strs
  {
    size_t array_size = ros_message->img_result_strs.size;
    auto array_ptr = ros_message->img_result_strs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: img_result_confidance
  {
    size_t array_size = ros_message->img_result_confidance.size;
    auto array_ptr = ros_message->img_result_confidance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heat_maps
  {
    size_t array_size = ros_message->heat_maps.size;
    auto array_ptr = ros_message->heat_maps.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__Image(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: result_imgs
  {
    size_t array_size = ros_message->result_imgs.size;
    auto array_ptr = ros_message->result_imgs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__Image(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: total_time
  {
    size_t item_size = sizeof(ros_message->total_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t max_serialized_size_live_analysis_interfaces__msg__TestResultMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: id
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

  // Field name: total_imgs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: img_result_strs
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

  // Field name: img_result_confidance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heat_maps
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: result_imgs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: total_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = live_analysis_interfaces__msg__TestResultMsg;
    is_plain =
      (
      offsetof(DataType, total_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
bool cdr_serialize_key_live_analysis_interfaces__msg__TestResultMsg(
  const live_analysis_interfaces__msg__TestResultMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: total_imgs
  {
    cdr << ros_message->total_imgs;
  }

  // Field name: img_result_strs
  {
    size_t size = ros_message->img_result_strs.size;
    auto array_ptr = ros_message->img_result_strs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: img_result_confidance
  {
    size_t size = ros_message->img_result_confidance.size;
    auto array_ptr = ros_message->img_result_confidance.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: heat_maps
  {
    size_t size = ros_message->heat_maps.size;
    auto array_ptr = ros_message->heat_maps.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_sensor_msgs__msg__Image(
        &array_ptr[i], cdr);
    }
  }

  // Field name: result_imgs
  {
    size_t size = ros_message->result_imgs.size;
    auto array_ptr = ros_message->result_imgs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_sensor_msgs__msg__Image(
        &array_ptr[i], cdr);
    }
  }

  // Field name: total_time
  {
    cdr << ros_message->total_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t get_serialized_size_key_live_analysis_interfaces__msg__TestResultMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestResultMsg__ros_msg_type * ros_message = static_cast<const _TestResultMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);

  // Field name: total_imgs
  {
    size_t item_size = sizeof(ros_message->total_imgs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: img_result_strs
  {
    size_t array_size = ros_message->img_result_strs.size;
    auto array_ptr = ros_message->img_result_strs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: img_result_confidance
  {
    size_t array_size = ros_message->img_result_confidance.size;
    auto array_ptr = ros_message->img_result_confidance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heat_maps
  {
    size_t array_size = ros_message->heat_maps.size;
    auto array_ptr = ros_message->heat_maps.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_sensor_msgs__msg__Image(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: result_imgs
  {
    size_t array_size = ros_message->result_imgs.size;
    auto array_ptr = ros_message->result_imgs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_sensor_msgs__msg__Image(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: total_time
  {
    size_t item_size = sizeof(ros_message->total_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t max_serialized_size_key_live_analysis_interfaces__msg__TestResultMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: id
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

  // Field name: total_imgs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: img_result_strs
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

  // Field name: img_result_confidance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heat_maps
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: result_imgs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: total_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = live_analysis_interfaces__msg__TestResultMsg;
    is_plain =
      (
      offsetof(DataType, total_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TestResultMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const live_analysis_interfaces__msg__TestResultMsg * ros_message = static_cast<const live_analysis_interfaces__msg__TestResultMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_live_analysis_interfaces__msg__TestResultMsg(ros_message, cdr);
}

static bool _TestResultMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  live_analysis_interfaces__msg__TestResultMsg * ros_message = static_cast<live_analysis_interfaces__msg__TestResultMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_live_analysis_interfaces__msg__TestResultMsg(cdr, ros_message);
}

static uint32_t _TestResultMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_live_analysis_interfaces__msg__TestResultMsg(
      untyped_ros_message, 0));
}

static size_t _TestResultMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_live_analysis_interfaces__msg__TestResultMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TestResultMsg = {
  "live_analysis_interfaces::msg",
  "TestResultMsg",
  _TestResultMsg__cdr_serialize,
  _TestResultMsg__cdr_deserialize,
  _TestResultMsg__get_serialized_size,
  _TestResultMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TestResultMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TestResultMsg,
  get_message_typesupport_handle_function,
  &live_analysis_interfaces__msg__TestResultMsg__get_type_hash,
  &live_analysis_interfaces__msg__TestResultMsg__get_type_description,
  &live_analysis_interfaces__msg__TestResultMsg__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, live_analysis_interfaces, msg, TestResultMsg)() {
  return &_TestResultMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
