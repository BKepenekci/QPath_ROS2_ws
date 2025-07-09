// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live_analysis_interfaces:msg/TrainRequestClient.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST_CLIENT__TRAITS_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST_CLIENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live_analysis_interfaces/msg/detail/train_request_client__struct.hpp"
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
  const TrainRequestClient & msg,
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

  // member: class_labels
  {
    if (msg.class_labels.size() == 0) {
      out << "class_labels: []";
    } else {
      out << "class_labels: [";
      size_t pending_items = msg.class_labels.size();
      for (auto item : msg.class_labels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rectangles
  {
    if (msg.rectangles.size() == 0) {
      out << "rectangles: []";
    } else {
      out << "rectangles: [";
      size_t pending_items = msg.rectangles.size();
      for (auto item : msg.rectangles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: files_completed
  {
    out << "files_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.files_completed, out);
    out << ", ";
  }

  // member: seq_no
  {
    out << "seq_no: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_no, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrainRequestClient & msg,
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

  // member: class_labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.class_labels.size() == 0) {
      out << "class_labels: []\n";
    } else {
      out << "class_labels:\n";
      for (auto item : msg.class_labels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rectangles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rectangles.size() == 0) {
      out << "rectangles: []\n";
    } else {
      out << "rectangles:\n";
      for (auto item : msg.rectangles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: seq_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_no: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_no, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrainRequestClient & msg, bool use_flow_style = false)
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
  const live_analysis_interfaces::msg::TrainRequestClient & msg,
  std::ostream & out, size_t indentation = 0)
{
  live_analysis_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live_analysis_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const live_analysis_interfaces::msg::TrainRequestClient & msg)
{
  return live_analysis_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<live_analysis_interfaces::msg::TrainRequestClient>()
{
  return "live_analysis_interfaces::msg::TrainRequestClient";
}

template<>
inline const char * name<live_analysis_interfaces::msg::TrainRequestClient>()
{
  return "live_analysis_interfaces/msg/TrainRequestClient";
}

template<>
struct has_fixed_size<live_analysis_interfaces::msg::TrainRequestClient>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live_analysis_interfaces::msg::TrainRequestClient>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live_analysis_interfaces::msg::TrainRequestClient>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST_CLIENT__TRAITS_HPP_
