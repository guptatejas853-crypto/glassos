#include <stdio.h>

#include "memory.h"

#define MEMORY_POOL_SIZE (1024 * 1024)

static unsigned char memory_pool[MEMORY_POOL_SIZE];
static unsigned int memory_offset = 0;

void memory_init(void)
{
    memory_offset = 0;

    printf("[Memory] Memory Manager Initialized.\n");
}

void* memory_alloc(unsigned int size)
{
    if (memory_offset + size > MEMORY_POOL_SIZE)
        return NULL;

    void* ptr = &memory_pool[memory_offset];

    memory_offset += size;

    return ptr;
}

void memory_free(void* ptr)
{
    (void)ptr;

    printf("[Memory] Free Requested\n");
}
