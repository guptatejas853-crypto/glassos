#include <stdio.h>

#include "launcher.h"
#include "../core/process.h"

int launch_application(const char *path)
{
    printf("[Launcher] Launching Application: %s\n", path);

    /*
     * Future:
     * Load ATP executable
     * Allocate process
     * Allocate memory
     * Start execution
     */

    process_create(path);

    return 1;
}
