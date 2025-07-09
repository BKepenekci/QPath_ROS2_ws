// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TestRequestClient.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/test_request_client__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TestRequestClient_image_paths
{
public:
  explicit Init_TestRequestClient_image_paths(::live_analysis_interfaces::msg::TestRequestClient & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TestRequestClient image_paths(::live_analysis_interfaces::msg::TestRequestClient::_image_paths_type arg)
  {
    msg_.image_paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

class Init_TestRequestClient_images
{
public:
  explicit Init_TestRequestClient_images(::live_analysis_interfaces::msg::TestRequestClient & msg)
  : msg_(msg)
  {}
  Init_TestRequestClient_image_paths images(::live_analysis_interfaces::msg::TestRequestClient::_images_type arg)
  {
    msg_.images = std::move(arg);
    return Init_TestRequestClient_image_paths(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

class Init_TestRequestClient_confidance_th
{
public:
  explicit Init_TestRequestClient_confidance_th(::live_analysis_interfaces::msg::TestRequestClient & msg)
  : msg_(msg)
  {}
  Init_TestRequestClient_images confidance_th(::live_analysis_interfaces::msg::TestRequestClient::_confidance_th_type arg)
  {
    msg_.confidance_th = std::move(arg);
    return Init_TestRequestClient_images(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

class Init_TestRequestClient_area_th
{
public:
  explicit Init_TestRequestClient_area_th(::live_analysis_interfaces::msg::TestRequestClient & msg)
  : msg_(msg)
  {}
  Init_TestRequestClient_confidance_th area_th(::live_analysis_interfaces::msg::TestRequestClient::_area_th_type arg)
  {
    msg_.area_th = std::move(arg);
    return Init_TestRequestClient_confidance_th(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

class Init_TestRequestClient_with_bounding_box
{
public:
  explicit Init_TestRequestClient_with_bounding_box(::live_analysis_interfaces::msg::TestRequestClient & msg)
  : msg_(msg)
  {}
  Init_TestRequestClient_area_th with_bounding_box(::live_analysis_interfaces::msg::TestRequestClient::_with_bounding_box_type arg)
  {
    msg_.with_bounding_box = std::move(arg);
    return Init_TestRequestClient_area_th(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

class Init_TestRequestClient_yolo_path
{
public:
  explicit Init_TestRequestClient_yolo_path(::live_analysis_interfaces::msg::TestRequestClient & msg)
  : msg_(msg)
  {}
  Init_TestRequestClient_with_bounding_box yolo_path(::live_analysis_interfaces::msg::TestRequestClient::_yolo_path_type arg)
  {
    msg_.yolo_path = std::move(arg);
    return Init_TestRequestClient_with_bounding_box(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

class Init_TestRequestClient_model_path
{
public:
  explicit Init_TestRequestClient_model_path(::live_analysis_interfaces::msg::TestRequestClient & msg)
  : msg_(msg)
  {}
  Init_TestRequestClient_yolo_path model_path(::live_analysis_interfaces::msg::TestRequestClient::_model_path_type arg)
  {
    msg_.model_path = std::move(arg);
    return Init_TestRequestClient_yolo_path(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

class Init_TestRequestClient_model_id
{
public:
  explicit Init_TestRequestClient_model_id(::live_analysis_interfaces::msg::TestRequestClient & msg)
  : msg_(msg)
  {}
  Init_TestRequestClient_model_path model_id(::live_analysis_interfaces::msg::TestRequestClient::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_TestRequestClient_model_path(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

class Init_TestRequestClient_id
{
public:
  explicit Init_TestRequestClient_id(::live_analysis_interfaces::msg::TestRequestClient & msg)
  : msg_(msg)
  {}
  Init_TestRequestClient_model_id id(::live_analysis_interfaces::msg::TestRequestClient::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TestRequestClient_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

class Init_TestRequestClient_header
{
public:
  Init_TestRequestClient_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestRequestClient_id header(::live_analysis_interfaces::msg::TestRequestClient::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TestRequestClient_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestRequestClient msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TestRequestClient>()
{
  return live_analysis_interfaces::msg::builder::Init_TestRequestClient_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__BUILDER_HPP_
