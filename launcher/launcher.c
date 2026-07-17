#include <stdio.h>

#include "launcher.h"

#include "../core/process.h"
#include "../core/memory.h"

int launch_application(const char *path)
{
    printf("[Launcher] Launching Application: %s\n", path);

    /*
     * Allocate memory for application
     */
    void *app_memory = memory_alloc(4096);

    if (app_memory == NULL)
    {
        printf("[Launcher] Memory allocation failed.\n");
        return 0;
    }

    /*
     * Create process
     */
    int pid = process_create(path);

    if (pid < 0)
    {
        printf("[Launcher] Process creation failed.\n");

        memory_free(app_memory);

        return 0;
    }

    printf("[Launcher] Process Created. PID: %d\n", pid);

    printf("[Launcher] Application Started.\n");

    return 1;
}
