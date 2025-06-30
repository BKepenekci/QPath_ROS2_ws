// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live_analysis_interfaces:msg/TrainAlgorithmMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/train_algorithm_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__TRAITS_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live_analysis_interfaces/msg/detail/train_algorithm_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'train_images'
// Member 'eval_images'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace live_analysis_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrainAlgorithmMsg & msg,
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

  // member: train_images
  {
    if (msg.train_images.size() == 0) {
      out << "train_images: []";
    } else {
      out << "train_images: [";
      size_t pending_items = msg.train_images.size();
      for (auto item : msg.train_images) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: eval_images
  {
    if (msg.eval_images.size() == 0) {
      out << "eval_images: []";
    } else {
      out << "eval_images: [";
      size_t pending_items = msg.eval_images.size();
      for (auto item : msg.eval_images) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: train_set_annotations
  {
    if (msg.train_set_annotations.size() == 0) {
      out << "train_set_annotations: []";
    } else {
      out << "train_set_annotations: [";
      size_t pending_items = msg.train_set_annotations.size();
      for (auto item : msg.train_set_annotations) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: eval_set_annotations
  {
    if (msg.eval_set_annotations.size() == 0) {
      out << "eval_set_annotations: []";
    } else {
      out << "eval_set_annotations: [";
      size_t pending_items = msg.eval_set_annotations.size();
      for (auto item : msg.eval_set_annotations) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: epoc
  {
    out << "epoc: ";
    rosidl_generator_traits::value_to_yaml(msg.epoc, out);
    out << ", ";
  }

  // member: batchsize
  {
    out << "batchsize: ";
    rosidl_generator_traits::value_to_yaml(msg.batchsize, out);
    out << ", ";
  }

  // member: algorithm_id
  {
    out << "algorithm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.algorithm_id, out);
    out << ", ";
  }

  // member: algorithm_name
  {
    out << "algorithm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.algorithm_name, out);
    out << ", ";
  }

  // member: gpu
  {
    out << "gpu: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu, out);
    out << ", ";
  }

  // member: model_path
  {
    out << "model_path: ";
    rosidl_generator_traits::value_to_yaml(msg.model_path, out);
    out << ", ";
  }

  // member: files_completed
  {
    out << "files_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.files_completed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrainAlgorithmMsg & msg,
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

  // member: train_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.train_images.size() == 0) {
      out << "train_images: []\n";
    } else {
      out << "train_images:\n";
      for (auto item : msg.train_images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: eval_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.eval_images.size() == 0) {
      out << "eval_images: []\n";
    } else {
      out << "eval_images:\n";
      for (auto item : msg.eval_images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: train_set_annotations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.train_set_annotations.size() == 0) {
      out << "train_set_annotations: []\n";
    } else {
      out << "train_set_annotations:\n";
      for (auto item : msg.train_set_annotations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: eval_set_annotations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.eval_set_annotations.size() == 0) {
      out << "eval_set_annotations: []\n";
    } else {
      out << "eval_set_annotations:\n";
      for (auto item : msg.eval_set_annotations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: batchsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batchsize: ";
    rosidl_generator_traits::value_to_yaml(msg.batchsize, out);
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

  // member: algorithm_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "algorithm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.algorithm_name, out);
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

  // member: model_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_path: ";
    rosidl_generator_traits::value_to_yaml(msg.model_path, out);
    out << "\n";
  }

  // member: files_completed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "files_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.files_completed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrainAlgorithmMsg & msg, bool use_flow_style = false)
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
  const live_analysis_interfaces::msg::TrainAlgorithmMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  live_analysis_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live_analysis_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
{
  return live_analysis_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<live_analysis_interfaces::msg::TrainAlgorithmMsg>()
{
  return "live_analysis_interfaces::msg::TrainAlgorithmMsg";
}

template<>
inline const char * name<live_analysis_interfaces::msg::TrainAlgorithmMsg>()
{
  return "live_analysis_interfaces/msg/TrainAlgorithmMsg";
}

template<>
struct has_fixed_size<live_analysis_interfaces::msg::TrainAlgorithmMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live_analysis_interfaces::msg::TrainAlgorithmMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live_analysis_interfaces::msg::TrainAlgorithmMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__TRAITS_HPP_
