#include <stdio.h>
#include <string.h>

#include "smart_atp_engine.h"
#include "atp_loader.h"
#include "elf_loader.h"
#include "exe_loader.h"

void smart_atp_init(void)
{
    printf("[Smart ATP] Engine Initialized.\n");

    atp_loader_init();
    elf_loader_init();
    exe_loader_init();
}

void smart_atp_process(const char *path)
{
    printf("[Smart ATP] Processing: %s\n", path);

    const char *ext = strrchr(path, '.');

    if (ext == NULL)
    {
        printf("[Smart ATP] Unknown file type.\n");
        return;
    }

    if (strcmp(ext, ".atp") == 0)
    {
        atp_load(path);
    }
    else if (strcmp(ext, ".elf") == 0)
    {
        elf_load(path);
    }
    else if (strcmp(ext, ".exe") == 0)
    {
        exe_load(path);
    }
    else
    {
        printf("[Smart ATP] Unsupported file type.\n");
        printf("[Smart ATP] Future versions may support automatic conversion.\n");
    }
}
