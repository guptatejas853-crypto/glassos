#include <stdio.h>

#include "kernel.h"

#include "../core/memory.h"
#include "../core/process.h"
#include "../core/scheduler.h"

#include "../filesystem/vfs.h"

#include "../compatibility/smart_atp_engine.h"

#include "../browser/browser.h"


void kernel_start(void)
{
    printf("=================================\n");
    printf("       GlassOS Kernel v0.1       \n");
    printf("=================================\n");


    printf("[Kernel] Starting subsystems...\n");


    memory_init();
    printf("[Kernel] Memory Manager Ready.\n");


    process_init();
    printf("[Kernel] Process Manager Ready.\n");


    scheduler_init();
    printf("[Kernel] Scheduler Ready.\n");


    vfs_init();
    printf("[Kernel] VFS Ready.\n");


    smart_atp_init();
    printf("[Kernel] Smart ATP Engine Ready.\n");


    browser_init();
    printf("[Kernel] Glass Browser Ready.\n");


    printf("[Kernel] GlassOS initialized successfully.\n");
}
