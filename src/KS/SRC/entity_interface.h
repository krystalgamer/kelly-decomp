// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00113200)
#include "KS/SRC/ai_rtti_shared.h"

extern "C" void **generic_interface_rtti() __asm__("__tf17generic_interface");
extern "C" void *generic_interface_type[] __asm__("__ti17generic_interface");
extern "C" void *entity_interface_type[] __asm__("__ti16entity_interface");
extern "C" const char entity_interface_name[];

__asm__(".equ __tf17generic_interface, 0x00112BC8");
__asm__(".equ __ti17generic_interface, 0x00511F90");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ entity_interface_name, 0x004C8868");

// 0x00113200 __tf16entity_interface
extern "C" void **entity_interface_rtti() __asm__("__tf16entity_interface");
void **entity_interface_rtti()
{
    if (!entity_interface_type[0]) {
        generic_interface_rtti();
        __rtti_si(entity_interface_type, entity_interface_name, generic_interface_type);
    }
    return entity_interface_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00112C38)
// 0x00112C38 get_ifc_num__17generic_interfaceRC7pstringRf
class pstring;

class generic_interface {
public:
    bool get_ifc_num(const pstring &att, float &val);
};

bool generic_interface::get_ifc_num(const pstring &att, float &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112C40)
// 0x00112C40 set_ifc_num__17generic_interfaceRC7pstringf
class pstring;

class generic_interface {
public:
    bool set_ifc_num(const pstring &att, float val);
};

bool generic_interface::set_ifc_num(const pstring &att, float val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112C48)
// 0x00112C48 get_ifc_vec__17generic_interfaceRC7pstringR8vector3d
class pstring;
class vector3d;

class generic_interface {
public:
    bool get_ifc_vec(const pstring &att, vector3d &val);
};

bool generic_interface::get_ifc_vec(const pstring &att, vector3d &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112C50)
// 0x00112C50 set_ifc_vec__17generic_interfaceRC7pstringRC8vector3d
class pstring;
class vector3d;

class generic_interface {
public:
    bool set_ifc_vec(const pstring &att, const vector3d &val);
};

bool generic_interface::set_ifc_vec(const pstring &att, const vector3d &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112C58)
// 0x00112C58 get_ifc_str__17generic_interfaceRC7pstringR7stringx
class pstring;
class stringx;

class generic_interface {
public:
    bool get_ifc_str(const pstring &att, stringx &val);
};

bool generic_interface::get_ifc_str(const pstring &att, stringx &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112C60)
// 0x00112C60 set_ifc_str__17generic_interfaceRC7pstringRC7stringx
class pstring;
class stringx;

class generic_interface {
public:
    bool set_ifc_str(const pstring &att, const stringx &val);
};

bool generic_interface::set_ifc_str(const pstring &att, const stringx &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112C08)
// 0x00112C08 _$_17generic_interface
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char generic_interface_vtable[];
__asm__(".equ generic_interface_vtable, 0x004C85B8");

struct generic_interface_layout {
    const void *vtable;
};

extern "C" void GenericInterfaceDtor(void *self, int deleting)
    __asm__("_$_17generic_interface");

void GenericInterfaceDtor(void *self, int deleting) {
    ((generic_interface_layout *)self)->vtable = generic_interface_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112BC8)
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
#endif
