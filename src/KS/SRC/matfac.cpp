// mat_fac definitions extracted by generated one-function shims.


// 0x002BD170 get_anim_length__C7mat_fac
#include "KS/SRC/matfac.h"

int mat_fac::get_anim_length() const {
    return 1;
}

// 0x002BD178 is_translucent__C7mat_fac
#include "KS/SRC/matfac.h"

bool mat_fac::is_translucent() const {
    return material.MapBlendMode != 0 &&
        material.MapBlendMode != 1;
}

// 0x002BD188 has_texture__C7mat_fac
#include "KS/SRC/matfac.h"

bool mat_fac::has_texture() const {
    return material.Map != 0;
}

// 0x002BD198 get_original_width__C7mat_faci5map_e
#include "KS/SRC/matfac.h"

int mat_fac::get_original_width(int frame, map_e map) const
{
    if (!material.Map)
        return 0;
    return material.Map->Width;
}

// 0x002BD1B8 get_original_height__C7mat_faci5map_e
#include "KS/SRC/matfac.h"

int mat_fac::get_original_height(int frame, map_e map) const
{
    if (!material.Map)
        return 0;
    return material.Map->Height;
}

// 0x002BD1D8 set_blend_mode__7mat_facUii
#include "KS/SRC/matfac.h"

void mat_fac::set_blend_mode(unsigned int mode, int map)
{
    material.MapBlendMode = mode;
    if (mode == 0 || mode == 1)
        material.Flags &= ~1u;
    else
        material.Flags |= 1u;
}
