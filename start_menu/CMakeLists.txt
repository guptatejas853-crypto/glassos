add_library(StartMenu
    start_menu.cpp
)

target_include_directories(StartMenu PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(StartMenu
    PRIVATE
        Renderer
)
