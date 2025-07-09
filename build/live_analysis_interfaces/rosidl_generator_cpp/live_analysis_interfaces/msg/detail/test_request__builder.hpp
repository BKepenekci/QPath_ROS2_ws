// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TestRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/test_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TestRequest_image_paths
{
public:
  explicit Init_TestRequest_image_paths(::live_analysis_interfaces::msg::TestRequest & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TestRequest image_paths(::live_analysis_interfaces::msg::TestRequest::_image_paths_type arg)
  {
    msg_.image_paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequest msg_;
};

class Init_TestRequest_confidance_th
{
public:
  explicit Init_TestRequest_confidance_th(::live_analysis_interfaces::msg::TestRequest & msg)
  : msg_(msg)
  {}
  Init_TestRequest_image_paths confidance_th(::live_analysis_interfaces::msg::TestRequest::_confidance_th_type arg)
  {
    msg_.confidance_th = std::move(arg);
    return Init_TestRequest_image_paths(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequest msg_;
};

class Init_TestRequest_area_th
{
public:
  explicit Init_TestRequest_area_th(::live_analysis_interfaces::msg::TestRequest & msg)
  : msg_(msg)
  {}
  Init_TestRequest_confidance_th area_th(::live_analysis_interfaces::msg::TestRequest::_area_th_type arg)
  {
    msg_.area_th = std::move(arg);
    return Init_TestRequest_confidance_th(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequest msg_;
};

class Init_TestRequest_gpu
{
public:
  explicit Init_TestRequest_gpu(::live_analysis_interfaces::msg::TestRequest & msg)
  : msg_(msg)
  {}
  Init_TestRequest_area_th gpu(::live_analysis_interfaces::msg::TestRequest::_gpu_type arg)
  {
    msg_.gpu = std::move(arg);
    return Init_TestRequest_area_th(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequest msg_;
};

class Init_TestRequest_with_bounding_box
{
public:
  explicit Init_TestRequest_with_bounding_box(::live_analysis_interfaces::msg::TestRequest & msg)
  : msg_(msg)
  {}
  Init_TestRequest_gpu with_bounding_box(::live_analysis_interfaces::msg::TestRequest::_with_bounding_box_type arg)
  {
    msg_.with_bounding_box = std::move(arg);
    return Init_TestRequest_gpu(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequest msg_;
};

class Init_TestRequest_model_id
{
public:
  explicit Init_TestRequest_model_id(::live_analysis_interfaces::msg::TestRequest & msg)
  : msg_(msg)
  {}
  Init_TestRequest_with_bounding_box model_id(::live_analysis_interfaces::msg::TestRequest::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_TestRequest_with_bounding_box(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequest msg_;
};

class Init_TestRequest_user_id
{
public:
  explicit Init_TestRequest_user_id(::live_analysis_interfaces::msg::TestRequest & msg)
  : msg_(msg)
  {}
  Init_TestRequest_model_id user_id(::live_analysis_interfaces::msg::TestRequest::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_TestRequest_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequest msg_;
};

class Init_TestRequest_id
{
public:
  explicit Init_TestRequest_id(::live_analysis_interfaces::msg::TestRequest & msg)
  : msg_(msg)
  {}
  Init_TestRequest_user_id id(::live_analysis_interfaces::msg::TestRequest::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TestRequest_user_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequest msg_;
};

class Init_TestRequest_header
{
public:
  Init_TestRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestRequest_id header(::live_analysis_interfaces::msg::TestRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TestRequest_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TestRequest>()
{
  return live_analysis_interfaces::msg::builder::Init_TestRequest_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST__BUILDER_HPP_
