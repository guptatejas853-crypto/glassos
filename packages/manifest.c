#include <stdio.h>
#include "manifest.h"

void manifest_init(void)
{
    printf("[ATP] Manifest System Initialized.\n");
}

int manifest_load(const char *path)
{
    printf("[ATP] Reading Manifest: %s\n", path);

    /*
     * Future:
     * - Read manifest.json
     * - Package Name
     * - Version
     * - Author
     * - Permissions
     * - Dependencies
     */

    return 1;
}
