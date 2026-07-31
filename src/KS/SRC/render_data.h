#ifndef RENDER_DATA_H
#define RENDER_DATA_H

#include "KS/SRC/rect.h"

class region_node;

class render_data {
public:
    struct region_info {
        region_node *reg;
        rectf screen_rect;

        inline region_info(region_node *region = 0) : reg(region) {}
    };
};

#endif
