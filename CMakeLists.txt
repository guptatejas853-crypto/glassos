cmake_minimum_required(VERSION 3.20)

project(GlassOS C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Modules that already have CMakeLists.txt
add_subdirectory(kernel)
add_subdirectory(desktop)
add_subdirectory(window_manager)
add_subdirectory(renderer)
add_subdirectory(explorer)
add_subdirectory(glass_effect)
add_subdirectory(taskbar)
add_subdirectory(start_menu)
add_subdirectory(terminal)
add_subdirectory(settings)
add_subdirectory(src)

# Add these later after creating proper CMakeLists.txt files
# add_subdirectory(core)
# add_subdirectory(filesystem)
# add_subdirectory(compatibility)
# add_subdirectory(converter)
# add_subdirectory(packages)
# add_subdirectory(launcher)
# add_subdirectory(browser)
