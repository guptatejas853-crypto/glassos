#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "http_client.h"


static int network_ready = 0;


void http_init(void)
{
    printf("[HTTP Client] Initializing network layer...\n");

    network_ready = 1;

    printf("[HTTP Client] Ready.\n");
}


char *http_get(const char *url)
{
    if (!network_ready)
    {
        printf("[HTTP Client] Network not initialized.\n");
        return NULL;
    }

    if (url == NULL)
    {
        printf("[HTTP Client] Invalid URL.\n");
        return NULL;
    }


    printf("[HTTP Client] GET %s\n", url);


    /*
     * Future:
     * - DNS lookup
     * - TCP connection
     * - TLS/HTTPS
     * - HTTP request
     * - Receive webpage data
     */


    char *response = malloc(1024);

    if (response == NULL)
    {
        printf("[HTTP Client] Memory allocation failed.\n");
        return NULL;
    }


    strcpy(response,
           "<html><body>Glass Browser Test Page</body></html>");


    return response;
}


void http_close(void)
{
    network_ready = 0;

    printf("[HTTP Client] Closed.\n");
}
