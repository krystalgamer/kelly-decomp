#ifndef SLAVE_INTERFACE_H
#define SLAVE_INTERFACE_H

#include "KS/SRC/entity_interface.h"

class owner_interface;

class slave_interface : public entity_interface {
    entity *my_owner;
    entity *next_slave;

    void set_owner(entity *owner);
    void clear_owner();
    inline void set_next_slave(entity *value) { next_slave = value; }

public:
    explicit inline slave_interface(entity *value)
        : entity_interface(value), my_owner(0), next_slave(0) {}
    inline const entity *get_owner() const { return my_owner; }
    inline const entity *get_next_slave() const { return next_slave; }

    friend class owner_interface;
};

#endif
