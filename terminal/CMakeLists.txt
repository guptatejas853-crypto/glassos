add_library(Terminal
    terminal.cpp
)

target_include_directories(Terminal PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Terminal
    PRIVATE
        Renderer
)
