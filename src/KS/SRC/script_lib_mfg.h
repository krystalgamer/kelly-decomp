#ifndef SCRIPT_LIB_MFG_H
#define SCRIPT_LIB_MFG_H

#pragma interface

#include "KS/SRC/signals.h"

class script_mfg : public signaller {
public:
    script_mfg();
    virtual ~script_mfg();

protected:
    virtual const char *get_signal_name(unsigned short index) const;
};

#endif


#if defined(KELLY_DECOMP_FUNCTION_0031D9B0)
// 0x0031D9B0 __tf10script_mfg
#include "KS/SRC/rtti.h"
extern "C" void **ScriptMfgBaseRtti() __asm__("__tf9signaller");
extern "C" void *script_mfg_type[] __asm__("__ti10script_mfg");
extern "C" const char script_mfg_name[];
extern "C" void *script_mfg_base_type[] __asm__("__ti9signaller");
__asm__(".equ __tf9signaller, 0x0035FBA8");
__asm__(".equ __ti10script_mfg, 0x005A4250");
__asm__(".equ script_mfg_name, 0x0050E8C8");
__asm__(".equ __ti9signaller, 0x00512028");
extern "C" void **ScriptMfgRtti() __asm__("__tf10script_mfg");
void **ScriptMfgRtti()
{
    if (!script_mfg_type[0]) {
        ScriptMfgBaseRtti();
        __rtti_si(script_mfg_type, script_mfg_name, script_mfg_base_type);
    }
    return script_mfg_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031DAC0)
// 0x0031DAC0 __tf9slc_mfg_t
#include "KS/SRC/rtti.h"
extern "C" void **SlcMfgBaseRtti() __asm__("__tf20script_library_class");
extern "C" void *slc_mfg_type[] __asm__("__ti9slc_mfg_t");
extern "C" const char slc_mfg_name[];
extern "C" void *slc_mfg_base_type[] __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti9slc_mfg_t, 0x005A4260");
__asm__(".equ slc_mfg_name, 0x0050E8D8");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **SlcMfgRtti() __asm__("__tf9slc_mfg_t");
void **SlcMfgRtti()
{
    if (!slc_mfg_type[0]) {
        SlcMfgBaseRtti();
        __rtti_si(slc_mfg_type, slc_mfg_name, slc_mfg_base_type);
    }
    return slc_mfg_type;
}
#endif
