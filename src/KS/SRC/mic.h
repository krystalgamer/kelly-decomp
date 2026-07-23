// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B84E0)
// 0x002B84E0 _$_3mic
extern "C" void EntityDtor(void *self) __asm__("_$_6entity");
extern "C" void MicDtor(void *self) __asm__("_$_3mic");
__asm__(".equ _$_6entity, 0x001298C8");
void MicDtor(void *self) { EntityDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
#if defined(KELLY_DECOMP_FUNCTION_002B8500)
#include "KS/SRC/rtti_shared.h"
#include "KS/SRC/beam_shared.h"

extern "C" void **mic_base_rtti() __asm__("__tf6entity");
extern "C" void *mic_type[] __asm__("__ti3mic");
extern "C" const char mic_name[];
extern "C" void *mic_base_type[] __asm__("__ti6entity");

__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti3mic, 0x005A3DA0");
__asm__(".equ mic_name, 0x004FE488");
__asm__(".equ __ti6entity, 0x005A27C8");

// 0x002B8500 __tf3mic
extern "C" void **mic_rtti() __asm__("__tf3mic");
void **mic_rtti()
{
    if (!mic_type[0]) {
        mic_base_rtti();
        __rtti_si(mic_type, mic_name, mic_base_type);
    }
    return mic_type;
}
#endif
