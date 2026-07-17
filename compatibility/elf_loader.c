#include <stdio.h>
#include "elf_loader.h"

void elf_loader_init(void)
{
    printf("[ELF] ELF Loader Initialized.\n");
}

void elf_load(const char *path)
{
    printf("[ELF] Loading ELF Executable: %s\n", path);

    /*
     * Future:
     * - Read ELF Header
     * - Verify ELF Format
     * - Load Program Segments
     * - Allocate Memory
     * - Start Process
     */
}
