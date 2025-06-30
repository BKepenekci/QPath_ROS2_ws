// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TrainResultMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/train_result_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__STRUCT_HPP_

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
# define DEPRECATED__live_analysis_interfaces__msg__TrainResultMsg __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TrainResultMsg __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrainResultMsg_
{
  using Type = TrainResultMsg_<ContainerAllocator>;

  explicit TrainResultMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->model_name = "";
      this->model_id = "";
      this->total_time = 0.0f;
      this->total_train_imgs = 0l;
      this->total_eval_imgs = 0l;
      this->m_ap = 0.0f;
      this->duration = 0.0f;
      this->model_path = "";
      this->training_completed = false;
      this->epoc = 0l;
      this->current_epoc = 0l;
    }
  }

  explicit TrainResultMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc),
    model_name(_alloc),
    model_id(_alloc),
    model_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->model_name = "";
      this->model_id = "";
      this->total_time = 0.0f;
      this->total_train_imgs = 0l;
      this->total_eval_imgs = 0l;
      this->m_ap = 0.0f;
      this->duration = 0.0f;
      this->model_path = "";
      this->training_completed = false;
      this->epoc = 0l;
      this->current_epoc = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_name_type model_name;
  using _model_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_id_type model_id;
  using _total_time_type =
    float;
  _total_time_type total_time;
  using _total_train_imgs_type =
    int32_t;
  _total_train_imgs_type total_train_imgs;
  using _total_eval_imgs_type =
    int32_t;
  _total_eval_imgs_type total_eval_imgs;
  using _m_ap_type =
    float;
  _m_ap_type m_ap;
  using _duration_type =
    float;
  _duration_type duration;
  using _model_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_path_type model_path;
  using _training_completed_type =
    bool;
  _training_completed_type training_completed;
  using _epoc_type =
    int32_t;
  _epoc_type epoc;
  using _current_epoc_type =
    int32_t;
  _current_epoc_type current_epoc;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_name = _arg;
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
  Type & set__total_train_imgs(
    const int32_t & _arg)
  {
    this->total_train_imgs = _arg;
    return *this;
  }
  Type & set__total_eval_imgs(
    const int32_t & _arg)
  {
    this->total_eval_imgs = _arg;
    return *this;
  }
  Type & set__m_ap(
    const float & _arg)
  {
    this->m_ap = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__model_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_path = _arg;
    return *this;
  }
  Type & set__training_completed(
    const bool & _arg)
  {
    this->training_completed = _arg;
    return *this;
  }
  Type & set__epoc(
    const int32_t & _arg)
  {
    this->epoc = _arg;
    return *this;
  }
  Type & set__current_epoc(
    const int32_t & _arg)
  {
    this->current_epoc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainResultMsg
    std::shared_ptr<live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainResultMsg
    std::shared_ptr<live_analysis_interfaces::msg::TrainResultMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainResultMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->model_id != other.model_id) {
      return false;
    }
    if (this->total_time != other.total_time) {
      return false;
    }
    if (this->total_train_imgs != other.total_train_imgs) {
      return false;
    }
    if (this->total_eval_imgs != other.total_eval_imgs) {
      return false;
    }
    if (this->m_ap != other.m_ap) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->model_path != other.model_path) {
      return false;
    }
    if (this->training_completed != other.training_completed) {
      return false;
    }
    if (this->epoc != other.epoc) {
      return false;
    }
    if (this->current_epoc != other.current_epoc) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainResultMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainResultMsg_

// alias to use template instance with default allocator
using TrainResultMsg =
  live_analysis_interfaces::msg::TrainResultMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_RESULT_MSG__STRUCT_HPP_
