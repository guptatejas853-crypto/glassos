#include <stdio.h>

#include "package.h"
#include "manifest.h"

void package_init(void)
{
    printf("[ATP] Package Manager Initialized.\n");
}

int package_open(const char *path)
{
    printf("[ATP] Opening Package: %s\n", path);

    if (!manifest_load(path))
    {
        printf("[ATP] Invalid Package.\n");
        return 0;
    }

    printf("[ATP] Package Loaded Successfully.\n");

    return 1;
}
