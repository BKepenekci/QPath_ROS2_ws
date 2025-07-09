// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TrainingResult.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/training_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrainingResult_stopped
{
public:
  explicit Init_TrainingResult_stopped(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TrainingResult stopped(::live_analysis_interfaces::msg::TrainingResult::_stopped_type arg)
  {
    msg_.stopped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_training_completed
{
public:
  explicit Init_TrainingResult_training_completed(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_stopped training_completed(::live_analysis_interfaces::msg::TrainingResult::_training_completed_type arg)
  {
    msg_.training_completed = std::move(arg);
    return Init_TrainingResult_stopped(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_msg_txt
{
public:
  explicit Init_TrainingResult_msg_txt(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_training_completed msg_txt(::live_analysis_interfaces::msg::TrainingResult::_msg_txt_type arg)
  {
    msg_.msg_txt = std::move(arg);
    return Init_TrainingResult_training_completed(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_current_epoch
{
public:
  explicit Init_TrainingResult_current_epoch(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_msg_txt current_epoch(::live_analysis_interfaces::msg::TrainingResult::_current_epoch_type arg)
  {
    msg_.current_epoch = std::move(arg);
    return Init_TrainingResult_msg_txt(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_epochs
{
public:
  explicit Init_TrainingResult_epochs(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_current_epoch epochs(::live_analysis_interfaces::msg::TrainingResult::_epochs_type arg)
  {
    msg_.epochs = std::move(arg);
    return Init_TrainingResult_current_epoch(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_duration
{
public:
  explicit Init_TrainingResult_duration(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_epochs duration(::live_analysis_interfaces::msg::TrainingResult::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_TrainingResult_epochs(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_loss
{
public:
  explicit Init_TrainingResult_loss(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_duration loss(::live_analysis_interfaces::msg::TrainingResult::_loss_type arg)
  {
    msg_.loss = std::move(arg);
    return Init_TrainingResult_duration(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_total_patches
{
public:
  explicit Init_TrainingResult_total_patches(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_loss total_patches(::live_analysis_interfaces::msg::TrainingResult::_total_patches_type arg)
  {
    msg_.total_patches = std::move(arg);
    return Init_TrainingResult_loss(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_total_time
{
public:
  explicit Init_TrainingResult_total_time(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_total_patches total_time(::live_analysis_interfaces::msg::TrainingResult::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return Init_TrainingResult_total_patches(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_model_id
{
public:
  explicit Init_TrainingResult_model_id(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_total_time model_id(::live_analysis_interfaces::msg::TrainingResult::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_TrainingResult_total_time(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_algorithm_id
{
public:
  explicit Init_TrainingResult_algorithm_id(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_model_id algorithm_id(::live_analysis_interfaces::msg::TrainingResult::_algorithm_id_type arg)
  {
    msg_.algorithm_id = std::move(arg);
    return Init_TrainingResult_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_user_id
{
public:
  explicit Init_TrainingResult_user_id(::live_analysis_interfaces::msg::TrainingResult & msg)
  : msg_(msg)
  {}
  Init_TrainingResult_algorithm_id user_id(::live_analysis_interfaces::msg::TrainingResult::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_TrainingResult_algorithm_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

class Init_TrainingResult_header
{
public:
  Init_TrainingResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrainingResult_user_id header(::live_analysis_interfaces::msg::TrainingResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrainingResult_user_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainingResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TrainingResult>()
{
  return live_analysis_interfaces::msg::builder::Init_TrainingResult_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__BUILDER_HPP_
