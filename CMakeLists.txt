﻿# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("REngine")

# Include sub-projects.
add_subdirectory ("glfw")
add_subdirectory ("glew")
add_subdirectory ("REngine")

target_include_directories (REngine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/glfw/include)
target_include_directories (REngine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/glew/include)
