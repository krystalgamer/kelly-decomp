#ifndef KELLY_DECOMP_OWNERSHIP_INTERFACE_SHARED_H
#define KELLY_DECOMP_OWNERSHIP_INTERFACE_SHARED_H

#include "KS/SRC/entity_interface_shared.h"

class owner_interface : public entity_interface {
    entity *my_slave;

public:
    explicit owner_interface(entity *value) : entity_interface(value), my_slave(0) {}
};

class slave_interface : public entity_interface {
    entity *my_owner;
    entity *next_slave;

public:
    explicit slave_interface(entity *value)
        : entity_interface(value), my_owner(0), next_slave(0) {}
};

#endif
