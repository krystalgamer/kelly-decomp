// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00319908)
// 0x00319908 __10script_mfg
#include "KS/SRC/script_lib_mfg.h"

__asm__(".equ __9signaller, 0x0034CC70");

script_mfg::script_mfg() : signaller() {}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032F008)
// 0x0032F008 __tf22slf_mfg_raise_signal_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032F008()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032F008[]
    __asm__("__ti22slf_mfg_raise_signal_t");
extern "C" const char rtti_name_0032F008[];
extern "C" void *rtti_base_type_0032F008[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti22slf_mfg_raise_signal_t, 0x005A5060");
__asm__(".equ rtti_name_0032F008, 0x005002A8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032F008() __asm__("__tf22slf_mfg_raise_signal_t");

void **Rtti_0032F008()
{
    if (!rtti_type_0032F008[0]) {
        RttiBase_0032F008();
        __rtti_si(rtti_type_0032F008, rtti_name_0032F008, rtti_base_type_0032F008);
    }
    return rtti_type_0032F008;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032F058)
// 0x0032F058 __cl__22slf_mfg_raise_signal_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_mfg.h"

bool slf_mfg_raise_signal_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry
)
{
    SLF_PARMS;
    int sig = (int)parms->sig;
    if (sig >= 0 && sig < 32)
        parms->me->raise_signal(sig);
    SLF_DONE;
}
#endif
