// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/StopTestingRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TESTING_REQUEST__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TESTING_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/stop_testing_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_StopTestingRequest_test_id
{
public:
  explicit Init_StopTestingRequest_test_id(::live_analysis_interfaces::msg::StopTestingRequest & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::StopTestingRequest test_id(::live_analysis_interfaces::msg::StopTestingRequest::_test_id_type arg)
  {
    msg_.test_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::StopTestingRequest msg_;
};

class Init_StopTestingRequest_model_id
{
public:
  explicit Init_StopTestingRequest_model_id(::live_analysis_interfaces::msg::StopTestingRequest & msg)
  : msg_(msg)
  {}
  Init_StopTestingRequest_test_id model_id(::live_analysis_interfaces::msg::StopTestingRequest::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_StopTestingRequest_test_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::StopTestingRequest msg_;
};

class Init_StopTestingRequest_user_id
{
public:
  explicit Init_StopTestingRequest_user_id(::live_analysis_interfaces::msg::StopTestingRequest & msg)
  : msg_(msg)
  {}
  Init_StopTestingRequest_model_id user_id(::live_analysis_interfaces::msg::StopTestingRequest::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_StopTestingRequest_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::StopTestingRequest msg_;
};

class Init_StopTestingRequest_header
{
public:
  Init_StopTestingRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopTestingRequest_user_id header(::live_analysis_interfaces::msg::StopTestingRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StopTestingRequest_user_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::StopTestingRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::StopTestingRequest>()
{
  return live_analysis_interfaces::msg::builder::Init_StopTestingRequest_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TESTING_REQUEST__BUILDER_HPP_
