#include <stdio.h>
#include "system.h"
#include "memory.h"
#include "process.h"
#include "scheduler.h"
#include "interrupt.h"
#include "timer.h"

void system_init(void)
{
    printf("Initializing GlassOS Core...\n");

    memory_init();
    process_init();
    scheduler_init();
    interrupt_init();
    timer_init();

    printf("GlassOS Core Initialized Successfully.\n");
}
