#include <stdio.h>

#include "browser.h"

#include "core/browser_engine.h"

#include "network/http_client.h"

#include "parser/html_parser.h"

#include "renderer/render_engine.h"

#include "tabs/tab_manager.h"

#include "download/download_manager.h"

#include "bookmark/bookmark_manager.h"

#include "private/private_mode.h"



void browser_init(void)
{
    printf("=================================\n");
    printf("        Glass Browser             \n");
    printf("=================================\n");


    printf("[Browser] Initializing modules...\n");


    browser_engine_init();

    http_init();

    html_parser_init();

    renderer_init();

    tab_manager_init();

    download_manager_init();

    bookmark_manager_init();

    private_mode_init();


    printf("[Browser] All modules ready.\n");
}



int browser_open(const char *url)
{
    printf("[Browser] Opening %s\n", url);


    int tab = tab_create(url);


    if (tab < 0)
    {
        return 0;
    }


    private_history_add(url);


    char *html = http_get(url);


    if (html == NULL)
    {
        return 0;
    }


    html_node_t *page = html_parse(html);


    if (page == NULL)
    {
        return 0;
    }


    render_page(page);


    html_free(page);


    return 1;
}



void browser_shutdown(void)
{
    http_close();

    renderer_close();

    private_mode_stop();


    printf("[Browser] Shutdown complete.\n");
}
