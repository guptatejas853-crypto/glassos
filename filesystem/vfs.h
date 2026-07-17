#ifndef GLASSOS_VFS_H
#define GLASSOS_VFS_H

void vfs_init(void);
void vfs_open(const char *path);
void vfs_close(const char *path);

#endif
