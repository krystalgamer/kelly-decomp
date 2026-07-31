#ifndef SIGNAL_ANIM_H
#define SIGNAL_ANIM_H

#include "KS/SRC/anim.h"
#include "KS/SRC/rtti.h"

class signal_key {
};

class signal_anim : public anim<signal_key> {
public:
    virtual ~signal_anim();
};

#endif
