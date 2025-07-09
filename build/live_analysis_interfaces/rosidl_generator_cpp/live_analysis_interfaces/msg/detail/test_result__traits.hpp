// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live_analysis_interfaces:msg/TestResult.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__TRAITS_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live_analysis_interfaces/msg/detail/test_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'heatmap'
// Member 'mask'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace live_analysis_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: user_id
  {
    out << "user_id: ";
    rosidl_generator_traits::value_to_yaml(msg.user_id, out);
    out << ", ";
  }

  // member: model_id
  {
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
    out << ", ";
  }

  // member: ok
  {
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << ", ";
  }

  // member: heatmap
  {
    out << "heatmap: ";
    to_flow_style_yaml(msg.heatmap, out);
    out << ", ";
  }

  // member: mask
  {
    out << "mask: ";
    to_flow_style_yaml(msg.mask, out);
    out << ", ";
  }

  // member: bboxes
  {
    if (msg.bboxes.size() == 0) {
      out << "bboxes: []";
    } else {
      out << "bboxes: [";
      size_t pending_items = msg.bboxes.size();
      for (auto item : msg.bboxes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confidences
  {
    if (msg.confidences.size() == 0) {
      out << "confidences: []";
    } else {
      out << "confidences: [";
      size_t pending_items = msg.confidences.size();
      for (auto item : msg.confidences) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ok_list
  {
    if (msg.ok_list.size() == 0) {
      out << "ok_list: []";
    } else {
      out << "ok_list: [";
      size_t pending_items = msg.ok_list.size();
      for (auto item : msg.ok_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image_path
  {
    out << "image_path: ";
    rosidl_generator_traits::value_to_yaml(msg.image_path, out);
    out << ", ";
  }

  // member: percent_done
  {
    out << "percent_done: ";
    rosidl_generator_traits::value_to_yaml(msg.percent_done, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestResult & msg,
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

  // member: user_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_id: ";
    rosidl_generator_traits::value_to_yaml(msg.user_id, out);
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

  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << "\n";
  }

  // member: heatmap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heatmap:\n";
    to_block_style_yaml(msg.heatmap, out, indentation + 2);
  }

  // member: mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mask:\n";
    to_block_style_yaml(msg.mask, out, indentation + 2);
  }

  // member: bboxes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bboxes.size() == 0) {
      out << "bboxes: []\n";
    } else {
      out << "bboxes:\n";
      for (auto item : msg.bboxes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: confidences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confidences.size() == 0) {
      out << "confidences: []\n";
    } else {
      out << "confidences:\n";
      for (auto item : msg.confidences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ok_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ok_list.size() == 0) {
      out << "ok_list: []\n";
    } else {
      out << "ok_list:\n";
      for (auto item : msg.ok_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: image_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_path: ";
    rosidl_generator_traits::value_to_yaml(msg.image_path, out);
    out << "\n";
  }

  // member: percent_done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percent_done: ";
    rosidl_generator_traits::value_to_yaml(msg.percent_done, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestResult & msg, bool use_flow_style = false)
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
  const live_analysis_interfaces::msg::TestResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  live_analysis_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live_analysis_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const live_analysis_interfaces::msg::TestResult & msg)
{
  return live_analysis_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<live_analysis_interfaces::msg::TestResult>()
{
  return "live_analysis_interfaces::msg::TestResult";
}

template<>
inline const char * name<live_analysis_interfaces::msg::TestResult>()
{
  return "live_analysis_interfaces/msg/TestResult";
}

template<>
struct has_fixed_size<live_analysis_interfaces::msg::TestResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live_analysis_interfaces::msg::TestResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live_analysis_interfaces::msg::TestResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__TRAITS_HPP_
