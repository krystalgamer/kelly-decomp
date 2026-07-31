#ifndef TERRAIN_H
#define TERRAIN_H

class region_node;

class sector {
    region_node *my_region;

public:
    sector() : my_region(0) {}
    explicit sector(region_node *node) : my_region(node) {}
    region_node *get_region() const {
        return my_region;
    }
};

#endif
