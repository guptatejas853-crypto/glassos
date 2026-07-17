#include <stdio.h>
#include <string.h>

#include "bookmark_manager.h"


static bookmark_t bookmarks[MAX_BOOKMARKS];

static int bookmark_count = 0;



void bookmark_manager_init(void)
{
    printf("[Bookmarks] Initializing Bookmark Manager...\n");

    memset(bookmarks, 0, sizeof(bookmarks));

    bookmark_count = 0;

    printf("[Bookmarks] Ready.\n");
}



int bookmark_add(const char *title, const char *url)
{
    if (bookmark_count >= MAX_BOOKMARKS)
    {
        printf("[Bookmarks] Storage full.\n");
        return -1;
    }


    int id = bookmark_count;


    bookmarks[id].id = id;


    strncpy(bookmarks[id].title,
            title,
            MAX_TITLE_LENGTH - 1);


    strncpy(bookmarks[id].url,
            url,
            MAX_URL_LENGTH - 1);


    bookmark_count++;


    printf("[Bookmarks] Added: %s\n", title);


    return id;
}



void bookmark_remove(int id)
{
    if (id < 0 || id >= bookmark_count)
    {
        printf("[Bookmarks] Invalid bookmark.\n");
        return;
    }


    printf("[Bookmarks] Removed: %s\n",
           bookmarks[id].title);


    bookmarks[id].title[0] = '\0';
    bookmarks[id].url[0] = '\0';
}



void bookmark_list(void)
{
    printf("[Bookmarks] Saved Pages:\n");


    for (int i = 0; i < bookmark_count; i++)
    {
        if (bookmarks[i].url[0] != '\0')
        {
            printf("%d: %s -> %s\n",
                   bookmarks[i].id,
                   bookmarks[i].title,
                   bookmarks[i].url);
        }
    }
}



int bookmark_search(const char *keyword)
{
    for (int i = 0; i < bookmark_count; i++)
    {
        if (strstr(bookmarks[i].title, keyword) ||
            strstr(bookmarks[i].url, keyword))
        {
            return bookmarks[i].id;
        }
    }


    return -1;
}
