#include <stdio.h>
#include <string.h>

#include "download_manager.h"


static download_task_t downloads[MAX_DOWNLOADS];

static int download_count = 0;



void download_manager_init(void)
{
    printf("[Download] Initializing Download Manager...\n");

    memset(downloads, 0, sizeof(downloads));

    download_count = 0;

    printf("[Download] Ready.\n");
}



int download_start(const char *url, const char *file)
{
    if (download_count >= MAX_DOWNLOADS)
    {
        printf("[Download] Limit reached.\n");
        return -1;
    }


    int id = download_count;


    downloads[id].id = id;


    strncpy(downloads[id].url,
            url,
            MAX_PATH_LENGTH - 1);


    strncpy(downloads[id].file,
            file,
            MAX_PATH_LENGTH - 1);


    downloads[id].status = DOWNLOAD_RUNNING;


    download_count++;


    printf("[Download] Started: %s\n", url);


    /*
     * Future:
     * - HTTP file transfer
     * - Progress tracking
     * - Resume support
     * - Storage manager
     */


    downloads[id].status = DOWNLOAD_COMPLETED;


    printf("[Download] Completed: %s\n", file);


    return id;
}



void download_cancel(int id)
{
    if (id < 0 || id >= download_count)
    {
        printf("[Download] Invalid download.\n");
        return;
    }


    downloads[id].status = DOWNLOAD_CANCELLED;


    printf("[Download] Cancelled: %d\n", id);
}



void download_list(void)
{
    printf("[Download] Downloads:\n");


    for (int i = 0; i < download_count; i++)
    {
        printf("%d : %s\n",
               downloads[i].id,
               downloads[i].file);
    }
}
