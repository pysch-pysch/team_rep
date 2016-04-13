cmake_minimum_required(VERSION 3.3)
project(project_technosphere_c_v2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp date.cpp date.h case.cpp case.h enums.h cost.cpp cost.h day.cpp day.h)
add_executable(project_technosphere_c_v2 ${SOURCE_FILES} date.cpp date.h enums.h day.cpp day.h)