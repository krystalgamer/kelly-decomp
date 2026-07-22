#ifndef KELLY_DECOMP_ENTITY_INTERFACES_SHARED_H
#define KELLY_DECOMP_ENTITY_INTERFACES_SHARED_H

#include "KS/SRC/entity_interface_shared.h"

class physical_interface : public entity_interface {
    unsigned int flags;
    float mass;
    float volume;

public:
    explicit physical_interface(entity *value) : entity_interface(value) {}
};

class render_interface : public entity_interface {
    int type;
    void *mesh;
    void *billboard;

public:
    explicit render_interface(entity *value) : entity_interface(value) {}
};

class skeleton_interface : public entity_interface {
    void *abs_po;
    void *handed_abs_po;
    int po_count;

public:
    explicit skeleton_interface(entity *value) : entity_interface(value) {}
    virtual ~skeleton_interface();
};

class soft_attrib_interface : public entity_interface {
public:
    explicit soft_attrib_interface(entity *value) : entity_interface(value) {}
    virtual ~soft_attrib_interface();
};

class animation_interface : public entity_interface {
    unsigned int flags;

public:
    explicit animation_interface(entity *value) : entity_interface(value) {}
    virtual ~animation_interface();
};

class script_data_interface : public entity_interface {
    float numbers[8];

public:
    explicit script_data_interface(entity *value) : entity_interface(value) {}
    virtual ~script_data_interface();
};

#endif
