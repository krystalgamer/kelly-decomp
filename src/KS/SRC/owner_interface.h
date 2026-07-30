#ifndef OWNER_INTERFACE_H
#define OWNER_INTERFACE_H

#include "KS/SRC/entity_interface.h"

class owner_interface : public entity_interface {
    entity *my_slave;

public:
    explicit inline owner_interface(entity *value) : entity_interface(value), my_slave(0) {}
    inline const entity *get_first_slave() const { return my_slave; }
    void add_slave(entity *value);
    void remove_slave(entity *value);
};

#endif
