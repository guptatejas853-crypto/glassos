add_library(Renderer
    renderer.cpp
)

target_include_directories(Renderer PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
