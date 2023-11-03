cmake_minimum_required(VERSION 2.8.3)
project(constraint_recognition)
find_package(catkin REQUIRED COMPONENTS
  rospy
  message_generation
  sensor_msgs
  std_msgs
  geometry_msgs
  sensor_msgs
)

catkin_python_setup()

#generate_messages(DEPENDENCIES std_msgs)

