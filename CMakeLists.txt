cmake_minimum_required(VERSION 3.8)
project(streamline)

SET( CMAKE_EXPORT_COMPILE_COMMANDS ON )

# we added it as a third party library
#find_package(glbinding REQUIRED) 

add_subdirectory(third-party)
add_subdirectory(code)
