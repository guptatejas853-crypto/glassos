#include <stdio.h>
#include <string.h>

#include "private_mode.h"


static int private_active = 0;


static private_history_t history[MAX_PRIVATE_HISTORY];

static int history_count = 0;



void private_mode_init(void)
{
    printf("[Private Mode] Initializing...\n");

    memset(history, 0, sizeof(history));

    history_count = 0;

    printf("[Private Mode] Ready.\n");
}



void private_mode_start(void)
{
    private_active = 1;

    history_count = 0;

    memset(history, 0, sizeof(history));


    printf("[Private Mode] Session started.\n");
}



void private_mode_stop(void)
{
    private_active = 0;


    private_history_clear();


    printf("[Private Mode] Session closed.\n");
}



void private_history_add(const char *url)
{
    if (!private_active)
    {
        return;
    }


    if (history_count >= MAX_PRIVATE_HISTORY)
    {
        return;
    }


    strncpy(history[history_count].url,
            url,
            MAX_URL_LENGTH - 1);


    history_count++;
}



void private_history_clear(void)
{
    memset(history, 0, sizeof(history));

    history_count = 0;


    printf("[Private Mode] Temporary data cleared.\n");
}
