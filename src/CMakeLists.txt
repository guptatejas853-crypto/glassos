add_executable(glassos
    ../main.cpp
)

target_link_libraries(glassos
    PRIVATE
        Kernel
        Desktop
        WindowManager
)

target_include_directories(glassos
    PRIVATE
        ${PROJECT_SOURCE_DIR}/kernel/include
        ${PROJECT_SOURCE_DIR}/desktop
        ${PROJECT_SOURCE_DIR}/window_manager
)
