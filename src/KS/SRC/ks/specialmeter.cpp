// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0026EC18)
extern "C" void __rtti_si(void **type, const char *name, void **base);
__asm__(".equ __rtti_si, 0x003CE2D8");
extern "C" void **event_recipient_rtti() __asm__("__tf14EventRecipient");
extern "C" void *special_type[] __asm__("__ti12SpecialMeter");
extern "C" const char special_name[] __asm__("special_type_name");
extern "C" void *event_recipient_type[] __asm__("__ti14EventRecipient");
__asm__(".equ __tf14EventRecipient, 0x0035FE90");
__asm__(".equ __ti12SpecialMeter, 0x005A3A50");
__asm__(".equ special_type_name, 0x004E4D78");
__asm__(".equ __ti14EventRecipient, 0x005120A8");

extern "C" void **special_rtti() __asm__("__tf12SpecialMeter");
void **special_rtti()
{
    if (!special_type[0]) {
        event_recipient_rtti();
        __rtti_si(special_type, special_name, event_recipient_type);
    }
    return special_type;
}
#endif


// 0x00250CA8 Reset__12SpecialMeter
#include "KS/SRC/ks/specialmeter.h"

void SpecialMeter::Reset() { fillage = 0.0f; isEnabled = false; trickRegion = 0; isDoingTrick = false; faceLinkTimer = 0.0f; faceLink = 0; specialTime = 0.0f; numPerfects = 0; }


#if defined(KELLY_DECOMP_FUNCTION_00250FB8)
// 0x00250FB8 Increase__12SpecialMeterf
#include "KS/SRC/ks/specialmeter.h"

__asm__(".equ SetFillage__12SpecialMeterf, 0x00251028");
void set_special_fillage(SpecialMeter *meter, float value)
    __asm__("SetFillage__12SpecialMeterf");

void SpecialMeter::Increase(float value)
{
    if (value > 0.0f) {
        void (*set_fillage)(SpecialMeter *, float) = set_special_fillage;
        set_fillage(this, fillage + value);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00250FF0)
// 0x00250FF0 Decrease__12SpecialMeterf
#include "KS/SRC/ks/specialmeter.h"

__asm__(".equ SetFillage__12SpecialMeterf, 0x00251028");
void set_special_fillage(SpecialMeter *meter, float value)
    __asm__("SetFillage__12SpecialMeterf");

void SpecialMeter::Decrease(float value)
{
    if (value > 0.0f) {
        void (*set_fillage)(SpecialMeter *, float) = set_special_fillage;
        set_fillage(this, fillage - value);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00250C20)
// 0x00250C20 __12SpecialMeter
#include "KS/SRC/ks/specialmeter.h"

SpecialMeter::SpecialMeter() {
    playerIdx = 0;
    fillage = 0.0f;
    isEnabled = false;
    trickRegion = 0;
    isDoingTrick = false;
    faceLinkTimer = 0.0f;
    faceLink = 0;
    specialTime = 0.0f;
    numPerfects = 0;
}
#endif
