cmake_minimum_required(VERSION 3.20)

project(
    GlassOS
    VERSION 0.1.0
    DESCRIPTION "GlassOS Operating System"
    LANGUAGES C CXX ASM
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

message(STATUS "Configuring GlassOS...")

add_subdirectory(kernel)
add_subdirectory(boot)

message(STATUS "GlassOS configuration complete.")
