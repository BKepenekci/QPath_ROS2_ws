// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live_analysis_interfaces:msg/TestDone.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_DONE__BUILDER_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_DONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live_analysis_interfaces/msg/detail/test_done__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live_analysis_interfaces
{

namespace msg
{

namespace builder
{

class Init_TestDone_user_id
{
public:
  Init_TestDone_user_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::live_analysis_interfaces::msg::TestDone user_id(::live_analysis_interfaces::msg::TestDone::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live_analysis_interfaces::msg::TestDone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::live_analysis_interfaces::msg::TestDone>()
{
  return live_analysis_interfaces::msg::builder::Init_TestDone_user_id();
}

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_DONE__BUILDER_HPP_
