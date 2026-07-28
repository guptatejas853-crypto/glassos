add_library(Taskbar
    taskbar.cpp
)

target_include_directories(Taskbar PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Taskbar
    PRIVATE
        Renderer
)
