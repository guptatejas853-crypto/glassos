#ifndef TAB_MANAGER_H
#define TAB_MANAGER_H

#define MAX_TABS 16
#define MAX_URL_LENGTH 256


typedef struct
{
    int id;
    char url[MAX_URL_LENGTH];
    int active;

} browser_tab_t;


void tab_manager_init(void);

int tab_create(const char *url);

void tab_switch(int id);

void tab_close(int id);

void tab_list(void);


#endif
