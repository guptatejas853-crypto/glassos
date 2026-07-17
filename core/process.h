#ifndef GLASSOS_PROCESS_H
#define GLASSOS_PROCESS_H

#include <stdint.h>

typedef struct {
    uint32_t pid;
    char name[32];
    uint8_t state;
} process_t;

void process_init(void);
int process_create(const char* name);
void process_kill(uint32_t pid);
void process_schedule(void);

#endif
