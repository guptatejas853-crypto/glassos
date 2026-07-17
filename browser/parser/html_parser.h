#ifndef HTML_PARSER_H
#define HTML_PARSER_H

#define MAX_TAG_NAME 32
#define MAX_TEXT_SIZE 256


typedef struct
{
    char tag[MAX_TAG_NAME];
    char text[MAX_TEXT_SIZE];

} html_node_t;


void html_parser_init(void);

html_node_t *html_parse(const char *html);

void html_free(html_node_t *node);


#endif
