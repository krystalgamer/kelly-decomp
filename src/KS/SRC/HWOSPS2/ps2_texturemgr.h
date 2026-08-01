#ifndef PS2_TEXTUREMGR_H
#define PS2_TEXTUREMGR_H

#pragma interface

#include "KS/SRC/singleton.h"

class hw_texture_mgr : public singleton {
public:
    hw_texture_mgr();
    virtual ~hw_texture_mgr();

    void unload_all_textures();
};

#endif
