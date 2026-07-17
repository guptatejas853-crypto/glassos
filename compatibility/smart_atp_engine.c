#include <stdio.h>
#include <string.h>

#include "smart_atp_engine.h"
#include "atp_loader.h"
#include "elf_loader.h"
#include "exe_loader.h"
#include "../packages/installer.h"

void smart_atp_init(void)
{
    printf("[Smart ATP] Engine Initialized.\n");

    atp_loader_init();
    elf_loader_init();
    exe_loader_init();

    installer_init();
}

void smart_atp_process(const char *path)
{
    const char *ext = strrchr(path, '.');

    if (ext == NULL)
    {
        printf("[Smart ATP] Unknown file type.\n");
        return;
    }

    /* Native ATP */
    if (strcmp(ext, ".atp") == 0)
    {
        atp_load(path);
        install_package(path);
    }

    /* ELF */
    else if (strcmp(ext, ".elf") == 0)
    {
        printf("[Smart ATP] ELF Detected.\n");

        elf_load(path);

        /*
         * Future:
         * Convert ELF -> ATP
         * Then:
         * install_package(new_atp);
         */
    }

    /* Windows EXE */
    else if (strcmp(ext, ".exe") == 0)
    {
        printf("[Smart ATP] EXE Detected.\n");

        exe_load(path);

        /*
         * Future:
         * Convert EXE -> ATP
         * Then:
         * install_package(new_atp);
         */
    }

    else
    {
        printf("[Smart ATP] Unsupported file type.\n");
    }
}
