#ifndef KELLY_DECOMP_ENTITY_INTERFACE_SHARED_H
#define KELLY_DECOMP_ENTITY_INTERFACE_SHARED_H

#include "KS/SRC/rtti_shared.h"

class entity;
class bone;

class generic_interface {
public:
    virtual ~generic_interface();
};

class entity_interface : public generic_interface {
protected:
    entity *my_entity;

public:
    entity_interface() : my_entity(0) {}
    explicit inline entity_interface(entity *value) : my_entity(value) {}
    virtual ~entity_interface();
};

class bone_interface : public generic_interface {
protected:
    bone *my_bone;

public:
    explicit inline bone_interface(bone *value) : my_bone(value) {}
    virtual ~bone_interface();
};

#endif
