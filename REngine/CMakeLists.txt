﻿# CMakeList.txt : CMake project for OpenGL_Tutorial, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (REngine "main.cpp")

# TODO: Add tests and install targets if needed.
target_link_libraries (REngine 
	glfw
	libglew_static
)
