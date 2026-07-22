#ifndef KELLY_DECOMP_LINK_INTERFACE_SHARED_H
#define KELLY_DECOMP_LINK_INTERFACE_SHARED_H

#include "KS/SRC/entity_interface_shared.h"

class link_interface : public bone_interface {
    bone *my_parent;
    bone *my_child;
    bone *my_brother;
    bool link_manages_abs_po;

public:
    explicit link_interface(bone *value) : bone_interface(value) {}
    ~link_interface();
};

#endif
