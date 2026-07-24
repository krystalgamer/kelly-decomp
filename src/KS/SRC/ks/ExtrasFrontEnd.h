// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DDE88)
// 0x001DDE88 Select__15CreditsFrontEndi
class CreditsFrontEnd {
public:
    void Select(int arg0);
};

void CreditsFrontEnd::Select(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDE90)
// 0x001DDE90 OnUp__15CreditsFrontEndi
class CreditsFrontEnd {
    char padding[0x170];
    bool up_pressed;
public:
    void OnUp(int controller);
};

void CreditsFrontEnd::OnUp(int controller) {
    up_pressed = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDEA0)
// 0x001DDEA0 OnDown__15CreditsFrontEndi
class CreditsFrontEnd {
    char padding[0x174];
    bool down_pressed;
public:
    void OnDown(int controller);
};

void CreditsFrontEnd::OnDown(int controller) {
    down_pressed = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDEB0)
// 0x001DDEB0 OnRight__15CreditsFrontEndi
class CreditsFrontEnd {
public:
    void OnRight(int arg0);
};

void CreditsFrontEnd::OnRight(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDEB8)
// 0x001DDEB8 OnLeft__15CreditsFrontEndi
class CreditsFrontEnd {
public:
    void OnLeft(int arg0);
};

void CreditsFrontEnd::OnLeft(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDCA8)
// 0x001DDCA8 __tf14ExtrasFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDCA8() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDCA8[] __asm__("__ti14ExtrasFrontEnd");
extern const char name_001DDCA8[];
extern void *base_type_001DDCA8[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti14ExtrasFrontEnd, 0x005A2E78");
__asm__(".equ name_001DDCA8, 0x004DDFC0");
__asm__(".equ base_type_001DDCA8, 0x004DDC48");
extern "C" void **Rtti_001DDCA8() __asm__("__tf14ExtrasFrontEnd");
void **Rtti_001DDCA8() { if (!type_001DDCA8[0]) { BaseRtti_001DDCA8(); __rtti_class(type_001DDCA8, name_001DDCA8, base_type_001DDCA8, 1); } return type_001DDCA8; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDD68)
// 0x001DDD68 __tf15CreditsFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDD68() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDD68[] __asm__("__ti15CreditsFrontEnd");
extern const char name_001DDD68[];
extern void *base_type_001DDD68[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti15CreditsFrontEnd, 0x005A2E88");
__asm__(".equ name_001DDD68, 0x004DDFD8");
__asm__(".equ base_type_001DDD68, 0x004DDC48");
extern "C" void **Rtti_001DDD68() __asm__("__tf15CreditsFrontEnd");
void **Rtti_001DDD68() { if (!type_001DDD68[0]) { BaseRtti_001DDD68(); __rtti_class(type_001DDD68, name_001DDD68, base_type_001DDD68, 1); } return type_001DDD68; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDD00)
// 0x001DDD00 Update__14ExtrasFrontEndf
struct active_vtable { char padding[96]; short adjustment; short reserved; void (*update)(void *,float); };
struct active_menu { char padding[116]; active_vtable *vtable; };
extern "C" void update_frontend(void*,float) __asm__("Update__8FrontEndf"); extern "C" void update_menu(void*,float) __asm__("Update__6FEMenuf");
__asm__(".equ Update__8FrontEndf,0x00157B30"); __asm__(".equ Update__6FEMenuf,0x00156DC8");
struct extras_layout { char padding[96]; active_menu *active; };
extern "C" void update_extras(extras_layout *self,float dt) __asm__("Update__14ExtrasFrontEndf");
void update_extras(extras_layout *self,float dt)
{
    if(self->active){active_vtable*t=self->active->vtable;t->update((char*)self->active+t->adjustment,dt);}
    else {update_frontend((char*)self+128,dt);update_menu(self,dt);int dead;__asm__("" : "=r"(dead));}
}
#endif
