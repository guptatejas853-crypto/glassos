#ifndef ATP_INSTALLER_H
#define ATP_INSTALLER_H

void installer_init(void);
int install_package(const char *path);
int uninstall_package(const char *package_name);
int update_package(const char *path);

#endif
