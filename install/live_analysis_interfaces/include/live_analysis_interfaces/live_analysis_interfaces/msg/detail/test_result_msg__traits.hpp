// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live_analysis_interfaces:msg/TestResultMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/test_result_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__TRAITS_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live_analysis_interfaces/msg/detail/test_result_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'heat_maps'
// Member 'result_imgs'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace live_analysis_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestResultMsg & msg,
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

  // member: total_imgs
  {
    out << "total_imgs: ";
    rosidl_generator_traits::value_to_yaml(msg.total_imgs, out);
    out << ", ";
  }

  // member: img_result_strs
  {
    if (msg.img_result_strs.size() == 0) {
      out << "img_result_strs: []";
    } else {
      out << "img_result_strs: [";
      size_t pending_items = msg.img_result_strs.size();
      for (auto item : msg.img_result_strs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: img_result_confidance
  {
    if (msg.img_result_confidance.size() == 0) {
      out << "img_result_confidance: []";
    } else {
      out << "img_result_confidance: [";
      size_t pending_items = msg.img_result_confidance.size();
      for (auto item : msg.img_result_confidance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heat_maps
  {
    if (msg.heat_maps.size() == 0) {
      out << "heat_maps: []";
    } else {
      out << "heat_maps: [";
      size_t pending_items = msg.heat_maps.size();
      for (auto item : msg.heat_maps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: result_imgs
  {
    if (msg.result_imgs.size() == 0) {
      out << "result_imgs: []";
    } else {
      out << "result_imgs: [";
      size_t pending_items = msg.result_imgs.size();
      for (auto item : msg.result_imgs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: total_time
  {
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestResultMsg & msg,
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

  // member: total_imgs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_imgs: ";
    rosidl_generator_traits::value_to_yaml(msg.total_imgs, out);
    out << "\n";
  }

  // member: img_result_strs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.img_result_strs.size() == 0) {
      out << "img_result_strs: []\n";
    } else {
      out << "img_result_strs:\n";
      for (auto item : msg.img_result_strs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: img_result_confidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.img_result_confidance.size() == 0) {
      out << "img_result_confidance: []\n";
    } else {
      out << "img_result_confidance:\n";
      for (auto item : msg.img_result_confidance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heat_maps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heat_maps.size() == 0) {
      out << "heat_maps: []\n";
    } else {
      out << "heat_maps:\n";
      for (auto item : msg.heat_maps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: result_imgs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result_imgs.size() == 0) {
      out << "result_imgs: []\n";
    } else {
      out << "result_imgs:\n";
      for (auto item : msg.result_imgs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: total_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestResultMsg & msg, bool use_flow_style = false)
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
  const live_analysis_interfaces::msg::TestResultMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  live_analysis_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live_analysis_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const live_analysis_interfaces::msg::TestResultMsg & msg)
{
  return live_analysis_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<live_analysis_interfaces::msg::TestResultMsg>()
{
  return "live_analysis_interfaces::msg::TestResultMsg";
}

template<>
inline const char * name<live_analysis_interfaces::msg::TestResultMsg>()
{
  return "live_analysis_interfaces/msg/TestResultMsg";
}

template<>
struct has_fixed_size<live_analysis_interfaces::msg::TestResultMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live_analysis_interfaces::msg::TestResultMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live_analysis_interfaces::msg::TestResultMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__TRAITS_HPP_
