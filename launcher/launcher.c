#include <stdio.h>

#include "launcher.h"

#include "../core/process.h"
#include "../core/memory.h"
#include "../core/scheduler.h"

int launch_application(const char *path)
{
    printf("[Launcher] Launching Application: %s\n", path);

    /* Allocate memory */
    memory_allocate();

    /* Create process */
    process_create(path);

    /* Add process to scheduler */
    scheduler_add_process(path);

    printf("[Launcher] Application Started Successfully.\n");

    return 1;
}
