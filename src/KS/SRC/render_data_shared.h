#ifndef KELLY_DECOMP_RENDER_DATA_SHARED_H
#define KELLY_DECOMP_RENDER_DATA_SHARED_H

class region_node;

class vector2d {
public:
    float x;
    float y;

    inline vector2d &operator=(const vector2d &other) {
        x = other.x;
        y = other.y;
        return *this;
    }
};

class rectf {
public:
    vector2d tl;
    vector2d br;
};

class render_data {
public:
    struct region_info {
        region_node *reg;
        rectf screen_rect;

        inline region_info(region_node *region = 0) : reg(region) {}
    };
};

#endif
