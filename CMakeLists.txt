cmake_minimum_required(VERSION 3.8)
project(streamline)

SET( CMAKE_EXPORT_COMPILE_COMMANDS ON )

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)

# we added it as a third party library
#find_package(glbinding REQUIRED) 

add_subdirectory(third-party)
add_subdirectory(code)
