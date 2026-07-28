add_library(Explorer
    explorer.cpp
)

target_include_directories(Explorer PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Explorer
    PRIVATE
        Renderer
)
