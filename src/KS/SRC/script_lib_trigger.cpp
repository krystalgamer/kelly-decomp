// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00328620)
// 0x00328620 _$_26slf_trigger_get_position_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328620(void *self) __asm__("_$_26slf_trigger_get_position_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328620(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328810)
// 0x00328810 _$_31slf_trigger_get_triggered_ent_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328810(void *self) __asm__("_$_31slf_trigger_get_triggered_ent_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328810(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003289D8)
// 0x003289D8 _$_24slf_trigger_set_active_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003289D8(void *self) __asm__("_$_24slf_trigger_set_active_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003289D8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328A48)
// 0x00328A48 __cl__24slf_trigger_set_active_tR8vm_stackQ320script_library_class8function7entry_t
#include "script_lib_trigger_shared.h"
bool slf_trigger_set_active_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->set_active(parms->torf != 0);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328A98)
// 0x00328A98 _$_26slf_create_point_trigger_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328A98(void *self) __asm__("_$_26slf_create_point_trigger_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328A98(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328C88)
// 0x00328C88 _$_24slf_create_box_trigger_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328C88(void *self) __asm__("_$_24slf_create_box_trigger_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328C88(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328E58)
// 0x00328E58 _$_27slf_create_entity_trigger_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328E58(void *self) __asm__("_$_27slf_create_entity_trigger_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328E58(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329030)
// 0x00329030 _$_30slf_trigger_set_use_any_char_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329030(void *self) __asm__("_$_30slf_trigger_set_use_any_char_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329030(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00316B50)
// 0x00316B50 find_instance__C13slc_trigger_tRC7stringx
class stringx;
class trigger;
class trigger_manager { public: trigger *find_instance(const stringx &name); };
extern trigger_manager *g_trigger_manager;
__asm__(".equ g_trigger_manager, 0x00431A88");
__asm__(".equ find_instance__15trigger_managerRC7stringx, 0x0028D7B0");
class slc_trigger_t { public: unsigned int find_instance(const stringx &name) const; };
unsigned int slc_trigger_t::find_instance(const stringx &name) const { trigger *result = g_trigger_manager->find_instance(name); KELLY_DECOMP_COMPILER_BARRIER(); return (unsigned int)result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003290A0)
// 0x003290A0 __cl__30slf_trigger_set_use_any_char_tR8vm_stackQ320script_library_class8function7entry_t
class trigger {
    char padding[0x34];
    bool use_any_char;
public:
    void set_use_any_char(bool value) { use_any_char = value; }
};
class vm_stack { char padding[8]; char *top; public: void *pop(unsigned int size) { top -= size; return top; } };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
#define SLF_PARMS parms_t *parms = (parms_t *)stack.pop(sizeof(parms_t))
#define SLF_DONE return true
class slf_trigger_set_use_any_char_t : public script_library_class::function {
public:
    struct parms_t { trigger *me; float u; };
    bool operator()(vm_stack &stack, entry_t entry);
};
bool slf_trigger_set_use_any_char_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->set_use_any_char(parms->u != 0.0f);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328640)
// 0x00328640 __tf26slf_trigger_get_position_t
#include "KS/SRC/rtti_shared.h"

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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328830)
// 0x00328830 __tf31slf_trigger_get_triggered_ent_t
#include "KS/SRC/rtti_shared.h"

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
#endif

#if defined(KELLY_DECOMP_FUNCTION_003289F8)
// 0x003289F8 __tf24slf_trigger_set_active_t
#include "KS/SRC/rtti_shared.h"

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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328AB8)
// 0x00328AB8 __tf26slf_create_point_trigger_t
#include "KS/SRC/rtti_shared.h"

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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328CA8)
// 0x00328CA8 __tf24slf_create_box_trigger_t
#include "KS/SRC/rtti_shared.h"

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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328E78)
// 0x00328E78 __tf27slf_create_entity_trigger_t
#include "KS/SRC/rtti_shared.h"

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
#endif
