// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TrainRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__STRUCT_HPP_

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
# define DEPRECATED__live_analysis_interfaces__msg__TrainRequest __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TrainRequest __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrainRequest_
{
  using Type = TrainRequest_<ContainerAllocator>;

  explicit TrainRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->algorithm_id = "";
      this->model_id = "";
      this->epochs = 0l;
      this->min_accuracy = 0.0f;
      this->batch_size = 0l;
      this->gpu = "";
      this->sample_count = 0l;
      this->use_detection = false;
      this->use_label = false;
      this->data_class = "";
    }
  }

  explicit TrainRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    user_id(_alloc),
    algorithm_id(_alloc),
    model_id(_alloc),
    gpu(_alloc),
    data_class(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->algorithm_id = "";
      this->model_id = "";
      this->epochs = 0l;
      this->min_accuracy = 0.0f;
      this->batch_size = 0l;
      this->gpu = "";
      this->sample_count = 0l;
      this->use_detection = false;
      this->use_label = false;
      this->data_class = "";
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
  using _epochs_type =
    int32_t;
  _epochs_type epochs;
  using _min_accuracy_type =
    float;
  _min_accuracy_type min_accuracy;
  using _batch_size_type =
    int32_t;
  _batch_size_type batch_size;
  using _gpu_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gpu_type gpu;
  using _sample_count_type =
    int32_t;
  _sample_count_type sample_count;
  using _use_detection_type =
    bool;
  _use_detection_type use_detection;
  using _use_label_type =
    bool;
  _use_label_type use_label;
  using _data_class_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_class_type data_class;

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
  Type & set__epochs(
    const int32_t & _arg)
  {
    this->epochs = _arg;
    return *this;
  }
  Type & set__min_accuracy(
    const float & _arg)
  {
    this->min_accuracy = _arg;
    return *this;
  }
  Type & set__batch_size(
    const int32_t & _arg)
  {
    this->batch_size = _arg;
    return *this;
  }
  Type & set__gpu(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gpu = _arg;
    return *this;
  }
  Type & set__sample_count(
    const int32_t & _arg)
  {
    this->sample_count = _arg;
    return *this;
  }
  Type & set__use_detection(
    const bool & _arg)
  {
    this->use_detection = _arg;
    return *this;
  }
  Type & set__use_label(
    const bool & _arg)
  {
    this->use_label = _arg;
    return *this;
  }
  Type & set__data_class(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data_class = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainRequest
    std::shared_ptr<live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainRequest
    std::shared_ptr<live_analysis_interfaces::msg::TrainRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainRequest_ & other) const
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
    if (this->epochs != other.epochs) {
      return false;
    }
    if (this->min_accuracy != other.min_accuracy) {
      return false;
    }
    if (this->batch_size != other.batch_size) {
      return false;
    }
    if (this->gpu != other.gpu) {
      return false;
    }
    if (this->sample_count != other.sample_count) {
      return false;
    }
    if (this->use_detection != other.use_detection) {
      return false;
    }
    if (this->use_label != other.use_label) {
      return false;
    }
    if (this->data_class != other.data_class) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainRequest_

// alias to use template instance with default allocator
using TrainRequest =
  live_analysis_interfaces::msg::TrainRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__STRUCT_HPP_
