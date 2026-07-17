#ifndef RENDER_ENGINE_H
#define RENDER_ENGINE_H

#include "../parser/html_parser.h"

void renderer_init(void);

void render_page(html_node_t *node);

void renderer_close(void);

#endif
