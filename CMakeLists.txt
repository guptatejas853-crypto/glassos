cmake_minimum_required(VERSION 3.20)

project(GlassOS C)

set(CMAKE_C_STANDARD 11)


add_subdirectory(kernel)

add_subdirectory(src)

add_subdirectory(core)

add_subdirectory(filesystem)

add_subdirectory(compatibility)

add_subdirectory(converter)

add_subdirectory(packages)

add_subdirectory(launcher)

add_subdirectory(browser)
