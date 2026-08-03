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
struct nglMaterial {
    unsigned int Flags;
    char padding[0x34];
    unsigned int MapBlendMode;
};

class mat_fac {
    nglMaterial material;

public:
    void set_blend_mode(unsigned int mode, int map);
};

void mat_fac::set_blend_mode(unsigned int mode, int map)
{
    material.MapBlendMode = mode;
    if (mode == 0 || mode == 1)
        material.Flags &= ~1u;
    else
        material.Flags |= 1u;
}

// 0x002BC998 _$_7mat_fac
extern "C" void release_texture(void *)
    __asm__("nglReleaseTexture__FP10nglTexture");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
extern const char mat_fac_vtable[];
__asm__(".equ nglReleaseTexture__FP10nglTexture, 0x0039C820");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ mat_fac_vtable, 0x004F4808");
struct mat_fac_layout {
    char padding[4];
    void *map;
    char padding2[0x100];
    const void *vtable;
};
extern "C" void destroy_mat_fac(
    mat_fac_layout *self,int flags
) __asm__("_$_7mat_fac");
void destroy_mat_fac(mat_fac_layout *self,int flags) {
    self->vtable=mat_fac_vtable;
    if (self->map) release_texture(self->map);
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
