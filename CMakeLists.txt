cmake_minimum_required(VERSION 3.16)
project(c_college)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_college main.cpp)

##引入子目录
ADD_SUBDIRECTORY(count_down)
ADD_SUBDIRECTORY(dynamic_memory_allocation)
ADD_SUBDIRECTORY(dynamic_memory_allocation_demo)
ADD_SUBDIRECTORY(decimals_demo)
ADD_SUBDIRECTORY(ui_99)
ADD_SUBDIRECTORY(virus_memory)
ADD_SUBDIRECTORY(what_is_a_variable_address)
ADD_SUBDIRECTORY(zbreak_continue)
