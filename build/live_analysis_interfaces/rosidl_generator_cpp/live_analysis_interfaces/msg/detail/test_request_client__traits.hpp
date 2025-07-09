// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live_analysis_interfaces:msg/TestRequestClient.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__TRAITS_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live_analysis_interfaces/msg/detail/test_request_client__struct.hpp"
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
  const TestRequestClient & msg,
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

  // member: model_path
  {
    out << "model_path: ";
    rosidl_generator_traits::value_to_yaml(msg.model_path, out);
    out << ", ";
  }

  // member: yolo_path
  {
    out << "yolo_path: ";
    rosidl_generator_traits::value_to_yaml(msg.yolo_path, out);
    out << ", ";
  }

  // member: with_bounding_box
  {
    out << "with_bounding_box: ";
    rosidl_generator_traits::value_to_yaml(msg.with_bounding_box, out);
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
    out << ", ";
  }

  // member: image_paths
  {
    if (msg.image_paths.size() == 0) {
      out << "image_paths: []";
    } else {
      out << "image_paths: [";
      size_t pending_items = msg.image_paths.size();
      for (auto item : msg.image_paths) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const TestRequestClient & msg,
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

  // member: model_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_path: ";
    rosidl_generator_traits::value_to_yaml(msg.model_path, out);
    out << "\n";
  }

  // member: yolo_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yolo_path: ";
    rosidl_generator_traits::value_to_yaml(msg.yolo_path, out);
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

  // member: image_paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_paths.size() == 0) {
      out << "image_paths: []\n";
    } else {
      out << "image_paths:\n";
      for (auto item : msg.image_paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequestClient & msg, bool use_flow_style = false)
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
  const live_analysis_interfaces::msg::TestRequestClient & msg,
  std::ostream & out, size_t indentation = 0)
{
  live_analysis_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live_analysis_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const live_analysis_interfaces::msg::TestRequestClient & msg)
{
  return live_analysis_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<live_analysis_interfaces::msg::TestRequestClient>()
{
  return "live_analysis_interfaces::msg::TestRequestClient";
}

template<>
inline const char * name<live_analysis_interfaces::msg::TestRequestClient>()
{
  return "live_analysis_interfaces/msg/TestRequestClient";
}

template<>
struct has_fixed_size<live_analysis_interfaces::msg::TestRequestClient>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live_analysis_interfaces::msg::TestRequestClient>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live_analysis_interfaces::msg::TestRequestClient>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__TRAITS_HPP_
