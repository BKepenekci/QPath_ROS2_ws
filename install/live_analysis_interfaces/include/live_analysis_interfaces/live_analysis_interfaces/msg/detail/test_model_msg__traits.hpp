// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live_analysis_interfaces:msg/TestModelMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/test_model_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__TRAITS_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live_analysis_interfaces/msg/detail/test_model_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'images'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace live_analysis_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestModelMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: model_id
  {
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
    out << ", ";
  }

  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << ", ";
  }

  // member: with_bounding_box
  {
    out << "with_bounding_box: ";
    rosidl_generator_traits::value_to_yaml(msg.with_bounding_box, out);
    out << ", ";
  }

  // member: gpu
  {
    out << "gpu: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu, out);
    out << ", ";
  }

  // member: area_th
  {
    out << "area_th: ";
    rosidl_generator_traits::value_to_yaml(msg.area_th, out);
    out << ", ";
  }

  // member: confidance_th
  {
    out << "confidance_th: ";
    rosidl_generator_traits::value_to_yaml(msg.confidance_th, out);
    out << ", ";
  }

  // member: images
  {
    if (msg.images.size() == 0) {
      out << "images: []";
    } else {
      out << "images: [";
      size_t pending_items = msg.images.size();
      for (auto item : msg.images) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestModelMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: model_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
    out << "\n";
  }

  // member: model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << "\n";
  }

  // member: with_bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "with_bounding_box: ";
    rosidl_generator_traits::value_to_yaml(msg.with_bounding_box, out);
    out << "\n";
  }

  // member: gpu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpu: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu, out);
    out << "\n";
  }

  // member: area_th
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_th: ";
    rosidl_generator_traits::value_to_yaml(msg.area_th, out);
    out << "\n";
  }

  // member: confidance_th
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidance_th: ";
    rosidl_generator_traits::value_to_yaml(msg.confidance_th, out);
    out << "\n";
  }

  // member: images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.images.size() == 0) {
      out << "images: []\n";
    } else {
      out << "images:\n";
      for (auto item : msg.images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestModelMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace live_analysis_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use live_analysis_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const live_analysis_interfaces::msg::TestModelMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  live_analysis_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live_analysis_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const live_analysis_interfaces::msg::TestModelMsg & msg)
{
  return live_analysis_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<live_analysis_interfaces::msg::TestModelMsg>()
{
  return "live_analysis_interfaces::msg::TestModelMsg";
}

template<>
inline const char * name<live_analysis_interfaces::msg::TestModelMsg>()
{
  return "live_analysis_interfaces/msg/TestModelMsg";
}

template<>
struct has_fixed_size<live_analysis_interfaces::msg::TestModelMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live_analysis_interfaces::msg::TestModelMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live_analysis_interfaces::msg::TestModelMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__TRAITS_HPP_
