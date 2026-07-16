cmake_minimum_required(VERSION 3.20)

project(GlassOS C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(kernel)
add_subdirectory(src)
