#ifndef GLASSOS_MEMORY_H
#define GLASSOS_MEMORY_H

void memory_init(void);

void* memory_alloc(unsigned int size);

void memory_free(void* ptr);

#endif
