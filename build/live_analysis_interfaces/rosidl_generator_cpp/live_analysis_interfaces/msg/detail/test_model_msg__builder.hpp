// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TestModelMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/test_model_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/test_model_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TestModelMsg_images
{
public:
  explicit Init_TestModelMsg_images(::live_analysis_interfaces::msg::TestModelMsg & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TestModelMsg images(::live_analysis_interfaces::msg::TestModelMsg::_images_type arg)
  {
    msg_.images = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestModelMsg msg_;
};

class Init_TestModelMsg_confidance_th
{
public:
  explicit Init_TestModelMsg_confidance_th(::live_analysis_interfaces::msg::TestModelMsg & msg)
  : msg_(msg)
  {}
  Init_TestModelMsg_images confidance_th(::live_analysis_interfaces::msg::TestModelMsg::_confidance_th_type arg)
  {
    msg_.confidance_th = std::move(arg);
    return Init_TestModelMsg_images(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestModelMsg msg_;
};

class Init_TestModelMsg_area_th
{
public:
  explicit Init_TestModelMsg_area_th(::live_analysis_interfaces::msg::TestModelMsg & msg)
  : msg_(msg)
  {}
  Init_TestModelMsg_confidance_th area_th(::live_analysis_interfaces::msg::TestModelMsg::_area_th_type arg)
  {
    msg_.area_th = std::move(arg);
    return Init_TestModelMsg_confidance_th(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestModelMsg msg_;
};

class Init_TestModelMsg_gpu
{
public:
  explicit Init_TestModelMsg_gpu(::live_analysis_interfaces::msg::TestModelMsg & msg)
  : msg_(msg)
  {}
  Init_TestModelMsg_area_th gpu(::live_analysis_interfaces::msg::TestModelMsg::_gpu_type arg)
  {
    msg_.gpu = std::move(arg);
    return Init_TestModelMsg_area_th(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestModelMsg msg_;
};

class Init_TestModelMsg_with_bounding_box
{
public:
  explicit Init_TestModelMsg_with_bounding_box(::live_analysis_interfaces::msg::TestModelMsg & msg)
  : msg_(msg)
  {}
  Init_TestModelMsg_gpu with_bounding_box(::live_analysis_interfaces::msg::TestModelMsg::_with_bounding_box_type arg)
  {
    msg_.with_bounding_box = std::move(arg);
    return Init_TestModelMsg_gpu(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestModelMsg msg_;
};

class Init_TestModelMsg_model_name
{
public:
  explicit Init_TestModelMsg_model_name(::live_analysis_interfaces::msg::TestModelMsg & msg)
  : msg_(msg)
  {}
  Init_TestModelMsg_with_bounding_box model_name(::live_analysis_interfaces::msg::TestModelMsg::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_TestModelMsg_with_bounding_box(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestModelMsg msg_;
};

class Init_TestModelMsg_model_id
{
public:
  explicit Init_TestModelMsg_model_id(::live_analysis_interfaces::msg::TestModelMsg & msg)
  : msg_(msg)
  {}
  Init_TestModelMsg_model_name model_id(::live_analysis_interfaces::msg::TestModelMsg::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_TestModelMsg_model_name(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestModelMsg msg_;
};

class Init_TestModelMsg_id
{
public:
  explicit Init_TestModelMsg_id(::live_analysis_interfaces::msg::TestModelMsg & msg)
  : msg_(msg)
  {}
  Init_TestModelMsg_model_id id(::live_analysis_interfaces::msg::TestModelMsg::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TestModelMsg_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestModelMsg msg_;
};

class Init_TestModelMsg_header
{
public:
  Init_TestModelMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestModelMsg_id header(::live_analysis_interfaces::msg::TestModelMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TestModelMsg_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestModelMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TestModelMsg>()
{
  return live_analysis_interfaces::msg::builder::Init_TestModelMsg_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_MODEL_MSG__BUILDER_HPP_
