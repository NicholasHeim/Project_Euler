cmake_minimum_required(VERSION 3.10.2)
project(Project_Euler)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp current.cpp Completed.cpp)

add_executable(euler ${SOURCE_FILES})