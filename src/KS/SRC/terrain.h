#ifndef TERRAIN_H
#define TERRAIN_H

#include "KS/SRC/hyperplane.h"

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

class partition3 : public hyperplane<vector3d> {
    sector *my_sector;

public:
    partition3();
    sector *get_sector() const { return my_sector; }
};

#endif
