#ifndef PS2_RASTERIZE_H
#define PS2_RASTERIZE_H

#pragma interface

#include "KS/SRC/singleton.h"

class hw_rasta : public singleton {
private:
    hw_rasta();
    void init_ps2_gfx();

public:
    virtual ~hw_rasta();
};

#endif
