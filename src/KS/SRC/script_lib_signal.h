// Matching decompilation blocks selected by generated build shims.

#ifndef SCRIPT_LIB_SIGNAL_DECLARATIONS_H
#define SCRIPT_LIB_SIGNAL_DECLARATIONS_H

#pragma interface

#include "KS/SRC/script_library_class.h"
#include "KS/SRC/signals.h"

class slf_signaller_enable_signals_t :
    public script_library_class::function {
public:
    struct parms_t {
        signaller *me;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_signaller_disable_signals_t :
    public script_library_class::function {
public:
    struct parms_t {
        signaller *me;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_signaller_clear_callbacks_t :
    public script_library_class::function {
public:
    struct parms_t {
        signaller *me;
    };

    slf_signaller_clear_callbacks_t(
        script_library_class *owner,
        const char *name);
    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_signaller_clear_callback_t :
    public script_library_class::function {
public:
    struct parms_t {
        signaller *me;
        vm_str_t name;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

#endif

#if defined(KELLY_DECOMP_FUNCTION_00327088)
// 0x00327088 __tf15slc_signaller_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00327088()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_00327088[]
    __asm__("__ti15slc_signaller_t");
extern "C" const char rtti_name_00327088[];
extern "C" void *rtti_base_type_00327088[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti15slc_signaller_t, 0x005A49C0");
__asm__(".equ rtti_name_00327088, 0x0050F5C0");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_00327088() __asm__("__tf15slc_signaller_t");

void **Rtti_00327088()
{
    if (!rtti_type_00327088[0]) {
        RttiBase_00327088();
        __rtti_si(rtti_type_00327088, rtti_name_00327088, rtti_base_type_00327088);
    }
    return rtti_type_00327088;
}
#endif
