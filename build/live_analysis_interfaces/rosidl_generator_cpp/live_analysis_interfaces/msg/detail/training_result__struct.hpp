// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TrainingResult.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__live_analysis_interfaces__msg__TrainingResult __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TrainingResult __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrainingResult_
{
  using Type = TrainingResult_<ContainerAllocator>;

  explicit TrainingResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->algorithm_id = "";
      this->model_id = "";
      this->total_time = 0.0f;
      this->total_patches = 0l;
      this->loss = 0.0f;
      this->duration = 0.0f;
      this->epochs = 0l;
      this->current_epoch = 0l;
      this->msg_txt = "";
      this->training_completed = false;
      this->stopped = false;
    }
  }

  explicit TrainingResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    user_id(_alloc),
    algorithm_id(_alloc),
    model_id(_alloc),
    msg_txt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->algorithm_id = "";
      this->model_id = "";
      this->total_time = 0.0f;
      this->total_patches = 0l;
      this->loss = 0.0f;
      this->duration = 0.0f;
      this->epochs = 0l;
      this->current_epoch = 0l;
      this->msg_txt = "";
      this->training_completed = false;
      this->stopped = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _user_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_id_type user_id;
  using _algorithm_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _algorithm_id_type algorithm_id;
  using _model_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_id_type model_id;
  using _total_time_type =
    float;
  _total_time_type total_time;
  using _total_patches_type =
    int32_t;
  _total_patches_type total_patches;
  using _loss_type =
    float;
  _loss_type loss;
  using _duration_type =
    float;
  _duration_type duration;
  using _epochs_type =
    int32_t;
  _epochs_type epochs;
  using _current_epoch_type =
    int32_t;
  _current_epoch_type current_epoch;
  using _msg_txt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_txt_type msg_txt;
  using _training_completed_type =
    bool;
  _training_completed_type training_completed;
  using _stopped_type =
    bool;
  _stopped_type stopped;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__user_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_id = _arg;
    return *this;
  }
  Type & set__algorithm_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->algorithm_id = _arg;
    return *this;
  }
  Type & set__model_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_id = _arg;
    return *this;
  }
  Type & set__total_time(
    const float & _arg)
  {
    this->total_time = _arg;
    return *this;
  }
  Type & set__total_patches(
    const int32_t & _arg)
  {
    this->total_patches = _arg;
    return *this;
  }
  Type & set__loss(
    const float & _arg)
  {
    this->loss = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__epochs(
    const int32_t & _arg)
  {
    this->epochs = _arg;
    return *this;
  }
  Type & set__current_epoch(
    const int32_t & _arg)
  {
    this->current_epoch = _arg;
    return *this;
  }
  Type & set__msg_txt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg_txt = _arg;
    return *this;
  }
  Type & set__training_completed(
    const bool & _arg)
  {
    this->training_completed = _arg;
    return *this;
  }
  Type & set__stopped(
    const bool & _arg)
  {
    this->stopped = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainingResult
    std::shared_ptr<live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainingResult
    std::shared_ptr<live_analysis_interfaces::msg::TrainingResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainingResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->user_id != other.user_id) {
      return false;
    }
    if (this->algorithm_id != other.algorithm_id) {
      return false;
    }
    if (this->model_id != other.model_id) {
      return false;
    }
    if (this->total_time != other.total_time) {
      return false;
    }
    if (this->total_patches != other.total_patches) {
      return false;
    }
    if (this->loss != other.loss) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->epochs != other.epochs) {
      return false;
    }
    if (this->current_epoch != other.current_epoch) {
      return false;
    }
    if (this->msg_txt != other.msg_txt) {
      return false;
    }
    if (this->training_completed != other.training_completed) {
      return false;
    }
    if (this->stopped != other.stopped) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainingResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainingResult_

// alias to use template instance with default allocator
using TrainingResult =
  live_analysis_interfaces::msg::TrainingResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAINING_RESULT__STRUCT_HPP_
