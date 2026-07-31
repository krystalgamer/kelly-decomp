// Conglomerate definitions extracted by generated one-function shims.

// 0x00312F90 is_a_conglomerate__C12conglomerate
#include "KS/SRC/conglom.h"
bool conglomerate::is_a_conglomerate() const {
    return true;
}

// 0x00312F40 __tf12conglomerate
#include "KS/SRC/rtti.h"
extern "C" void **ConglomerateBaseRtti() __asm__("__tf6entity");
extern "C" void *conglomerate_type[] __asm__("__ti12conglomerate");
extern "C" const char conglomerate_name[];
extern "C" void *conglomerate_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti12conglomerate, 0x005A4140");
__asm__(".equ conglomerate_name, 0x00508848");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **ConglomerateRtti() __asm__("__tf12conglomerate");
void **ConglomerateRtti()
{
    if (!conglomerate_type[0]) {
        ConglomerateBaseRtti();
        __rtti_si(
            conglomerate_type,
            conglomerate_name,
            conglomerate_base_type);
    }
    return conglomerate_type;
}
