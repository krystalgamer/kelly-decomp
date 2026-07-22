#ifndef KELLY_DECOMP_BONE_SHARED_H
#define KELLY_DECOMP_BONE_SHARED_H

#include "KS/SRC/rtti_shared.h"
#include "KS/SRC/signals_shared.h"

class bone : public signaller {
public:
    virtual ~bone();
    virtual int get_bone_idx();
};

#endif
