cmake_minimum_required(VERSION 3.5)
project(Multithread_System C CXX)

add_executable(Multithread_System main.cpp)

include_directories(".")

add_subdirectory(Main)
add_subdirectory(Utility)

target_link_libraries(Multithread_System PRIVATE
    Main
    Utility
)