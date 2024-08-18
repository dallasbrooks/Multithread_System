cmake_minimum_required(VERSION 3.5)

project(
  Multithread_System
  LANGUAGES C CXX)

set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)

include(cmake/build_options.cmake)

include(cmake/compile_options.cmake)

add_subdirectory(${CMAKE_SOURCE_DIR}/core)