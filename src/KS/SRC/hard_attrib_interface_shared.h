#ifndef KELLY_DECOMP_HARD_ATTRIB_INTERFACE_SHARED_H
#define KELLY_DECOMP_HARD_ATTRIB_INTERFACE_SHARED_H

#include "KS/SRC/entity_interface_shared.h"

class hard_attrib_interface : public entity_interface {
public:
    explicit hard_attrib_interface(entity *value) : entity_interface(value) {}
    virtual ~hard_attrib_interface();
    virtual void copy(hard_attrib_interface *other);
};

#endif
