// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TrainRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/train_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrainRequest_data_class
{
public:
  explicit Init_TrainRequest_data_class(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TrainRequest data_class(::live_analysis_interfaces::msg::TrainRequest::_data_class_type arg)
  {
    msg_.data_class = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_use_label
{
public:
  explicit Init_TrainRequest_use_label(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_data_class use_label(::live_analysis_interfaces::msg::TrainRequest::_use_label_type arg)
  {
    msg_.use_label = std::move(arg);
    return Init_TrainRequest_data_class(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_use_detection
{
public:
  explicit Init_TrainRequest_use_detection(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_use_label use_detection(::live_analysis_interfaces::msg::TrainRequest::_use_detection_type arg)
  {
    msg_.use_detection = std::move(arg);
    return Init_TrainRequest_use_label(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_sample_count
{
public:
  explicit Init_TrainRequest_sample_count(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_use_detection sample_count(::live_analysis_interfaces::msg::TrainRequest::_sample_count_type arg)
  {
    msg_.sample_count = std::move(arg);
    return Init_TrainRequest_use_detection(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_gpu
{
public:
  explicit Init_TrainRequest_gpu(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_sample_count gpu(::live_analysis_interfaces::msg::TrainRequest::_gpu_type arg)
  {
    msg_.gpu = std::move(arg);
    return Init_TrainRequest_sample_count(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_batch_size
{
public:
  explicit Init_TrainRequest_batch_size(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_gpu batch_size(::live_analysis_interfaces::msg::TrainRequest::_batch_size_type arg)
  {
    msg_.batch_size = std::move(arg);
    return Init_TrainRequest_gpu(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_min_accuracy
{
public:
  explicit Init_TrainRequest_min_accuracy(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_batch_size min_accuracy(::live_analysis_interfaces::msg::TrainRequest::_min_accuracy_type arg)
  {
    msg_.min_accuracy = std::move(arg);
    return Init_TrainRequest_batch_size(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_epochs
{
public:
  explicit Init_TrainRequest_epochs(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_min_accuracy epochs(::live_analysis_interfaces::msg::TrainRequest::_epochs_type arg)
  {
    msg_.epochs = std::move(arg);
    return Init_TrainRequest_min_accuracy(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_model_id
{
public:
  explicit Init_TrainRequest_model_id(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_epochs model_id(::live_analysis_interfaces::msg::TrainRequest::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_TrainRequest_epochs(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_algorithm_id
{
public:
  explicit Init_TrainRequest_algorithm_id(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_model_id algorithm_id(::live_analysis_interfaces::msg::TrainRequest::_algorithm_id_type arg)
  {
    msg_.algorithm_id = std::move(arg);
    return Init_TrainRequest_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_user_id
{
public:
  explicit Init_TrainRequest_user_id(::live_analysis_interfaces::msg::TrainRequest & msg)
  : msg_(msg)
  {}
  Init_TrainRequest_algorithm_id user_id(::live_analysis_interfaces::msg::TrainRequest::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_TrainRequest_algorithm_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

class Init_TrainRequest_header
{
public:
  Init_TrainRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrainRequest_user_id header(::live_analysis_interfaces::msg::TrainRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrainRequest_user_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TrainRequest>()
{
  return live_analysis_interfaces::msg::builder::Init_TrainRequest_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__BUILDER_HPP_
