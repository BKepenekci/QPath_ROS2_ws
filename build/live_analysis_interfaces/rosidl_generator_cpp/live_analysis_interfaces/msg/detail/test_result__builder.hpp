// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TestResult.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/test_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TestResult_percent_done
{
public:
  explicit Init_TestResult_percent_done(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TestResult percent_done(::live_analysis_interfaces::msg::TestResult::_percent_done_type arg)
  {
    msg_.percent_done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_image_path
{
public:
  explicit Init_TestResult_image_path(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  Init_TestResult_percent_done image_path(::live_analysis_interfaces::msg::TestResult::_image_path_type arg)
  {
    msg_.image_path = std::move(arg);
    return Init_TestResult_percent_done(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_ok_list
{
public:
  explicit Init_TestResult_ok_list(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  Init_TestResult_image_path ok_list(::live_analysis_interfaces::msg::TestResult::_ok_list_type arg)
  {
    msg_.ok_list = std::move(arg);
    return Init_TestResult_image_path(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_confidences
{
public:
  explicit Init_TestResult_confidences(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  Init_TestResult_ok_list confidences(::live_analysis_interfaces::msg::TestResult::_confidences_type arg)
  {
    msg_.confidences = std::move(arg);
    return Init_TestResult_ok_list(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_bboxes
{
public:
  explicit Init_TestResult_bboxes(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  Init_TestResult_confidences bboxes(::live_analysis_interfaces::msg::TestResult::_bboxes_type arg)
  {
    msg_.bboxes = std::move(arg);
    return Init_TestResult_confidences(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_mask
{
public:
  explicit Init_TestResult_mask(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  Init_TestResult_bboxes mask(::live_analysis_interfaces::msg::TestResult::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return Init_TestResult_bboxes(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_heatmap
{
public:
  explicit Init_TestResult_heatmap(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  Init_TestResult_mask heatmap(::live_analysis_interfaces::msg::TestResult::_heatmap_type arg)
  {
    msg_.heatmap = std::move(arg);
    return Init_TestResult_mask(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_ok
{
public:
  explicit Init_TestResult_ok(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  Init_TestResult_heatmap ok(::live_analysis_interfaces::msg::TestResult::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_TestResult_heatmap(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_model_id
{
public:
  explicit Init_TestResult_model_id(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  Init_TestResult_ok model_id(::live_analysis_interfaces::msg::TestResult::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_TestResult_ok(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_user_id
{
public:
  explicit Init_TestResult_user_id(::live_analysis_interfaces::msg::TestResult & msg)
  : msg_(msg)
  {}
  Init_TestResult_model_id user_id(::live_analysis_interfaces::msg::TestResult::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_TestResult_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

class Init_TestResult_header
{
public:
  Init_TestResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestResult_user_id header(::live_analysis_interfaces::msg::TestResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TestResult_user_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TestResult>()
{
  return live_analysis_interfaces::msg::builder::Init_TestResult_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__BUILDER_HPP_
