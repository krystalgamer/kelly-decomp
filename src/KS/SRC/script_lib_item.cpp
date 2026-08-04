// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/item.h"
#include "KS/SRC/script_library_class.h"

#pragma interface

// 0x00327620 __cl__20slf_item_set_count_tR8vm_stackQ320script_library_class8function7entry_t
struct item_set_count_vtable {
    char padding[0x640];
    short adjustment;
    short padding2;
    void (*set_count)(void *self, int count);
};
struct item_set_count_layout {
    char padding[8];
    item_set_count_vtable *vtable;
};
inline void set_script_item_count(item *value, int count) {
    item_set_count_layout *layout =
        (item_set_count_layout *)value;
    item_set_count_vtable *table = layout->vtable;
    table->set_count(
        (char *)layout + table->adjustment,
        count);
}
class slf_item_set_count_t :
    public script_library_class::function {
public:
    struct parms_t {
        item *me;
        vm_num_t count;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

bool slf_item_set_count_t::operator()(vm_stack &stack, entry_t entry) {
    SLF_PARMS;
    set_script_item_count(parms->me, parms->count);
    SLF_DONE;
}

// 0x003275D0 __tf20slf_item_set_count_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_003275D0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_003275D0[]
    __asm__("__ti20slf_item_set_count_t");
extern "C" const char rtti_name_003275D0[];
extern "C" void *rtti_base_type_003275D0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti20slf_item_set_count_t, 0x005A4A10");
__asm__(".equ rtti_name_003275D0, 0x0050F648");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_003275D0() __asm__("__tf20slf_item_set_count_t");

void **Rtti_003275D0()
{
    if (!rtti_type_003275D0[0]) {
        RttiBase_003275D0();
        __rtti_si(rtti_type_003275D0, rtti_name_003275D0, rtti_base_type_003275D0);
    }
    return rtti_type_003275D0;
}

// 0x00327688 __tf20slf_item_get_count_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00327688()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00327688[]
    __asm__("__ti20slf_item_get_count_t");
extern "C" const char rtti_name_00327688[];
extern "C" void *rtti_base_type_00327688[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti20slf_item_get_count_t, 0x005A4A20");
__asm__(".equ rtti_name_00327688, 0x0050F660");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00327688() __asm__("__tf20slf_item_get_count_t");

void **Rtti_00327688()
{
    if (!rtti_type_00327688[0]) {
        RttiBase_00327688();
        __rtti_si(rtti_type_00327688, rtti_name_00327688, rtti_base_type_00327688);
    }
    return rtti_type_00327688;
}

// 0x00327870 __tf17slf_create_item_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00327870()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00327870[]
    __asm__("__ti17slf_create_item_t");
extern "C" const char rtti_name_00327870[];
extern "C" void *rtti_base_type_00327870[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti17slf_create_item_t, 0x005A4A30");
__asm__(".equ rtti_name_00327870, 0x0050F678");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00327870() __asm__("__tf17slf_create_item_t");

void **Rtti_00327870()
{
    if (!rtti_type_00327870[0]) {
        RttiBase_00327870();
        __rtti_si(rtti_type_00327870, rtti_name_00327870, rtti_base_type_00327870);
    }
    return rtti_type_00327870;
}

// 0x00327CB8 __tf13slf_to_item_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00327CB8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00327CB8[]
    __asm__("__ti13slf_to_item_t");
extern "C" const char rtti_name_00327CB8[];
extern "C" void *rtti_base_type_00327CB8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti13slf_to_item_t, 0x005A4A40");
__asm__(".equ rtti_name_00327CB8, 0x0050F690");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00327CB8() __asm__("__tf13slf_to_item_t");

void **Rtti_00327CB8()
{
    if (!rtti_type_00327CB8[0]) {
        RttiBase_00327CB8();
        __rtti_si(rtti_type_00327CB8, rtti_name_00327CB8, rtti_base_type_00327CB8);
    }
    return rtti_type_00327CB8;
}
