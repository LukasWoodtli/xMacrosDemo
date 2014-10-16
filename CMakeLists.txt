cmake_minimum_required(VERSION 2.8)

project("X-Macros Example" C)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})


add_executable(XMacrosExample 
                                main.c
                                device_data.h
                                device_data.c
                                device_data.xdef)
