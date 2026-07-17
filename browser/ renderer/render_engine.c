#include <stdio.h>

#include "render_engine.h"


static int renderer_ready = 0;


void renderer_init(void)
{
    printf("[Renderer] Initializing rendering engine...\n");

    renderer_ready = 1;

    printf("[Renderer] Ready.\n");
}


void render_page(html_node_t *node)
{
    if (!renderer_ready)
    {
        printf("[Renderer] Renderer not initialized.\n");
        return;
    }


    if (node == NULL)
    {
        printf("[Renderer] Empty document.\n");
        return;
    }


    printf("[Renderer] Rendering page...\n");


    printf("---------------------------------\n");
    printf("TAG: %s\n", node->tag);
    printf("CONTENT:\n%s\n", node->text);
    printf("---------------------------------\n");


    /*
     * Future:
     * - Layout engine
     * - CSS rendering
     * - Font engine
     * - Graphics pipeline
     * - GPU acceleration
     */


    printf("[Renderer] Page rendered.\n");
}



void renderer_close(void)
{
    renderer_ready = 0;

    printf("[Renderer] Closed.\n");
}
