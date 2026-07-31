#ifndef LINK_INTERFACE_H
#define LINK_INTERFACE_H

#include "KS/SRC/entity_interface.h"

class link_interface : public bone_interface {
    bone *my_parent;
    bone *my_child;
    bone *my_brother;
    bool link_manages_abs_po;

public:
    explicit inline link_interface(bone *value) : bone_interface(value) {}
    ~link_interface();
    void clear_parent();
    void remove_child(bone *child);

    inline bone *get_parent() const {
        return my_parent;
    }
};

#endif
