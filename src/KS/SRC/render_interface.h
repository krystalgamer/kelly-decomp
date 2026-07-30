#ifndef RENDER_INTERFACE_H
#define RENDER_INTERFACE_H

#include "KS/SRC/entity_interface.h"

class render_interface : public entity_interface {
    int type;
    void *mesh;
    void *billboard;

public:
    explicit inline render_interface(entity *value)
        : entity_interface(value), type(0), mesh(0), billboard(0) {}
    void render();
};

#endif
