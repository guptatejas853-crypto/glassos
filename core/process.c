#include <stdio.h>
#include <string.h>

#include "process.h"

#define MAX_PROCESSES 64

static process_t process_table[MAX_PROCESSES];
static uint32_t next_pid = 1;

void process_init(void)
{
    memset(process_table, 0, sizeof(process_table));

    next_pid = 1;

    printf("[Process] Process Manager Initialized.\n");
}

int process_create(const char* name)
{
    for (int i = 0; i < MAX_PROCESSES; i++)
    {
        if (process_table[i].pid == 0)
        {
            process_table[i].pid = next_pid++;

            strncpy(process_table[i].name, name, 31);
            process_table[i].name[31] = '\0';

            process_table[i].state = 1;

            printf("[Process] Created PID %u (%s)\n",
                   process_table[i].pid,
                   process_table[i].name);

            return process_table[i].pid;
        }
    }

    return -1;
}

void process_kill(uint32_t pid)
{
    for (int i = 0; i < MAX_PROCESSES; i++)
    {
        if (process_table[i].pid == pid)
        {
            process_table[i].pid = 0;

            printf("[Process] Killed PID %u\n", pid);

            return;
        }
    }
}

void process_schedule(void)
{
    printf("[Process] Scheduler Running\n");
}
