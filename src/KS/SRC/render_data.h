#ifndef RENDER_DATA_H
#define RENDER_DATA_H

#include "KS/SRC/path.h"
#include "KS/SRC/rect.h"

class entity;

class render_data {
public:
    struct region_info {
        region_node *reg;
        rectf screen_rect;

        inline region_info(region_node *region = 0) : reg(region) {}
    };

    struct entity_info {
        entity *ent;
        float extent;

        inline entity_info(entity *value = 0) : ent(value) {}
    };
};

#endif
