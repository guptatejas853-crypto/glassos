#include <stdio.h>
#include <string.h>

#include "tab_manager.h"


static browser_tab_t tabs[MAX_TABS];

static int tab_count = 0;



void tab_manager_init(void)
{
    printf("[Tabs] Initializing Tab Manager...\n");

    memset(tabs, 0, sizeof(tabs));

    tab_count = 0;

    printf("[Tabs] Ready.\n");
}



int tab_create(const char *url)
{
    if (tab_count >= MAX_TABS)
    {
        printf("[Tabs] Maximum tabs reached.\n");
        return -1;
    }


    int id = tab_count;


    tabs[id].id = id;

    strncpy(tabs[id].url,
            url,
            MAX_URL_LENGTH - 1);


    tabs[id].active = 1;


    tab_count++;


    printf("[Tabs] Created tab %d: %s\n",
           id,
           tabs[id].url);


    return id;
}



void tab_switch(int id)
{
    if (id < 0 || id >= tab_count)
    {
        printf("[Tabs] Invalid tab.\n");
        return;
    }


    for (int i = 0; i < tab_count; i++)
    {
        tabs[i].active = 0;
    }


    tabs[id].active = 1;


    printf("[Tabs] Switched to tab %d\n", id);
}



void tab_close(int id)
{
    if (id < 0 || id >= tab_count)
    {
        printf("[Tabs] Invalid tab.\n");
        return;
    }


    printf("[Tabs] Closed tab %d\n", id);


    tabs[id].active = 0;
}



void tab_list(void)
{
    printf("[Tabs] Open Tabs:\n");


    for (int i = 0; i < tab_count; i++)
    {
        if (tabs[i].active)
        {
            printf("Tab %d : %s\n",
                   tabs[i].id,
                   tabs[i].url);
        }
    }
}
