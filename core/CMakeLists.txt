cmake_minimum_required(VERSION 3.5)
project(Multithread_System C CXX)

set(SOURCES ${sources} Main/main.cpp)

include_directories(${CMAKE_CURRENT_LIST_DIR}
                    ${CMAKE_CURRENT_LIST_DIR}/Main)

add_executable(Multithread_System ${SOURCES})