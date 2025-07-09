// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/StopTrainingRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TRAINING_REQUEST__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TRAINING_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/stop_training_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_StopTrainingRequest_model_id
{
public:
  explicit Init_StopTrainingRequest_model_id(::live_analysis_interfaces::msg::StopTrainingRequest & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::StopTrainingRequest model_id(::live_analysis_interfaces::msg::StopTrainingRequest::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::StopTrainingRequest msg_;
};

class Init_StopTrainingRequest_user_id
{
public:
  explicit Init_StopTrainingRequest_user_id(::live_analysis_interfaces::msg::StopTrainingRequest & msg)
  : msg_(msg)
  {}
  Init_StopTrainingRequest_model_id user_id(::live_analysis_interfaces::msg::StopTrainingRequest::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_StopTrainingRequest_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::StopTrainingRequest msg_;
};

class Init_StopTrainingRequest_header
{
public:
  Init_StopTrainingRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopTrainingRequest_user_id header(::live_analysis_interfaces::msg::StopTrainingRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StopTrainingRequest_user_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::StopTrainingRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::StopTrainingRequest>()
{
  return live_analysis_interfaces::msg::builder::Init_StopTrainingRequest_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TRAINING_REQUEST__BUILDER_HPP_
