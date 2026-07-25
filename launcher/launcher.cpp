#include <stdio.h>

#include "launcher.h"

#include "../core/process.h"

int launch_application(const char *path)
{
    if (path == NULL)
        return 0;

    printf("[Launcher] %s\n", path);

    if (process_create(path) < 0)
        return 0;

    return 1;
}
