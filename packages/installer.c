#include <stdio.h>

#include "installer.h"
#include "package.h"
#include "manifest.h"
#include "signature.h"

#include "../launcher/launcher.h"

void installer_init(void)
{
    manifest_init();
    package_init();
    signature_init();

    printf("[ATP] Installer Initialized.\n");
}

int install_package(const char *path)
{
    printf("[ATP] Installing: %s\n", path);

    if (!signature_verify(path))
    {
        printf("[ATP] Signature verification failed.\n");
        return 0;
    }

    if (!package_open(path))
    {
        printf("[ATP] Package verification failed.\n");
        return 0;
    }

    printf("[ATP] Installation completed successfully.\n");

    if (!launch_application(path))
    {
        printf("[ATP] Failed to launch application.\n");
        return 0;
    }

    return 1;
}

int uninstall_package(const char *package_name)
{
    printf("[ATP] Uninstalling: %s\n", package_name);

    return 1;
}

int update_package(const char *path)
{
    printf("[ATP] Updating: %s\n", path);

    return install_package(path);
}
