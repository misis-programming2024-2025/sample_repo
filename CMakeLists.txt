cmake_minimum_required(VERSION 3.10)

project(misis_anisimova)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/doctest)

add_subdirectory(first_class)
add_subdirectory(complex_prj)
add_subdirectory(test_prj)