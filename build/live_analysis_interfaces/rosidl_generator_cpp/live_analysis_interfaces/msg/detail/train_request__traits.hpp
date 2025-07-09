// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live_analysis_interfaces:msg/TrainRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__TRAITS_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live_analysis_interfaces/msg/detail/train_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace live_analysis_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrainRequest & msg,
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

  // member: epochs
  {
    out << "epochs: ";
    rosidl_generator_traits::value_to_yaml(msg.epochs, out);
    out << ", ";
  }

  // member: min_accuracy
  {
    out << "min_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.min_accuracy, out);
    out << ", ";
  }

  // member: batch_size
  {
    out << "batch_size: ";
    rosidl_generator_traits::value_to_yaml(msg.batch_size, out);
    out << ", ";
  }

  // member: gpu
  {
    out << "gpu: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu, out);
    out << ", ";
  }

  // member: sample_count
  {
    out << "sample_count: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_count, out);
    out << ", ";
  }

  // member: use_detection
  {
    out << "use_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.use_detection, out);
    out << ", ";
  }

  // member: use_label
  {
    out << "use_label: ";
    rosidl_generator_traits::value_to_yaml(msg.use_label, out);
    out << ", ";
  }

  // member: data_class
  {
    out << "data_class: ";
    rosidl_generator_traits::value_to_yaml(msg.data_class, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrainRequest & msg,
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

  // member: epochs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epochs: ";
    rosidl_generator_traits::value_to_yaml(msg.epochs, out);
    out << "\n";
  }

  // member: min_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.min_accuracy, out);
    out << "\n";
  }

  // member: batch_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batch_size: ";
    rosidl_generator_traits::value_to_yaml(msg.batch_size, out);
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

  // member: sample_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_count: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_count, out);
    out << "\n";
  }

  // member: use_detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.use_detection, out);
    out << "\n";
  }

  // member: use_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_label: ";
    rosidl_generator_traits::value_to_yaml(msg.use_label, out);
    out << "\n";
  }

  // member: data_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_class: ";
    rosidl_generator_traits::value_to_yaml(msg.data_class, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrainRequest & msg, bool use_flow_style = false)
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
  const live_analysis_interfaces::msg::TrainRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  live_analysis_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live_analysis_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const live_analysis_interfaces::msg::TrainRequest & msg)
{
  return live_analysis_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<live_analysis_interfaces::msg::TrainRequest>()
{
  return "live_analysis_interfaces::msg::TrainRequest";
}

template<>
inline const char * name<live_analysis_interfaces::msg::TrainRequest>()
{
  return "live_analysis_interfaces/msg/TrainRequest";
}

template<>
struct has_fixed_size<live_analysis_interfaces::msg::TrainRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live_analysis_interfaces::msg::TrainRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live_analysis_interfaces::msg::TrainRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__TRAITS_HPP_
