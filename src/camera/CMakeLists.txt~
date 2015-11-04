cmake_minimum_required(VERSION 2.8.3)
project(camera)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  cv_bridge
  image_transport
  sensor_msgs
)


 find_package(OpenCV)
 include_directories(${OpenCV_INCLUDE_DIRS})


catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES camera
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)


include_directories(
  ${catkin_INCLUDE_DIRS}
)

## Declare a cpp executable

 add_executable(check src/check.cpp)
 add_executable(click src/click.cpp)
 add_executable(cpub src/click_pub.cpp)
 add_executable(fix src/fix.cpp)
 add_executable(fancy_cam src/fancy_cam.cpp)
 add_executable(fix_double src/fix_double.cpp)
 add_executable(fix_test src/fix_test.cpp)
 add_executable(fix_corner src/fix_corner.cpp)



## Specify libraries to link a library or executable target against
 
 target_link_libraries(check 
  ${catkin_LIBRARIES}
 )
 target_link_libraries(click 
  ${catkin_LIBRARIES}
 )

 target_link_libraries(cpub 
  ${catkin_LIBRARIES}
 )
 target_link_libraries(fix 
  ${catkin_LIBRARIES}
 )

 target_link_libraries(fancy_cam 
  ${catkin_LIBRARIES}
 )

 target_link_libraries(fix_double 
  ${catkin_LIBRARIES}
 )

 target_link_libraries(fix_test
  ${catkin_LIBRARIES}
 )
 target_link_libraries(fix_corner
  ${catkin_LIBRARIES}
 )

 target_link_libraries(check ${OpenCV_LIBRARIES})
 target_link_libraries(click ${OpenCV_LIBRARIES})
 target_link_libraries(fix ${OpenCV_LIBRARIES})
 target_link_libraries(fancy_cam ${OpenCV_LIBRARIES})
 target_link_libraries(fix_double ${OpenCV_LIBRARIES})
 target_link_libraries(fix_test ${OpenCV_LIBRARIES})
 target_link_libraries(fix_corner ${OpenCV_LIBRARIES})



