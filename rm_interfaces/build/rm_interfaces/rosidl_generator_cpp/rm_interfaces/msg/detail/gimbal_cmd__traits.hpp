// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/GimbalCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/msg/detail/gimbal_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
// Member 'velocity'
#include "rm_interfaces/msg/detail/gimbal__traits.hpp"

namespace rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GimbalCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw_type
  {
    out << "yaw_type: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_type, out);
    out << ", ";
  }

  // member: pitch_type
  {
    out << "pitch_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_type, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GimbalCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_type: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_type, out);
    out << "\n";
  }

  // member: pitch_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_type, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GimbalCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::msg::GimbalCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::msg::GimbalCmd & msg)
{
  return rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::msg::GimbalCmd>()
{
  return "rm_interfaces::msg::GimbalCmd";
}

template<>
inline const char * name<rm_interfaces::msg::GimbalCmd>()
{
  return "rm_interfaces/msg/GimbalCmd";
}

template<>
struct has_fixed_size<rm_interfaces::msg::GimbalCmd>
  : std::integral_constant<bool, has_fixed_size<rm_interfaces::msg::Gimbal>::value> {};

template<>
struct has_bounded_size<rm_interfaces::msg::GimbalCmd>
  : std::integral_constant<bool, has_bounded_size<rm_interfaces::msg::Gimbal>::value> {};

template<>
struct is_message<rm_interfaces::msg::GimbalCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__TRAITS_HPP_
