#ifndef KELLY_DECOMP_SIGNAL_ANIM_SHARED_H
#define KELLY_DECOMP_SIGNAL_ANIM_SHARED_H

#include "KS/SRC/anim_shared.h"
#include "KS/SRC/rtti_shared.h"

class signal_key {
};

class signal_anim : public anim<signal_key> {
public:
    virtual ~signal_anim();
};

#endif
