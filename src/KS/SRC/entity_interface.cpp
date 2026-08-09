// entity_interface definitions extracted by generated one-function shims.

#include "KS/SRC/entity_interface.h"

// 0x00146490 __tf14bone_interface
extern "C" void **bone_ifc_base_rtti() __asm__("__tf17generic_interface");
extern "C" void *bone_ifc_base_type[] __asm__("__ti17generic_interface");
extern "C" void *bone_ifc_type[] __asm__("__ti14bone_interface");
extern "C" const char bone_ifc_name[];

__asm__(".equ __tf17generic_interface, 0x00112BC8");
__asm__(".equ __ti17generic_interface, 0x00511F90");
__asm__(".equ __ti14bone_interface, 0x005A2908");
__asm__(".equ bone_ifc_name, 0x004CECE0");

extern "C" void **bone_ifc_rtti() __asm__("__tf14bone_interface");
void **bone_ifc_rtti()
{
    if (!bone_ifc_type[0]) {
        bone_ifc_base_rtti();
        __rtti_si(bone_ifc_type, bone_ifc_name, bone_ifc_base_type);
    }
    return bone_ifc_type;
}

// 0x00113200 __tf16entity_interface
extern "C" void **generic_interface_rtti() __asm__("__tf17generic_interface");
extern "C" void *generic_interface_type[] __asm__("__ti17generic_interface");
extern "C" void *entity_interface_type[] __asm__("__ti16entity_interface");
extern "C" const char entity_interface_name[];

__asm__(".equ __tf17generic_interface, 0x00112BC8");
__asm__(".equ __ti17generic_interface, 0x00511F90");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ entity_interface_name, 0x004C8868");

extern "C" void **entity_interface_rtti() __asm__("__tf16entity_interface");
void **entity_interface_rtti()
{
    if (!entity_interface_type[0]) {
        generic_interface_rtti();
        __rtti_si(entity_interface_type, entity_interface_name, generic_interface_type);
    }
    return entity_interface_type;
}


// 0x00112C38 get_ifc_num__17generic_interfaceRC7pstringRf
bool generic_interface::get_ifc_num(const pstring &att, float &val) {
    return false;
}

// 0x00112C40 set_ifc_num__17generic_interfaceRC7pstringf
bool generic_interface::set_ifc_num(const pstring &att, float val) {
    return false;
}

// 0x00112C48 get_ifc_vec__17generic_interfaceRC7pstringR8vector3d
bool generic_interface::get_ifc_vec(const pstring &att, vector3d &val) {
    return false;
}

// 0x00112C50 set_ifc_vec__17generic_interfaceRC7pstringRC8vector3d
bool generic_interface::set_ifc_vec(const pstring &att, const vector3d &val) {
    return false;
}

// 0x00112C58 get_ifc_str__17generic_interfaceRC7pstringR7stringx
bool generic_interface::get_ifc_str(const pstring &att, stringx &val) {
    return false;
}

// 0x00112C60 set_ifc_str__17generic_interfaceRC7pstringRC7stringx
bool generic_interface::set_ifc_str(const pstring &att, const stringx &val) {
    return false;
}

// 0x00112BC8 __tf17generic_interface
extern "C" void __rtti_user(void *info, const char *name);
asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int generic_interface_typeinfo[] __asm__("generic_interface_typeinfo");
extern const char generic_interface_name[] __asm__("generic_interface_name");
asm(".equ generic_interface_typeinfo, 0x00511F90");
asm(".equ generic_interface_name, 0x004C87C8");
extern "C" void *GetTypeInfo() __asm__("__tf17generic_interface");
void *GetTypeInfo()
{
    if (generic_interface_typeinfo[0] == 0)
        __rtti_user(generic_interface_typeinfo, generic_interface_name);
    return generic_interface_typeinfo;
}
