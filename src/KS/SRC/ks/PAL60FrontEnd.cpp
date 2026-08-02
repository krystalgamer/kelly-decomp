// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D5740)
// 0x001D5740 OnActivate__13PAL60FrontEnd
struct menu_entry;

struct menu_vtable {
    char padding[0x18];
    short adjustment;
    short padding2;
    void (*set_high)(void *self, menu_entry *entry, bool animate);
};

class PAL60FrontEnd {
    char padding0[0x74];
    menu_vtable *vtable;
    char padding1[0xf0];
    menu_entry *yes;

public:
    void OnActivate();
};

void PAL60FrontEnd::OnActivate() {
    menu_vtable *table = vtable;
    table->set_high(
        (char *)this + table->adjustment,
        yes,
        true
    );
}
#endif

// Source implementation boundary.
// 0x001DE198 Pick__13PAL60FrontEndi
#include "KS/SRC/ks/PAL60FrontEnd.h"

void PAL60FrontEnd::Pick(int arg0) {
}

// 0x001DE1A0 OnTriangle__13PAL60FrontEndi
#include "KS/SRC/ks/PAL60FrontEnd.h"

void PAL60FrontEnd::OnTriangle(int arg0) {
}

// 0x001DE1A8 SetSystem__13PAL60FrontEndP12FEMenuSystem
#include "KS/SRC/ks/PAL60FrontEnd.h"

void PAL60FrontEnd::SetSystem(FEMenuSystem* value) {
    system = value;
}

// 0x001DE140 __tf13PAL60FrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base); extern "C" void **BaseRtti_001DE140() __asm__("__tf11FEMultiMenu"); extern "C" void *type_001DE140[] __asm__("__ti13PAL60FrontEnd"); extern const char name_001DE140[]; extern void *base_type_001DE140[]; __asm__(".equ __rtti_class, 0x003CE2B0"); __asm__(".equ __tf11FEMultiMenu, 0x001D8138"); __asm__(".equ __ti13PAL60FrontEnd, 0x005A2F08"); __asm__(".equ name_001DE140, 0x004DE088"); __asm__(".equ base_type_001DE140, 0x004DDC48"); extern "C" void **Rtti_001DE140() __asm__("__tf13PAL60FrontEnd"); void **Rtti_001DE140() { if (!type_001DE140[0]) { BaseRtti_001DE140(); __rtti_class(type_001DE140, name_001DE140, base_type_001DE140, 1); } return type_001DE140; }
