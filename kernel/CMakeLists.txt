add_library(glass_kernel
    kernel.c
)

target_include_directories(glass_kernel
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
