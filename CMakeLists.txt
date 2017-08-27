cmake_minimum_required(VERSION 3.8)
project(streamline)

SET( CMAKE_EXPORT_COMPILE_COMMANDS ON )

find_package(glbinding REQUIRED) 

add_subdirectory(code)
