#include <stdio.h>

#include "kernel.h"

#include "../core/memory.h"
#include "../core/process.h"
#include "../core/scheduler.h"

#include "../filesystem/vfs.h"

#include "../compatibility/smart_atp_engine.h"


void kernel_start(void)
{
    printf("=================================\n");
    printf("       GlassOS Kernel v0.1       \n");
    printf("=================================\n");

    printf("[Kernel] Starting subsystems...\n");

    /* Memory Manager */
    memory_init();
    printf("[Kernel] Memory Manager Ready.\n");


    /* Process Manager */
    process_init();
    printf("[Kernel] Process Manager Ready.\n");


    /* Scheduler */
    scheduler_init();
    printf("[Kernel] Scheduler Ready.\n");


    /* Virtual File System */
    vfs_init();
    printf("[Kernel] VFS Ready.\n");


    /* Smart ATP Engine */
    smart_atp_init();
    printf("[Kernel] Smart ATP Engine Ready.\n");


    printf("[Kernel] GlassOS initialized successfully.\n");
}
