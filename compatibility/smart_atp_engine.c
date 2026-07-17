#include <stdio.h>
#include <string.h>

#include "smart_atp_engine.h"
#include "atp_loader.h"
#include "elf_loader.h"
#include "exe_loader.h"

#include "../converter/converter.h"
#include "../packages/installer.h"

void smart_atp_init(void)
{
    atp_loader_init();
    elf_loader_init();
    exe_loader_init();

    converter_init();

    installer_init();

    printf("[Smart ATP] Engine Initialized.\n");
}

void smart_atp_process(const char *path)
{
    const char *ext = strrchr(path, '.');

    if (ext == NULL)
    {
        printf("[Smart ATP] Unknown file type.\n");
        return;
    }

    if (strcmp(ext, ".atp") == 0)
    {
        atp_load(path);
        install_package(path);
        return;
    }

    if (strcmp(ext, ".elf") == 0)
    {
        char atp_path[256];

        if (convert_elf_to_atp(path, atp_path))
        {
            install_package(atp_path);
        }
        else
        {
            elf_load(path);
        }

        return;
    }

    if (strcmp(ext, ".exe") == 0)
    {
        char atp_path[256];

        if (convert_exe_to_atp(path, atp_path))
        {
            install_package(atp_path);
        }
        else
        {
            exe_load(path);
        }

        return;
    }

    printf("[Smart ATP] Unsupported file type.\n");
}
