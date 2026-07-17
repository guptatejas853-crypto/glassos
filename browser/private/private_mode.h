#ifndef PRIVATE_MODE_H
#define PRIVATE_MODE_H


#define MAX_PRIVATE_HISTORY 64
#define MAX_URL_LENGTH 256


typedef struct
{
    char url[MAX_URL_LENGTH];

} private_history_t;


void private_mode_init(void);

void private_mode_start(void);

void private_mode_stop(void);

void private_history_add(const char *url);

void private_history_clear(void);


#endif
