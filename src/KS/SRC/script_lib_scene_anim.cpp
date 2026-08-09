// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00328080)
// 0x00328080 __cl__26slf_scene_anim_kill_anim_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_scene_anim_decl.h"
#include "KS/SRC/wds.h"

__asm__(".equ kill_scene_anim__21world_dynamics_systemUi, 0x002A9058");

__asm__(".equ g_world_ptr, 0x00431A8C");

bool slf_scene_anim_kill_anim_t::operator()(
    vm_stack &stack,
    entry_t entry
) {
    SLF_PARMS;
    g_world_ptr->kill_scene_anim(parms->animation);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328128)
// 0x00328128 __cl__21slf_load_scene_anim_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_scene_anim_decl.h"
#include "KS/SRC/wds.h"

__asm__(".equ load_scene_anim__21world_dynamics_systemRC7stringx, 0x002A3118");

__asm__(".equ g_world_ptr, 0x00431A8C");

bool slf_load_scene_anim_t::operator()(
    vm_stack &stack,
    entry_t entry
) {
    SLF_PARMS;
    g_world_ptr->load_scene_anim(*parms->name);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328030)
// 0x00328030 __tf26slf_scene_anim_kill_anim_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00328030()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00328030[]
    __asm__("__ti26slf_scene_anim_kill_anim_t");
extern "C" const char rtti_name_00328030[];
extern "C" void *rtti_base_type_00328030[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti26slf_scene_anim_kill_anim_t, 0x005A4A60");
__asm__(".equ rtti_name_00328030, 0x0050F6B8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00328030() __asm__("__tf26slf_scene_anim_kill_anim_t");

void **Rtti_00328030()
{
    if (!rtti_type_00328030[0]) {
        RttiBase_00328030();
        __rtti_si(rtti_type_00328030, rtti_name_00328030, rtti_base_type_00328030);
    }
    return rtti_type_00328030;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003280D8)
// 0x003280D8 __tf21slf_load_scene_anim_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_003280D8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_003280D8[]
    __asm__("__ti21slf_load_scene_anim_t");
extern "C" const char rtti_name_003280D8[];
extern "C" void *rtti_base_type_003280D8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti21slf_load_scene_anim_t, 0x005A4A70");
__asm__(".equ rtti_name_003280D8, 0x0050F6D8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_003280D8() __asm__("__tf21slf_load_scene_anim_t");

void **Rtti_003280D8()
{
    if (!rtti_type_003280D8[0]) {
        RttiBase_003280D8();
        __rtti_si(rtti_type_003280D8, rtti_name_003280D8, rtti_base_type_003280D8);
    }
    return rtti_type_003280D8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328180)
// 0x00328180 __tf21slf_play_scene_anim_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00328180()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00328180[]
    __asm__("__ti21slf_play_scene_anim_t");
extern "C" const char rtti_name_00328180[];
extern "C" void *rtti_base_type_00328180[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti21slf_play_scene_anim_t, 0x005A4A80");
__asm__(".equ rtti_name_00328180, 0x0050F6F0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00328180() __asm__("__tf21slf_play_scene_anim_t");

void **Rtti_00328180()
{
    if (!rtti_type_00328180[0]) {
        RttiBase_00328180();
        __rtti_si(rtti_type_00328180, rtti_name_00328180, rtti_base_type_00328180);
    }
    return rtti_type_00328180;
}
#endif
