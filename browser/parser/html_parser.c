#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "html_parser.h"


static int parser_ready = 0;


void html_parser_init(void)
{
    printf("[HTML Parser] Initializing...\n");

    parser_ready = 1;

    printf("[HTML Parser] Ready.\n");
}


html_node_t *html_parse(const char *html)
{
    if (!parser_ready)
    {
        printf("[HTML Parser] Parser not initialized.\n");
        return NULL;
    }


    if (html == NULL)
    {
        printf("[HTML Parser] Empty HTML.\n");
        return NULL;
    }


    printf("[HTML Parser] Parsing HTML data...\n");


    html_node_t *node = malloc(sizeof(html_node_t));


    if (node == NULL)
    {
        printf("[HTML Parser] Memory allocation failed.\n");
        return NULL;
    }


    memset(node, 0, sizeof(html_node_t));


    strcpy(node->tag, "html");


    strncpy(node->text,
            html,
            MAX_TEXT_SIZE - 1);


    printf("[HTML Parser] Document parsed.\n");


    return node;
}



void html_free(html_node_t *node)
{
    if (node != NULL)
    {
        free(node);
    }
}
