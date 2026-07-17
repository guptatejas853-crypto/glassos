#ifndef DOWNLOAD_MANAGER_H
#define DOWNLOAD_MANAGER_H

#define MAX_DOWNLOADS 32
#define MAX_PATH_LENGTH 256


typedef enum
{
    DOWNLOAD_PENDING,
    DOWNLOAD_RUNNING,
    DOWNLOAD_COMPLETED,
    DOWNLOAD_FAILED,
    DOWNLOAD_CANCELLED

} download_status_t;


typedef struct
{
    int id;
    char url[MAX_PATH_LENGTH];
    char file[MAX_PATH_LENGTH];
    download_status_t status;

} download_task_t;


void download_manager_init(void);

int download_start(const char *url, const char *file);

void download_cancel(int id);

void download_list(void);


#endif
