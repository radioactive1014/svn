cmake_minimum_required(VERSION 2.8.3)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)


ADD_DEFINITIONS(
    -std=gnu++0x
)

project(app)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  sensor_msgs
  geometry_msgs
  std_srvs
  message_generation

)


#rosbuild_init()


#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I/home/intelligentrobotics/ws/orocos/KUKACommander/srv_gen/cpp/include")

rosbuild_add_boost_directories()


## Generate messages in the 'msg' folder
 add_message_files(
   DIRECTORY msg
   FILES
   cam.msg
 
 )


## Generate added messages and services with any dependencies listed here
 generate_messages(
   DEPENDENCIES
   std_msgs
 )


## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES app
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)



## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
include_directories( include
  ${catkin_INCLUDE_DIRS}
)

include_directories (/home/intelligentrobotics/ws/orocos/motion_control/motion_control_msgs/msg_gen/cpp/include/motion_control_msgs)
include_directories (/home/intelligentrobotics/Alberto/fri/fri_remote)





rosbuild_add_executable(sub src/sub.cpp)
rosbuild_add_executable(pub src/publisher.cpp)
rosbuild_add_executable(move src/move.cpp)
rosbuild_add_executable(client src/client.cpp)
rosbuild_add_executable(pbp_vel src/pbp_vel.cpp)
rosbuild_add_executable(fancy src/fancy.cpp)
rosbuild_add_executable(pbp_double src/pbp_double.cpp)
rosbuild_add_executable(pbp_sim_test src/pbp_sim_test.cpp)
rosbuild_add_executable(pbp_feedback src/pbp_feedback.cpp)





## Specify libraries to link a library or executable target against


target_link_libraries(sub
  ${catkin_LIBRARIES}
 )


target_link_libraries(pub
  ${catkin_LIBRARIES}
 )

target_link_libraries(move
  ${catkin_LIBRARIES}
 )


target_link_libraries(client
  ${catkin_LIBRARIES}
 )

target_link_libraries(pbp_vel
  ${catkin_LIBRARIES}
 )

target_link_libraries(fancy
  ${catkin_LIBRARIES}
 )

target_link_libraries(pbp_double
  ${catkin_LIBRARIES}
 )

target_link_libraries(pbp_sim_test
  ${catkin_LIBRARIES}
 )

target_link_libraries(pbp_feedback
  ${catkin_LIBRARIES}
 )

