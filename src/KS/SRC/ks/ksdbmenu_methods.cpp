// Matching decompilation blocks selected by generated build shims.


// 0x00270E68 _$_10KSMainMenu
extern "C" void close_menu(void*,bool)__asm__("Close__4Menub");extern "C" void resize_menu(void*,int)__asm__("Resize__4Menui");extern "C" void delete_object(void*)__asm__("__builtin_delete");extern const char ks_vtable[],menu_vtable[];__asm__(".equ Close__4Menub,0x0023E470");__asm__(".equ Resize__4Menui,0x0023E2B0");__asm__(".equ __builtin_delete,0x002AC6B0");__asm__(".equ ks_vtable,0x004D5450");__asm__(".equ menu_vtable,0x004D5D48");struct menu_layout{char pad[28];const void*vtable;};extern "C" void destroy(menu_layout*self,int deleting)__asm__("_$_10KSMainMenu");void destroy(menu_layout*self,int deleting){self->vtable=ks_vtable;close_menu(self,true);self->vtable=menu_vtable;close_menu(self,true);resize_menu(self,0);if(deleting&1){delete_object(self);KELLY_DECOMP_COMPILER_BARRIER();}}
