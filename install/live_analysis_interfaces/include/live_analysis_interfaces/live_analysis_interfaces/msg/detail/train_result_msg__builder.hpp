// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TrainResultMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/train_result_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/train_result_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrainResultMsg_current_epoc
{
public:
  explicit Init_TrainResultMsg_current_epoc(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TrainResultMsg current_epoc(::live_analysis_interfaces::msg::TrainResultMsg::_current_epoc_type arg)
  {
    msg_.current_epoc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_epoc
{
public:
  explicit Init_TrainResultMsg_epoc(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_current_epoc epoc(::live_analysis_interfaces::msg::TrainResultMsg::_epoc_type arg)
  {
    msg_.epoc = std::move(arg);
    return Init_TrainResultMsg_current_epoc(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_training_completed
{
public:
  explicit Init_TrainResultMsg_training_completed(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_epoc training_completed(::live_analysis_interfaces::msg::TrainResultMsg::_training_completed_type arg)
  {
    msg_.training_completed = std::move(arg);
    return Init_TrainResultMsg_epoc(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_model_path
{
public:
  explicit Init_TrainResultMsg_model_path(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_training_completed model_path(::live_analysis_interfaces::msg::TrainResultMsg::_model_path_type arg)
  {
    msg_.model_path = std::move(arg);
    return Init_TrainResultMsg_training_completed(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_duration
{
public:
  explicit Init_TrainResultMsg_duration(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_model_path duration(::live_analysis_interfaces::msg::TrainResultMsg::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_TrainResultMsg_model_path(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_m_ap
{
public:
  explicit Init_TrainResultMsg_m_ap(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_duration m_ap(::live_analysis_interfaces::msg::TrainResultMsg::_m_ap_type arg)
  {
    msg_.m_ap = std::move(arg);
    return Init_TrainResultMsg_duration(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_total_eval_imgs
{
public:
  explicit Init_TrainResultMsg_total_eval_imgs(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_m_ap total_eval_imgs(::live_analysis_interfaces::msg::TrainResultMsg::_total_eval_imgs_type arg)
  {
    msg_.total_eval_imgs = std::move(arg);
    return Init_TrainResultMsg_m_ap(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_total_train_imgs
{
public:
  explicit Init_TrainResultMsg_total_train_imgs(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_total_eval_imgs total_train_imgs(::live_analysis_interfaces::msg::TrainResultMsg::_total_train_imgs_type arg)
  {
    msg_.total_train_imgs = std::move(arg);
    return Init_TrainResultMsg_total_eval_imgs(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_total_time
{
public:
  explicit Init_TrainResultMsg_total_time(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_total_train_imgs total_time(::live_analysis_interfaces::msg::TrainResultMsg::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return Init_TrainResultMsg_total_train_imgs(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_model_id
{
public:
  explicit Init_TrainResultMsg_model_id(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_total_time model_id(::live_analysis_interfaces::msg::TrainResultMsg::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_TrainResultMsg_total_time(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_model_name
{
public:
  explicit Init_TrainResultMsg_model_name(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_model_id model_name(::live_analysis_interfaces::msg::TrainResultMsg::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_TrainResultMsg_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_id
{
public:
  explicit Init_TrainResultMsg_id(::live_analysis_interfaces::msg::TrainResultMsg & msg)
  : msg_(msg)
  {}
  Init_TrainResultMsg_model_name id(::live_analysis_interfaces::msg::TrainResultMsg::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrainResultMsg_model_name(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

class Init_TrainResultMsg_header
{
public:
  Init_TrainResultMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrainResultMsg_id header(::live_analysis_interfaces::msg::TrainResultMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrainResultMsg_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainResultMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TrainResultMsg>()
{
  return live_analysis_interfaces::msg::builder::Init_TrainResultMsg_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__BUILDER_HPP_
