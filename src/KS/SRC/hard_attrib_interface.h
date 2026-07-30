#ifndef HARD_ATTRIB_INTERFACE_H
#define HARD_ATTRIB_INTERFACE_H

#include "KS/SRC/entity_interface.h"

class hard_attrib_interface : public entity_interface {
public:
    explicit inline hard_attrib_interface(entity *value) : entity_interface(value) {}
    virtual ~hard_attrib_interface();
    virtual void copy(hard_attrib_interface *other);
};

#endif
