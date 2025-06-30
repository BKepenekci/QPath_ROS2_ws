// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TrainAlgorithmMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/train_algorithm_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/train_algorithm_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrainAlgorithmMsg_files_completed
{
public:
  explicit Init_TrainAlgorithmMsg_files_completed(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg files_completed(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_files_completed_type arg)
  {
    msg_.files_completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_model_path
{
public:
  explicit Init_TrainAlgorithmMsg_model_path(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_files_completed model_path(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_model_path_type arg)
  {
    msg_.model_path = std::move(arg);
    return Init_TrainAlgorithmMsg_files_completed(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_gpu
{
public:
  explicit Init_TrainAlgorithmMsg_gpu(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_model_path gpu(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_gpu_type arg)
  {
    msg_.gpu = std::move(arg);
    return Init_TrainAlgorithmMsg_model_path(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_algorithm_name
{
public:
  explicit Init_TrainAlgorithmMsg_algorithm_name(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_gpu algorithm_name(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_algorithm_name_type arg)
  {
    msg_.algorithm_name = std::move(arg);
    return Init_TrainAlgorithmMsg_gpu(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_algorithm_id
{
public:
  explicit Init_TrainAlgorithmMsg_algorithm_id(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_algorithm_name algorithm_id(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_algorithm_id_type arg)
  {
    msg_.algorithm_id = std::move(arg);
    return Init_TrainAlgorithmMsg_algorithm_name(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_batchsize
{
public:
  explicit Init_TrainAlgorithmMsg_batchsize(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_algorithm_id batchsize(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_batchsize_type arg)
  {
    msg_.batchsize = std::move(arg);
    return Init_TrainAlgorithmMsg_algorithm_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_epoc
{
public:
  explicit Init_TrainAlgorithmMsg_epoc(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_batchsize epoc(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_epoc_type arg)
  {
    msg_.epoc = std::move(arg);
    return Init_TrainAlgorithmMsg_batchsize(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_eval_set_annotations
{
public:
  explicit Init_TrainAlgorithmMsg_eval_set_annotations(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_epoc eval_set_annotations(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_eval_set_annotations_type arg)
  {
    msg_.eval_set_annotations = std::move(arg);
    return Init_TrainAlgorithmMsg_epoc(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_train_set_annotations
{
public:
  explicit Init_TrainAlgorithmMsg_train_set_annotations(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_eval_set_annotations train_set_annotations(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_train_set_annotations_type arg)
  {
    msg_.train_set_annotations = std::move(arg);
    return Init_TrainAlgorithmMsg_eval_set_annotations(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_eval_images
{
public:
  explicit Init_TrainAlgorithmMsg_eval_images(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_train_set_annotations eval_images(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_eval_images_type arg)
  {
    msg_.eval_images = std::move(arg);
    return Init_TrainAlgorithmMsg_train_set_annotations(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_train_images
{
public:
  explicit Init_TrainAlgorithmMsg_train_images(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_eval_images train_images(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_train_images_type arg)
  {
    msg_.train_images = std::move(arg);
    return Init_TrainAlgorithmMsg_eval_images(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_model_id
{
public:
  explicit Init_TrainAlgorithmMsg_model_id(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_train_images model_id(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_TrainAlgorithmMsg_train_images(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_model_name
{
public:
  explicit Init_TrainAlgorithmMsg_model_name(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_model_id model_name(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_TrainAlgorithmMsg_model_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_id
{
public:
  explicit Init_TrainAlgorithmMsg_id(::live_analysis_interfaces::msg::TrainAlgorithmMsg & msg)
  : msg_(msg)
  {}
  Init_TrainAlgorithmMsg_model_name id(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrainAlgorithmMsg_model_name(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

class Init_TrainAlgorithmMsg_header
{
public:
  Init_TrainAlgorithmMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrainAlgorithmMsg_id header(::live_analysis_interfaces::msg::TrainAlgorithmMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrainAlgorithmMsg_id(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TrainAlgorithmMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TrainAlgorithmMsg>()
{
  return live_analysis_interfaces::msg::builder::Init_TrainAlgorithmMsg_header();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__BUILDER_HPP_
