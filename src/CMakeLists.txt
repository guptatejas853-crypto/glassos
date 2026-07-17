add_executable(glassos
    main.c
)

target_link_libraries(glassos
    PRIVATE
        glass_kernel
        glass_browser
)

target_include_directories(glassos
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/browser
)
