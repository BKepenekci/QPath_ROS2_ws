// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TrainRequestClient.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST_CLIENT__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST_CLIENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/train_request_client__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrainRequestClient_seq_no
{
public:
  explicit Init_TrainRequestClient_seq_no(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TrainRequestClient seq_no(::live_analysis_interfaces::msg::TrainRequestClient::_seq_no_type arg)
  {
    msg_.seq_no = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_files_completed
{
public:
  explicit Init_TrainRequestClient_files_completed(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_seq_no files_completed(::live_analysis_interfaces::msg::TrainRequestClient::_files_completed_type arg)
  {
    msg_.files_completed = std::move(arg);
    return Init_TrainRequestClient_seq_no(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_rectangles
{
public:
  explicit Init_TrainRequestClient_rectangles(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_files_completed rectangles(::live_analysis_interfaces::msg::TrainRequestClient::_rectangles_type arg)
  {
    msg_.rectangles = std::move(arg);
    return Init_TrainRequestClient_files_completed(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_class_labels
{
public:
  explicit Init_TrainRequestClient_class_labels(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_rectangles class_labels(::live_analysis_interfaces::msg::TrainRequestClient::_class_labels_type arg)
  {
    msg_.class_labels = std::move(arg);
    return Init_TrainRequestClient_rectangles(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_eval_images
{
public:
  explicit Init_TrainRequestClient_eval_images(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_class_labels eval_images(::live_analysis_interfaces::msg::TrainRequestClient::_eval_images_type arg)
  {
    msg_.eval_images = std::move(arg);
    return Init_TrainRequestClient_class_labels(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_train_images
{
public:
  explicit Init_TrainRequestClient_train_images(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_eval_images train_images(::live_analysis_interfaces::msg::TrainRequestClient::_train_images_type arg)
  {
    msg_.train_images = std::move(arg);
    return Init_TrainRequestClient_eval_images(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_data_class
{
public:
  explicit Init_TrainRequestClient_data_class(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_train_images data_class(::live_analysis_interfaces::msg::TrainRequestClient::_data_class_type arg)
  {
    msg_.data_class = std::move(arg);
    return Init_TrainRequestClient_train_images(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_use_label
{
public:
  explicit Init_TrainRequestClient_use_label(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_data_class use_label(::live_analysis_interfaces::msg::TrainRequestClient::_use_label_type arg)
  {
    msg_.use_label = std::move(arg);
    return Init_TrainRequestClient_data_class(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_use_detection
{
public:
  explicit Init_TrainRequestClient_use_detection(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_use_label use_detection(::live_analysis_interfaces::msg::TrainRequestClient::_use_detection_type arg)
  {
    msg_.use_detection = std::move(arg);
    return Init_TrainRequestClient_use_label(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_batch_size
{
public:
  explicit Init_TrainRequestClient_batch_size(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_use_detection batch_size(::live_analysis_interfaces::msg::TrainRequestClient::_batch_size_type arg)
  {
    msg_.batch_size = std::move(arg);
    return Init_TrainRequestClient_use_detection(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_min_accuracy
{
public:
  explicit Init_TrainRequestClient_min_accuracy(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_batch_size min_accuracy(::live_analysis_interfaces::msg::TrainRequestClient::_min_accuracy_type arg)
  {
    msg_.min_accuracy = std::move(arg);
    return Init_TrainRequestClient_batch_size(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_epochs
{
public:
  explicit Init_TrainRequestClient_epochs(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_min_accuracy epochs(::live_analysis_interfaces::msg::TrainRequestClient::_epochs_type arg)
  {
    msg_.epochs = std::move(arg);
    return Init_TrainRequestClient_min_accuracy(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_model_id
{
public:
  explicit Init_TrainRequestClient_model_id(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_epochs model_id(::live_analysis_interfaces::msg::TrainRequestClient::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_TrainRequestClient_epochs(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_algorithm_id
{
public:
  explicit Init_TrainRequestClient_algorithm_id(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_model_id algorithm_id(::live_analysis_interfaces::msg::TrainRequestClient::_algorithm_id_type arg)
  {
    msg_.algorithm_id = std::move(arg);
    return Init_TrainRequestClient_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_user_id
{
public:
  explicit Init_TrainRequestClient_user_id(::live_analysis_interfaces::msg::TrainRequestClient & msg)
  : msg_(msg)
  {}
  Init_TrainRequestClient_algorithm_id user_id(::live_analysis_interfaces::msg::TrainRequestClient::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_TrainRequestClient_algorithm_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

class Init_TrainRequestClient_header
{
public:
  Init_TrainRequestClient_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrainRequestClient_user_id header(::live_analysis_interfaces::msg::TrainRequestClient::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrainRequestClient_user_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequestClient msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TrainRequestClient>()
{
  return live_analysis_interfaces::msg::builder::Init_TrainRequestClient_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST_CLIENT__BUILDER_HPP_
