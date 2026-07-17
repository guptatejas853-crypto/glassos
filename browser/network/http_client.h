#ifndef HTTP_CLIENT_H
#define HTTP_CLIENT_H

void http_init(void);

char *http_get(const char *url);

void http_close(void);

#endif
