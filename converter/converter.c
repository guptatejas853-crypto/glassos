#include <stdio.h>
#include <string.h>

#include "converter.h"

void converter_init(void)
{
    printf("[Converter] Converter Manager Initialized.\n");
}

int convert_exe_to_atp(const char *exe_path, char *output_path)
{
    printf("[Converter] Converting EXE -> ATP\n");
    printf("[Converter] Source : %s\n", exe_path);

    /*
     * Future:
     * Read PE executable
     * Extract metadata
     * Create ATP package
     */

    strcpy(output_path, "converted_application.atp");

    printf("[Converter] Output : %s\n", output_path);

    return 1;
}

int convert_elf_to_atp(const char *elf_path, char *output_path)
{
    printf("[Converter] Converting ELF -> ATP\n");
    printf("[Converter] Source : %s\n", elf_path);

    /*
     * Future:
     * Read ELF
     * Convert executable
     * Generate ATP package
     */

    strcpy(output_path, "converted_application.atp");

    printf("[Converter] Output : %s\n", output_path);

    return 1;
}
