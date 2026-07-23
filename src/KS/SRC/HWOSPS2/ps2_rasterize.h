// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003141E0)
// 0x003141E0 __tf8hw_rasta
#include "KS/SRC/rtti_shared.h"
extern "C" void **HwRastaBaseRtti() __asm__("__tf9singleton");
extern "C" void *hw_rasta_type[] __asm__("__ti8hw_rasta");
extern "C" const char hw_rasta_name[];
extern "C" void *hw_rasta_base_type[] __asm__("__ti9singleton");
__asm__(".equ __tf9singleton, 0x00144398");
__asm__(".equ __ti8hw_rasta, 0x005A4220");
__asm__(".equ hw_rasta_name, 0x00508BC8");
__asm__(".equ __ti9singleton, 0x00511FF8");
extern "C" void **HwRastaRtti() __asm__("__tf8hw_rasta");
void **HwRastaRtti()
{
    if (!hw_rasta_type[0]) {
        HwRastaBaseRtti();
        __rtti_si(hw_rasta_type, hw_rasta_name, hw_rasta_base_type);
    }
    return hw_rasta_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00314230)
// 0x00314230 _$_8hw_rasta
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004CE7A8");

struct target_layout {
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_8hw_rasta");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
