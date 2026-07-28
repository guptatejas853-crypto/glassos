add_library(Settings
    settings.cpp
)

target_include_directories(Settings PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Settings
    PRIVATE
        Renderer
)
