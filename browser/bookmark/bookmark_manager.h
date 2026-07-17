#ifndef BOOKMARK_MANAGER_H
#define BOOKMARK_MANAGER_H

#define MAX_BOOKMARKS 64
#define MAX_TITLE_LENGTH 128
#define MAX_URL_LENGTH 256


typedef struct
{
    int id;
    char title[MAX_TITLE_LENGTH];
    char url[MAX_URL_LENGTH];

} bookmark_t;


void bookmark_manager_init(void);

int bookmark_add(const char *title, const char *url);

void bookmark_remove(int id);

void bookmark_list(void);

int bookmark_search(const char *keyword);


#endif
