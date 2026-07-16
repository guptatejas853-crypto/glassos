add_executable(glassos
    main.c
)

target_link_libraries(glassos
    PRIVATE
        glass_kernel
)

target_include_directories(glassos
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)
