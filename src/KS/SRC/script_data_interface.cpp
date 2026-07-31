// script_data_interface RTTI extracted by generated one-function shims.

// 0x00146320 __tf21script_data_interface
#include "KS/SRC/script_data_interface.h"

extern "C" void **script_data_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *script_data_base_type[] __asm__("__ti16entity_interface");
extern "C" void *script_data_type[] __asm__("__ti21script_data_interface");
extern "C" const char script_data_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti21script_data_interface, 0x005A28E8");
__asm__(".equ script_data_name, 0x004CEC68");

extern "C" void **script_data_rtti() __asm__("__tf21script_data_interface");
void **script_data_rtti()
{
    if (!script_data_type[0]) {
        script_data_base_rtti();
        __rtti_si(script_data_type, script_data_name, script_data_base_type);
    }
    return script_data_type;
}

// 0x0013CFD8 _$_21script_data_interface
extern "C" void string_dtor(void*,int)__asm__("_$_7stringx");extern "C" void builtin_delete(void*)__asm__("__builtin_delete");extern const char script_vtable[];extern const char base_vtable[];__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ __builtin_delete,0x002AC6B0");__asm__(".equ script_vtable,0x004CDBC0");__asm__(".equ base_vtable,0x004C85B8");struct script_layout{const void*vtable;void*owner;char nums[32];char strings[32];};extern "C" void destroy(script_layout*self,int deleting)__asm__("_$_21script_data_interface");void destroy(script_layout*self,int deleting){self->vtable=script_vtable;string_dtor((char*)self+64,2);string_dtor((char*)self+56,2);string_dtor((char*)self+48,2);string_dtor((char*)self+40,2);self->owner=0;self->vtable=base_vtable;if(deleting&1){builtin_delete(self);asm volatile("");}}
