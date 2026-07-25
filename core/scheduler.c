#include <stdio.h>

#include "scheduler.h"

static unsigned int tick_count = 0;

void scheduler_init(void)
{
    tick_count = 0;

    printf("[Scheduler] Initialized\n");
}

void scheduler_run(void)
{
    printf("[Scheduler] Running\n");
}

void scheduler_tick(void)
{
    tick_count++;

    printf("[Scheduler] Tick %u\n", tick_count);
}

void scheduler_switch(void)
{
    printf("[Scheduler] Context Switch\n");
}
