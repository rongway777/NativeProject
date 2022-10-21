cmake_minimum_required(VERSION 3.21)

project(NativeProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(NativeProject main.cpp)

target_link_libraries(NativeProject android log)