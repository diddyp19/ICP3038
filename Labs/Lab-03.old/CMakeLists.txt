cmake_minimum_required(VERSION 2.6)

project(ICP3038--Lab03)

# Wehre the header files are (in relation to ${CMAKE_CURRENT_SOURCE_DIR})
include_directories(include)
message(STATUS "The header files are located in ${CMAKE_CURRENT_SOURCE_DIR}/include")

add_executable(Task1 src/TestVector.cpp)
add_executable(Task2 src/TestUtils.cpp include/utils.h)
