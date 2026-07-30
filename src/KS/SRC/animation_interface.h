#ifndef ANIMATION_INTERFACE_H
#define ANIMATION_INTERFACE_H

#include "KS/SRC/entity_interface.h"

class animation_interface : public entity_interface {
    unsigned int flags;

public:
    enum {
        ANIM_IFC_REVERSE = 0x00000001
    };

    explicit inline animation_interface(entity *value)
        : entity_interface(value), flags(0) {}
    virtual ~animation_interface();

    inline bool is_flagged(unsigned int flag) const {
        return (flags & flag) != 0;
    }
    inline void set_flag(unsigned int flag, bool enabled = true) {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
};

#endif
