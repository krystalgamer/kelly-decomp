// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DDC80)
// 0x001DDC80 OnCross__14EnterCheatMenui
struct MenuVTable { char padding[0x158]; short adjustment; short padding2; void (*call)(void *self); };
class EnterCheatMenu { char padding[0x74]; MenuVTable *vtable; public: void OnCross(int command); };
void EnterCheatMenu::OnCross(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDB10)
// 0x001DDB10 __tf13CheatFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDB10() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDB10[] __asm__("__ti13CheatFrontEnd");
extern const char name_001DDB10[];
extern void *base_type_001DDB10[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13CheatFrontEnd, 0x005A2E48");
__asm__(".equ name_001DDB10, 0x004DDF88");
__asm__(".equ base_type_001DDB10, 0x004DDC48");
extern "C" void **Rtti_001DDB10() __asm__("__tf13CheatFrontEnd");
void **Rtti_001DDB10() { if (!type_001DDB10[0]) { BaseRtti_001DDB10(); __rtti_class(type_001DDB10, name_001DDB10, base_type_001DDB10, 1); } return type_001DDB10; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDBD0)
// 0x001DDBD0 __tf13CheatCodeMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDBD0() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDBD0[] __asm__("__ti13CheatCodeMenu");
extern const char name_001DDBD0[];
extern void *base_type_001DDBD0[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13CheatCodeMenu, 0x005A2E58");
__asm__(".equ name_001DDBD0, 0x004DDF98");
__asm__(".equ base_type_001DDBD0, 0x004DDC48");
extern "C" void **Rtti_001DDBD0() __asm__("__tf13CheatCodeMenu");
void **Rtti_001DDBD0() { if (!type_001DDBD0[0]) { BaseRtti_001DDBD0(); __rtti_class(type_001DDBD0, name_001DDBD0, base_type_001DDBD0, 1); } return type_001DDBD0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDC28)
// 0x001DDC28 __tf14EnterCheatMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDC28() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDC28[] __asm__("__ti14EnterCheatMenu");
extern const char name_001DDC28[];
extern void *base_type_001DDC28[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti14EnterCheatMenu, 0x005A2E68");
__asm__(".equ name_001DDC28, 0x004DDFA8");
__asm__(".equ base_type_001DDC28, 0x004DDC48");
extern "C" void **Rtti_001DDC28() __asm__("__tf14EnterCheatMenu");
void **Rtti_001DDC28() { if (!type_001DDC28[0]) { BaseRtti_001DDC28(); __rtti_class(type_001DDC28, name_001DDC28, base_type_001DDC28, 1); } return type_001DDC28; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDB68)
// 0x001DDB68 Update__13CheatFrontEndf
struct active_vtable { char padding[96]; short adjustment; short reserved; void (*update)(void *,float); };
struct active_menu { char padding[116]; active_vtable *vtable; };
extern "C" void update_frontend(void*,float) __asm__("Update__8FrontEndf"); extern "C" void update_menu(void*,float) __asm__("Update__6FEMenuf");
__asm__(".equ Update__8FrontEndf,0x00157B30"); __asm__(".equ Update__6FEMenuf,0x00156DC8");
struct cheat_layout { char padding[96]; active_menu *active; };
extern "C" void update_cheat(cheat_layout *self,float dt) __asm__("Update__13CheatFrontEndf");
void update_cheat(cheat_layout *self,float dt)
{
    if(self->active){active_vtable*t=self->active->vtable;t->update((char*)self->active+t->adjustment,dt);}
    else {update_frontend((char*)self+128,dt);update_menu(self,dt);int dead;__asm__("" : "=r"(dead));}
}
#endif
