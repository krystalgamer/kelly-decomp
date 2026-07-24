// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0013CFD8)
// 0x0013CFD8 _$_21script_data_interface
extern "C" void string_dtor(void*,int)__asm__("_$_7stringx");extern "C" void builtin_delete(void*)__asm__("__builtin_delete");extern const char script_vtable[];extern const char base_vtable[];__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ __builtin_delete,0x002AC6B0");__asm__(".equ script_vtable,0x004CDBC0");__asm__(".equ base_vtable,0x004C85B8");struct script_layout{const void*vtable;void*owner;char nums[32];char strings[32];};extern "C" void destroy(script_layout*self,int deleting)__asm__("_$_21script_data_interface");void destroy(script_layout*self,int deleting){self->vtable=script_vtable;string_dtor((char*)self+64,2);string_dtor((char*)self+56,2);string_dtor((char*)self+48,2);string_dtor((char*)self+40,2);self->owner=0;self->vtable=base_vtable;if(deleting&1){builtin_delete(self);asm volatile("");}}
#endif
