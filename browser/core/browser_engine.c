// browser_engine.c

#include <stdio.h>

#include "browser_engine.h"

#include "../network/http_client.h"
#include "../parser/html_parser.h"
#include "../renderer/render_engine.h"


void browser_engine_init(void)
{
    printf("[Browser Engine] Starting...\n");

    http_init();
    html_parser_init();
    renderer_init();

    printf("[Browser Engine] Ready.\n");
}


int browser_load_page(const char *url)
{
    printf("[Browser] Loading: %s\n", url);

    char *html = http_get(url);

    if (html == NULL)
    {
        printf("[Browser] Failed to load page.\n");
        return 0;
    }

    html_parse(html);

    render_page();

    return 1;
}
