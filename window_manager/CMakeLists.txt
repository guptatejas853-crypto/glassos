add_library(WindowManager
    window_manager.cpp
)

target_include_directories(WindowManager PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
