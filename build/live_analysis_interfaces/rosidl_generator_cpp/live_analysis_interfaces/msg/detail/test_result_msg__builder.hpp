// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TestResultMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/test_result_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/test_result_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TestResultMsg_total_time
{
public:
  explicit Init_TestResultMsg_total_time(::live_analysis_interfaces::msg::TestResultMsg & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TestResultMsg total_time(::live_analysis_interfaces::msg::TestResultMsg::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResultMsg msg_;
};

class Init_TestResultMsg_result_imgs
{
public:
  explicit Init_TestResultMsg_result_imgs(::live_analysis_interfaces::msg::TestResultMsg & msg)
  : msg_(msg)
  {}
  Init_TestResultMsg_total_time result_imgs(::live_analysis_interfaces::msg::TestResultMsg::_result_imgs_type arg)
  {
    msg_.result_imgs = std::move(arg);
    return Init_TestResultMsg_total_time(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResultMsg msg_;
};

class Init_TestResultMsg_heat_maps
{
public:
  explicit Init_TestResultMsg_heat_maps(::live_analysis_interfaces::msg::TestResultMsg & msg)
  : msg_(msg)
  {}
  Init_TestResultMsg_result_imgs heat_maps(::live_analysis_interfaces::msg::TestResultMsg::_heat_maps_type arg)
  {
    msg_.heat_maps = std::move(arg);
    return Init_TestResultMsg_result_imgs(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResultMsg msg_;
};

class Init_TestResultMsg_img_result_confidance
{
public:
  explicit Init_TestResultMsg_img_result_confidance(::live_analysis_interfaces::msg::TestResultMsg & msg)
  : msg_(msg)
  {}
  Init_TestResultMsg_heat_maps img_result_confidance(::live_analysis_interfaces::msg::TestResultMsg::_img_result_confidance_type arg)
  {
    msg_.img_result_confidance = std::move(arg);
    return Init_TestResultMsg_heat_maps(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResultMsg msg_;
};

class Init_TestResultMsg_img_result_strs
{
public:
  explicit Init_TestResultMsg_img_result_strs(::live_analysis_interfaces::msg::TestResultMsg & msg)
  : msg_(msg)
  {}
  Init_TestResultMsg_img_result_confidance img_result_strs(::live_analysis_interfaces::msg::TestResultMsg::_img_result_strs_type arg)
  {
    msg_.img_result_strs = std::move(arg);
    return Init_TestResultMsg_img_result_confidance(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResultMsg msg_;
};

class Init_TestResultMsg_total_imgs
{
public:
  explicit Init_TestResultMsg_total_imgs(::live_analysis_interfaces::msg::TestResultMsg & msg)
  : msg_(msg)
  {}
  Init_TestResultMsg_img_result_strs total_imgs(::live_analysis_interfaces::msg::TestResultMsg::_total_imgs_type arg)
  {
    msg_.total_imgs = std::move(arg);
    return Init_TestResultMsg_img_result_strs(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResultMsg msg_;
};

class Init_TestResultMsg_id
{
public:
  explicit Init_TestResultMsg_id(::live_analysis_interfaces::msg::TestResultMsg & msg)
  : msg_(msg)
  {}
  Init_TestResultMsg_total_imgs id(::live_analysis_interfaces::msg::TestResultMsg::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TestResultMsg_total_imgs(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResultMsg msg_;
};

class Init_TestResultMsg_header
{
public:
  Init_TestResultMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestResultMsg_id header(::live_analysis_interfaces::msg::TestResultMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TestResultMsg_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResultMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TestResultMsg>()
{
  return live_analysis_interfaces::msg::builder::Init_TestResultMsg_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__BUILDER_HPP_
