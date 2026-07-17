#include <stdio.h>

#include "installer.h"
#include "package.h"
#include "signature.h"

void installer_init(void)
{
    printf("[ATP] Installer Initialized.\n");
}

int install_package(const char *path)
{
    printf("[ATP] Installing: %s\n", path);

    if (!signature_verify(path))
    {
        printf("[ATP] Invalid Signature.\n");
        return 0;
    }

    if (!package_open(path))
    {
        printf("[ATP] Invalid Package.\n");
        return 0;
    }

    printf("[ATP] Installation Complete.\n");

    return 1;
}

int uninstall_package(const char *package_name)
{
    printf("[ATP] Uninstalling: %s\n", package_name);

    return 1;
}

int update_package(const char *path)
{
    printf("[ATP] Updating Package: %s\n", path);

    return install_package(path);
}
