// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/DoubleINT.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__DOUBLE_INT__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__DOUBLE_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/double_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_DoubleINT_y
{
public:
  explicit Init_DoubleINT_y(::my_robot_interfaces::msg::DoubleINT & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::DoubleINT y(::my_robot_interfaces::msg::DoubleINT::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::DoubleINT msg_;
};

class Init_DoubleINT_x
{
public:
  Init_DoubleINT_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoubleINT_y x(::my_robot_interfaces::msg::DoubleINT::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DoubleINT_y(msg_);
  }

private:
  ::my_robot_interfaces::msg::DoubleINT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::DoubleINT>()
{
  return my_robot_interfaces::msg::builder::Init_DoubleINT_x();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__DOUBLE_INT__BUILDER_HPP_
