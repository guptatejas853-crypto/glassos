#ifndef MEMORY_H
#define MEMORY_H

#include <stddef.h>
#include <stdint.h>

#define PAGE_SIZE 4096

// Initialize memory manager
void memory_init(void);

// Allocate memory block
void *memory_alloc(size_t size);

// Free allocated memory
void memory_free(void *ptr);

// Get total memory available
uint64_t memory_get_total(void);

// Get used memory
uint64_t memory_get_used(void);

#endif
