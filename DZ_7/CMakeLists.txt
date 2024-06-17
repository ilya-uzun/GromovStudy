cmake_minimum_required(VERSION 3.10.0)

project(DZ_7)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(DZ_7
   main.cpp
   pid.h pid.cpp
   pwm.h pwm.cpp
   sensor.h sensor.cpp)


target_link_libraries(DZ_7 Qt5::Widgets)
