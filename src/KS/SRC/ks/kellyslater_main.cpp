// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00225288) || \
    defined(KELLY_DECOMP_FUNCTION_002252D0)
#include "KS/SRC/ks/kellyslater_main_shared.h"
#endif

#include "decomp_annotations.h"

#if defined(KELLY_DECOMP_FUNCTION_00225288)
asm(".equ WATER_Create__Fi, 0x0036E8C8");
asm(".equ WATER_ListAdd__Fv, 0x0036ECB0");
asm(".equ particle_enable, 0x00424CC4");
asm(".equ ks_fx_draw__Fi, 0x003699B0");

// 0x00225288 render_kelly_slater_stuff__21world_dynamics_systemi
void world_dynamics_system::render_kelly_slater_stuff(const int heroIdx)
{
    WATER_Create(heroIdx);
    WATER_ListAdd();
    if (particle_enable)
    {
        ks_fx_draw(heroIdx);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002252D0)
// 0x002252D0 process_kelly_slater_stuff__21world_dynamics_system
void world_dynamics_system::process_kelly_slater_stuff() {
}
#endif
