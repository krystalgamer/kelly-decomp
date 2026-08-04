// Matching decompilation blocks selected by generated build shims.


// 0x001BB850 OnButtonRelease__15CreditsFrontEndii
#include "KS/SRC/ks/ExtrasFrontEnd.h"
#include "KS/SRC/ks/FrontEndMenus.h"

void CreditsFrontEnd::OnButtonRelease(int controller, int button) { if (button == FEMENUCMD_UP) up_pressed = false; else if (button == FEMENUCMD_DOWN) down_pressed = false; }

#if defined(KELLY_DECOMP_FUNCTION_001BB7B0)
// 0x001BB7B0 OnCross__15CreditsFrontEndi
struct CreditsVTable { char padding[0xc0]; short adjustment; short padding2; void (*OnTriangle)(void *self, int command); };
class CreditsFrontEnd { char padding[0x74]; CreditsVTable *vtable; public: void OnCross(int command); };
void CreditsFrontEnd::OnCross(int command) { CreditsVTable *table = vtable; table->OnTriangle((char *)this + table->adjustment, command); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BB7D8)
// 0x001BB7D8 OnStart__15CreditsFrontEndi
struct CreditsVTable { char padding[0xc0]; short adjustment; short padding2; void (*OnTriangle)(void *self, int command); };
class CreditsFrontEnd { char padding[0x74]; CreditsVTable *vtable; public: void OnStart(int command); };
void CreditsFrontEnd::OnStart(int command) { CreditsVTable *table = vtable; table->OnTriangle((char *)this + table->adjustment, command); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BB778)
// 0x001BB778 OnTriangle__15CreditsFrontEndi
struct menu_system_vtable {
    char padding[0x20];
    short adjustment;
    short padding2;
    void (*make_active)(void *self, int menu, int submenu, bool notify);
};

struct graphical_menu_system {
    char padding[0x8c];
    menu_system_vtable *vtable;
};

class CreditsFrontEnd {
    char padding[0x164];
    graphical_menu_system *sys;

public:
    void OnTriangle(int controller);
};

void CreditsFrontEnd::OnTriangle(int controller)
{
    menu_system_vtable *table = sys->vtable;
    table->make_active(
        (char *)sys + table->adjustment,
        1,
        1,
        true
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BB800)
// 0x001BB800 OnActivate__15CreditsFrontEnd
#include "KS/SRC/ks/ExtrasFrontEnd.h"
__asm__(".equ OnActivate__15FEGraphicalMenu, 0x001581E8");

void CreditsFrontEnd::OnActivate()
/* inline helpbar layout */
{
    FEMultiMenu::OnActivate();
    up_pressed = false;
    down_pressed = false;
    first_line_y = 320;
    manager->helpbar->DisableHelpbar();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BA6B8)
// 0x001BA6B8 OnUp__14ExtrasFrontEndi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void update(void*) __asm__("UpdateState__14ExtrasFrontEnd");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ UpdateState__14ExtrasFrontEnd,0x001BAA70");struct active_vtable{char p0[152];short adjustment;short x0;void(*up)(void*,int);};struct menu{char p0[116];active_vtable*vtable;};struct main_vtable{char p0[432];short adjustment;short x0;void(*up)(void*);};struct extras{char p0[96];menu*active;char p1[16];main_vtable*vtable;};extern "C" void up(extras*self,int c) __asm__("OnUp__14ExtrasFrontEndi");void up(extras*self,int c){if(self->active){menu*m=self->active;active_vtable*t=m->vtable;t->up((char*)m+t->adjustment,c);}else{play(sound_manager,25,0,0.0f);main_vtable*t=self->vtable;t->up((char*)self+t->adjustment);update(self);}int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BA730)
// 0x001BA730 OnDown__14ExtrasFrontEndi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void update(void*) __asm__("UpdateState__14ExtrasFrontEnd");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ UpdateState__14ExtrasFrontEnd,0x001BAA70");struct active_vtable{char p0[160];short adjustment;short x0;void(*down)(void*,int);};struct menu{char p0[116];active_vtable*vtable;};struct main_vtable{char p0[440];short adjustment;short x0;void(*down)(void*);};struct extras{char p0[96];menu*active;char p1[16];main_vtable*vtable;};extern "C" void down(extras*self,int c) __asm__("OnDown__14ExtrasFrontEndi");void down(extras*self,int c){if(self->active){menu*m=self->active;active_vtable*t=m->vtable;t->down((char*)m+t->adjustment,c);}else{play(sound_manager,25,0,0.0f);main_vtable*t=self->vtable;t->down((char*)self+t->adjustment);update(self);}int dead;__asm__("" : "=r"(dead));}
#endif

// Source implementation boundary.
// 0x001DDE88 Select__15CreditsFrontEndi
#include "KS/SRC/ks/ExtrasFrontEnd.h"

void CreditsFrontEnd::Select(int arg0) {
}

// 0x001DDE90 OnUp__15CreditsFrontEndi
#include "KS/SRC/ks/ExtrasFrontEnd.h"

void CreditsFrontEnd::OnUp(int controller) {
    up_pressed = true;
}

// 0x001DDEA0 OnDown__15CreditsFrontEndi
#include "KS/SRC/ks/ExtrasFrontEnd.h"

void CreditsFrontEnd::OnDown(int controller) {
    down_pressed = true;
}

// 0x001DDEB0 OnRight__15CreditsFrontEndi
#include "KS/SRC/ks/ExtrasFrontEnd.h"

void CreditsFrontEnd::OnRight(int arg0) {
}

// 0x001DDEB8 OnLeft__15CreditsFrontEndi
#include "KS/SRC/ks/ExtrasFrontEnd.h"

void CreditsFrontEnd::OnLeft(int arg0) {
}

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
