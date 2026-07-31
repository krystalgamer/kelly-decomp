// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001BB850)
// 0x001BB850 OnButtonRelease__15CreditsFrontEndii
class CreditsFrontEnd { char padding[0x170]; bool up_pressed; bool down_pressed; public: void OnButtonRelease(int controller, int button); };
void CreditsFrontEnd::OnButtonRelease(int controller, int button) { if (button == 2) up_pressed = false; else if (button == 3) down_pressed = false; }
#endif

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
