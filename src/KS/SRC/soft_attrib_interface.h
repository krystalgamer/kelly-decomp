#ifndef SOFT_ATTRIB_INTERFACE_H
#define SOFT_ATTRIB_INTERFACE_H

#include "KS/SRC/entity_interface.h"

class soft_attrib_interface : public entity_interface {
protected:
    int value;

public:
    explicit inline soft_attrib_interface(entity *owner)
        : entity_interface(owner), value(0) {}
    virtual ~soft_attrib_interface();
    virtual float get_soft_attrib_num(pstring &name) const;
    virtual const pstring get_soft_attrib_str(pstring &name) const;
};

class character_soft_attrib_interface : public soft_attrib_interface {
public:
    explicit inline character_soft_attrib_interface(entity *owner)
        : soft_attrib_interface(owner) {}
    virtual ~character_soft_attrib_interface();
    virtual const pstring get_soft_attrib_str(pstring &name) const;
};

#endif
