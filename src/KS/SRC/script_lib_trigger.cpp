// Matching decompilation blocks selected by generated build shims.


// 0x00328A48 __cl__24slf_trigger_set_active_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_trigger.h"
bool slf_trigger_set_active_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->set_active(parms->torf != 0);
    SLF_DONE;
}

// 0x00316B50 find_instance__C13slc_trigger_tRC7stringx
#include "KS/SRC/script_lib_trigger.h"

unsigned int slc_trigger_t::find_instance(const stringx &name) const { return (unsigned int)g_trigger_manager->find_instance(name); }

// 0x003290A0 __cl__30slf_trigger_set_use_any_char_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_trigger.h"

bool slf_trigger_set_use_any_char_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->set_use_any_char(parms->value != 0.0f);
    SLF_DONE;
}

// 0x00328640 __tf26slf_trigger_get_position_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00328640()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00328640[]
    __asm__("__ti26slf_trigger_get_position_t");
extern "C" const char rtti_name_00328640[];
extern "C" void *rtti_base_type_00328640[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti26slf_trigger_get_position_t, 0x005A4AE0");
__asm__(".equ rtti_name_00328640, 0x0050F7B8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00328640() __asm__("__tf26slf_trigger_get_position_t");

void **Rtti_00328640()
{
    if (!rtti_type_00328640[0]) {
        RttiBase_00328640();
        __rtti_si(rtti_type_00328640, rtti_name_00328640, rtti_base_type_00328640);
    }
    return rtti_type_00328640;
}

// 0x00328830 __tf31slf_trigger_get_triggered_ent_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00328830()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00328830[]
    __asm__("__ti31slf_trigger_get_triggered_ent_t");
extern "C" const char rtti_name_00328830[];
extern "C" void *rtti_base_type_00328830[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti31slf_trigger_get_triggered_ent_t, 0x005A4AF0");
__asm__(".equ rtti_name_00328830, 0x0050F7D8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00328830() __asm__("__tf31slf_trigger_get_triggered_ent_t");

void **Rtti_00328830()
{
    if (!rtti_type_00328830[0]) {
        RttiBase_00328830();
        __rtti_si(rtti_type_00328830, rtti_name_00328830, rtti_base_type_00328830);
    }
    return rtti_type_00328830;
}

// 0x003289F8 __tf24slf_trigger_set_active_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_003289F8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_003289F8[]
    __asm__("__ti24slf_trigger_set_active_t");
extern "C" const char rtti_name_003289F8[];
extern "C" void *rtti_base_type_003289F8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti24slf_trigger_set_active_t, 0x005A4B00");
__asm__(".equ rtti_name_003289F8, 0x0050F800");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_003289F8() __asm__("__tf24slf_trigger_set_active_t");

void **Rtti_003289F8()
{
    if (!rtti_type_003289F8[0]) {
        RttiBase_003289F8();
        __rtti_si(rtti_type_003289F8, rtti_name_003289F8, rtti_base_type_003289F8);
    }
    return rtti_type_003289F8;
}

// 0x00328AB8 __tf26slf_create_point_trigger_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00328AB8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00328AB8[]
    __asm__("__ti26slf_create_point_trigger_t");
extern "C" const char rtti_name_00328AB8[];
extern "C" void *rtti_base_type_00328AB8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti26slf_create_point_trigger_t, 0x005A4B10");
__asm__(".equ rtti_name_00328AB8, 0x0050F820");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00328AB8() __asm__("__tf26slf_create_point_trigger_t");

void **Rtti_00328AB8()
{
    if (!rtti_type_00328AB8[0]) {
        RttiBase_00328AB8();
        __rtti_si(rtti_type_00328AB8, rtti_name_00328AB8, rtti_base_type_00328AB8);
    }
    return rtti_type_00328AB8;
}

// 0x00328CA8 __tf24slf_create_box_trigger_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00328CA8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00328CA8[]
    __asm__("__ti24slf_create_box_trigger_t");
extern "C" const char rtti_name_00328CA8[];
extern "C" void *rtti_base_type_00328CA8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti24slf_create_box_trigger_t, 0x005A4B20");
__asm__(".equ rtti_name_00328CA8, 0x0050F840");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00328CA8() __asm__("__tf24slf_create_box_trigger_t");

void **Rtti_00328CA8()
{
    if (!rtti_type_00328CA8[0]) {
        RttiBase_00328CA8();
        __rtti_si(rtti_type_00328CA8, rtti_name_00328CA8, rtti_base_type_00328CA8);
    }
    return rtti_type_00328CA8;
}

// 0x00328E78 __tf27slf_create_entity_trigger_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00328E78()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00328E78[]
    __asm__("__ti27slf_create_entity_trigger_t");
extern "C" const char rtti_name_00328E78[];
extern "C" void *rtti_base_type_00328E78[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti27slf_create_entity_trigger_t, 0x005A4B30");
__asm__(".equ rtti_name_00328E78, 0x0050F860");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00328E78() __asm__("__tf27slf_create_entity_trigger_t");

void **Rtti_00328E78()
{
    if (!rtti_type_00328E78[0]) {
        RttiBase_00328E78();
        __rtti_si(rtti_type_00328E78, rtti_name_00328E78, rtti_base_type_00328E78);
    }
    return rtti_type_00328E78;
}

// 0x00329050 __tf30slf_trigger_set_use_any_char_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00329050()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00329050[]
    __asm__("__ti30slf_trigger_set_use_any_char_t");
extern "C" const char rtti_name_00329050[];
extern "C" void *rtti_base_type_00329050[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti30slf_trigger_set_use_any_char_t, 0x005A4B40");
__asm__(".equ rtti_name_00329050, 0x0050F880");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00329050() __asm__("__tf30slf_trigger_set_use_any_char_t");

void **Rtti_00329050()
{
    if (!rtti_type_00329050[0]) {
        RttiBase_00329050();
        __rtti_si(rtti_type_00329050, rtti_name_00329050, rtti_base_type_00329050);
    }
    return rtti_type_00329050;
}

// Source implementation boundary.
// 0x003285C8 __tf13slc_trigger_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_003285C8()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_003285C8[]
    __asm__("__ti13slc_trigger_t");
extern "C" const char rtti_name_003285C8[];
extern "C" void *rtti_base_type_003285C8[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti13slc_trigger_t, 0x005A4AD0");
__asm__(".equ rtti_name_003285C8, 0x0050F7A8");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_003285C8() __asm__("__tf13slc_trigger_t");

void **Rtti_003285C8()
{
    if (!rtti_type_003285C8[0]) {
        RttiBase_003285C8();
        __rtti_si(rtti_type_003285C8, rtti_name_003285C8, rtti_base_type_003285C8);
    }
    return rtti_type_003285C8;
}
