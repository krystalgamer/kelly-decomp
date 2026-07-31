// Matching decompilation blocks selected by generated build shims.


// 0x00300088 __tf18particle_generator
#include "KS/SRC/rtti.h"
extern "C" void **ParticleGeneratorBaseRtti() __asm__("__tf6entity");
extern "C" void *particle_generator_type[] __asm__("__ti18particle_generator");
extern "C" const char particle_generator_name[];
extern "C" void *particle_generator_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti18particle_generator, 0x005A4060");
__asm__(".equ particle_generator_name, 0x004F4CE0");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **ParticleGeneratorRtti() __asm__("__tf18particle_generator");
void **ParticleGeneratorRtti()
{
    if (!particle_generator_type[0]) {
        ParticleGeneratorBaseRtti();
        __rtti_si(
            particle_generator_type,
            particle_generator_name,
            particle_generator_base_type
        );
    }
    return particle_generator_type;
}


// 0x003000D8 is_a_particle_generator__C18particle_generator
#include "KS/SRC/particle.h"
bool particle_generator::is_a_particle_generator() const {
    return true;
}

// 0x003000E0 get_distance_fade_ok__C18particle_generator
#include "KS/SRC/particle.h"
bool particle_generator::get_distance_fade_ok() const {
    return false;
}

// 0x00385388 _GLOBAL_$I$TRAIL_StaticInit__Fv
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$TRAIL_StaticInit__Fv");
__asm__(".equ __static_initialization_and_destruction_0, 0x00382368");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x003853A8 _GLOBAL_$D$TRAIL_StaticInit__Fv
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$TRAIL_StaticInit__Fv");
__asm__(".equ __static_initialization_and_destruction_0, 0x00382368");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x003000E8 is_active__C18particle_generator
#include "KS/SRC/particle.h"
bool particle_generator::is_active() const { return is_visible(); }

// 0x00300148 frame_done__18particle_generator
#include "KS/SRC/particle.h"
void particle_generator::frame_done() { last_position = get_abs_position(); }

// 0x00300170 possibly_active__C18particle_generator
#include "KS/SRC/particle.h"
bool particle_generator::possibly_active() const { return is_still_visible(); }

// 0x00300198 possibly_aging__C18particle_generator
#include "KS/SRC/particle.h"
bool particle_generator::possibly_aging() const { return is_still_visible(); }

// 0x00300110 get_last_position__C18particle_generator
#include "KS/SRC/particle.h"
vector3d particle_generator::get_last_position() const
{
    return last_position_valid ? last_position : get_abs_position();
}
