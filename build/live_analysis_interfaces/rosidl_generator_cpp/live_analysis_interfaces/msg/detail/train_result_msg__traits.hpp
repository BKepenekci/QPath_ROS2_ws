// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live_analysis_interfaces:msg/TrainResultMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/train_result_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__TRAITS_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live_analysis_interfaces/msg/detail/train_result_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace live_analysis_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrainResultMsg & msg,
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

  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << ", ";
  }

  // member: model_id
  {
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
    out << ", ";
  }

  // member: total_time
  {
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
    out << ", ";
  }

  // member: total_train_imgs
  {
    out << "total_train_imgs: ";
    rosidl_generator_traits::value_to_yaml(msg.total_train_imgs, out);
    out << ", ";
  }

  // member: total_eval_imgs
  {
    out << "total_eval_imgs: ";
    rosidl_generator_traits::value_to_yaml(msg.total_eval_imgs, out);
    out << ", ";
  }

  // member: m_ap
  {
    out << "m_ap: ";
    rosidl_generator_traits::value_to_yaml(msg.m_ap, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: model_path
  {
    out << "model_path: ";
    rosidl_generator_traits::value_to_yaml(msg.model_path, out);
    out << ", ";
  }

  // member: training_completed
  {
    out << "training_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.training_completed, out);
    out << ", ";
  }

  // member: epoc
  {
    out << "epoc: ";
    rosidl_generator_traits::value_to_yaml(msg.epoc, out);
    out << ", ";
  }

  // member: current_epoc
  {
    out << "current_epoc: ";
    rosidl_generator_traits::value_to_yaml(msg.current_epoc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrainResultMsg & msg,
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

  // member: model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
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

  // member: total_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
    out << "\n";
  }

  // member: total_train_imgs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_train_imgs: ";
    rosidl_generator_traits::value_to_yaml(msg.total_train_imgs, out);
    out << "\n";
  }

  // member: total_eval_imgs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_eval_imgs: ";
    rosidl_generator_traits::value_to_yaml(msg.total_eval_imgs, out);
    out << "\n";
  }

  // member: m_ap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_ap: ";
    rosidl_generator_traits::value_to_yaml(msg.m_ap, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
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

  // member: training_completed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "training_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.training_completed, out);
    out << "\n";
  }

  // member: epoc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epoc: ";
    rosidl_generator_traits::value_to_yaml(msg.epoc, out);
    out << "\n";
  }

  // member: current_epoc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_epoc: ";
    rosidl_generator_traits::value_to_yaml(msg.current_epoc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrainResultMsg & msg, bool use_flow_style = false)
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
  const live_analysis_interfaces::msg::TrainResultMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  live_analysis_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live_analysis_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const live_analysis_interfaces::msg::TrainResultMsg & msg)
{
  return live_analysis_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<live_analysis_interfaces::msg::TrainResultMsg>()
{
  return "live_analysis_interfaces::msg::TrainResultMsg";
}

template<>
inline const char * name<live_analysis_interfaces::msg::TrainResultMsg>()
{
  return "live_analysis_interfaces/msg/TrainResultMsg";
}

template<>
struct has_fixed_size<live_analysis_interfaces::msg::TrainResultMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live_analysis_interfaces::msg::TrainResultMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live_analysis_interfaces::msg::TrainResultMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__TRAITS_HPP_
