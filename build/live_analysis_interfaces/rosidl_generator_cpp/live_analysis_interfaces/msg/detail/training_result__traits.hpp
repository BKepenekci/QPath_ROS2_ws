// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live_analysis_interfaces:msg/TrainingResult.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__TRAITS_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live_analysis_interfaces/msg/detail/training_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace live_analysis_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrainingResult & msg,
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

  // member: algorithm_id
  {
    out << "algorithm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.algorithm_id, out);
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

  // member: total_patches
  {
    out << "total_patches: ";
    rosidl_generator_traits::value_to_yaml(msg.total_patches, out);
    out << ", ";
  }

  // member: loss
  {
    out << "loss: ";
    rosidl_generator_traits::value_to_yaml(msg.loss, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: epochs
  {
    out << "epochs: ";
    rosidl_generator_traits::value_to_yaml(msg.epochs, out);
    out << ", ";
  }

  // member: current_epoch
  {
    out << "current_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.current_epoch, out);
    out << ", ";
  }

  // member: msg_txt
  {
    out << "msg_txt: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_txt, out);
    out << ", ";
  }

  // member: training_completed
  {
    out << "training_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.training_completed, out);
    out << ", ";
  }

  // member: stopped
  {
    out << "stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.stopped, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrainingResult & msg,
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

  // member: algorithm_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "algorithm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.algorithm_id, out);
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

  // member: total_patches
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_patches: ";
    rosidl_generator_traits::value_to_yaml(msg.total_patches, out);
    out << "\n";
  }

  // member: loss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loss: ";
    rosidl_generator_traits::value_to_yaml(msg.loss, out);
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

  // member: epochs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epochs: ";
    rosidl_generator_traits::value_to_yaml(msg.epochs, out);
    out << "\n";
  }

  // member: current_epoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.current_epoch, out);
    out << "\n";
  }

  // member: msg_txt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_txt: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_txt, out);
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

  // member: stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.stopped, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrainingResult & msg, bool use_flow_style = false)
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
  const live_analysis_interfaces::msg::TrainingResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  live_analysis_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live_analysis_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const live_analysis_interfaces::msg::TrainingResult & msg)
{
  return live_analysis_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<live_analysis_interfaces::msg::TrainingResult>()
{
  return "live_analysis_interfaces::msg::TrainingResult";
}

template<>
inline const char * name<live_analysis_interfaces::msg::TrainingResult>()
{
  return "live_analysis_interfaces/msg/TrainingResult";
}

template<>
struct has_fixed_size<live_analysis_interfaces::msg::TrainingResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live_analysis_interfaces::msg::TrainingResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live_analysis_interfaces::msg::TrainingResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__TRAITS_HPP_
