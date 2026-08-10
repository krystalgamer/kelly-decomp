// Matching decompilation blocks selected by generated build shims.


// 0x001CD9B0 OnStart__13NameEntryMenui
#include "KS/SRC/ks/HighScoreFrontEnd.h"

void FEMenuOnStart(FEMenu *self, int command) __asm__("OnStart__6FEMenui");
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
void NameEntryMenu::OnStart(int command) { if (!in_game) { void (*start)(FEMenu *, int) = FEMenuOnStart; start(this, command); } }

#if defined(KELLY_DECOMP_FUNCTION_001CB0F0)
// 0x001CB0F0 OnUp__17HighScoreFrontEndi
#include "KS/SRC/ks/HighScoreFrontEnd.h"

void HighScoreFrontEnd::OnUp(int controller)
{
    if (in_game && active)
        active->OnUp(controller);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB130)
// 0x001CB130 OnDown__17HighScoreFrontEndi
#include "KS/SRC/ks/HighScoreFrontEnd.h"

void HighScoreFrontEnd::OnDown(int controller)
{
    if (in_game && active)
        active->OnDown(controller);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB310)
// 0x001CB310 OnStart__17HighScoreFrontEndi
#include "KS/SRC/ks/HighScoreFrontEnd.h"

void HighScoreFrontEnd::OnStart(int controller)
{
    if (in_game && active)
        active->OnStart(controller);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CCCC0)
// 0x001CCCC0 Update__13NameEntryMenuf
#include "KS/SRC/ks/HighScoreFrontEnd.h"

asm(".equ Update__8FrontEndf, 0x00157B30");
asm(".equ Update__6FEMenuf, 0x00156DC8");
extern "C" void update_menu_base(FEMenu *menu, float time)
    __asm__("Update__6FEMenuf");

void NameEntryMenu::Update(float time_inc)
{
    FrontEnd::Update(time_inc);
    void (*update)(FEMenu *, float) = update_menu_base;
    update(this, time_inc);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB090)
// 0x001CB090 OnTriangle__17HighScoreFrontEndi
#include "KS/SRC/ks/GraphicalMenuSystem.h"
#include "KS/SRC/ks/HighScoreFrontEnd.h"
#include "KS/SRC/ks/SoundScript.h"

extern "C" void play_event(
    SoundScriptManager *,EventType,entity *,float
) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf, 0x0031C380");
void HighScoreFrontEnd::OnTriangle(int) {
    if (!in_game) {
        sys->MakeActive(1,true,true);
        void (*play)(
            SoundScriptManager *,
            EventType,
            entity *,
            float)=play_event;
        play(SoundScriptManager::inst(),SS_FE_BACK,0,0.0f);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CD810)
// 0x001CD810 OnUp__13NameEntryMenui
extern "C" void unpause(void *) __asm__("unpause__18SoundScriptManager");
extern "C" void pause(void *) __asm__("pause__18SoundScriptManager");
extern "C" void play_event(void *, int, void *, float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");
__asm__(".equ pause__18SoundScriptManager,0x0031BF98");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
struct menu_vtable { char padding[432]; short adjustment; short reserved; void (*move)(void *); };
struct name_entry_layout { char padding[116]; menu_vtable *vtable; };
extern "C" void menu_action(name_entry_layout *self, int controller) __asm__("OnUp__13NameEntryMenui");
void menu_action(name_entry_layout *self, int controller)
{
    register char *manager_base __asm__("$16") = (char *)0x00460000;
    __asm__ __volatile__("" : "+r"(manager_base));
    unpause(*(void **)(manager_base - 19296));
    register float time __asm__("$f12") = 0.0f;
    register int event __asm__("$5") = 25;
    __asm__ __volatile__("" : "+f"(time), "+r"(event));
    play_event(*(void **)(manager_base - 19296), event, 0, time);
    pause(*(void **)(manager_base - 19296));
    menu_vtable *table = self->vtable;
    table->move((char *)self + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CD878)
// 0x001CD878 OnDown__13NameEntryMenui
extern "C" void unpause(void *) __asm__("unpause__18SoundScriptManager");
extern "C" void pause(void *) __asm__("pause__18SoundScriptManager");
extern "C" void play_event(void *, int, void *, float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");
__asm__(".equ pause__18SoundScriptManager,0x0031BF98");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
struct menu_vtable { char padding[440]; short adjustment; short reserved; void (*move)(void *); };
struct name_entry_layout { char padding[116]; menu_vtable *vtable; };
extern "C" void menu_action(name_entry_layout *self, int controller) __asm__("OnDown__13NameEntryMenui");
void menu_action(name_entry_layout *self, int controller)
{
    register char *manager_base __asm__("$16") = (char *)0x00460000;
    __asm__ __volatile__("" : "+r"(manager_base));
    unpause(*(void **)(manager_base - 19296));
    register float time __asm__("$f12") = 0.0f;
    register int event __asm__("$5") = 25;
    __asm__ __volatile__("" : "+f"(time), "+r"(event));
    play_event(*(void **)(manager_base - 19296), event, 0, time);
    pause(*(void **)(manager_base - 19296));
    menu_vtable *table = self->vtable;
    table->move((char *)self + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CD8E0)
// 0x001CD8E0 OnLeft__13NameEntryMenui
extern "C" void unpause(void *) __asm__("unpause__18SoundScriptManager");
extern "C" void pause(void *) __asm__("pause__18SoundScriptManager");
extern "C" void play_event(void *, int, void *, float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");
__asm__(".equ pause__18SoundScriptManager,0x0031BF98");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
struct menu_vtable { char padding[448]; short adjustment; short reserved; void (*move)(void *); };
struct name_entry_layout { char padding[116]; menu_vtable *vtable; };
extern "C" void menu_action(name_entry_layout *self, int controller) __asm__("OnLeft__13NameEntryMenui");
void menu_action(name_entry_layout *self, int controller)
{
    register char *manager_base __asm__("$16") = (char *)0x00460000;
    __asm__ __volatile__("" : "+r"(manager_base));
    unpause(*(void **)(manager_base - 19296));
    register float time __asm__("$f12") = 0.0f;
    register int event __asm__("$5") = 26;
    __asm__ __volatile__("" : "+f"(time), "+r"(event));
    play_event(*(void **)(manager_base - 19296), event, 0, time);
    pause(*(void **)(manager_base - 19296));
    menu_vtable *table = self->vtable;
    table->move((char *)self + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CD948)
// 0x001CD948 OnRight__13NameEntryMenui
extern "C" void unpause(void *) __asm__("unpause__18SoundScriptManager");
extern "C" void pause(void *) __asm__("pause__18SoundScriptManager");
extern "C" void play_event(void *, int, void *, float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");
__asm__(".equ pause__18SoundScriptManager,0x0031BF98");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
struct menu_vtable { char padding[456]; short adjustment; short reserved; void (*move)(void *); };
struct name_entry_layout { char padding[116]; menu_vtable *vtable; };
extern "C" void menu_action(name_entry_layout *self, int controller) __asm__("OnRight__13NameEntryMenui");
void menu_action(name_entry_layout *self, int controller)
{
    register char *manager_base __asm__("$16") = (char *)0x00460000;
    __asm__ __volatile__("" : "+r"(manager_base));
    unpause(*(void **)(manager_base - 19296));
    register float time __asm__("$f12") = 0.0f;
    register int event __asm__("$5") = 26;
    __asm__ __volatile__("" : "+f"(time), "+r"(event));
    play_event(*(void **)(manager_base - 19296), event, 0, time);
    pause(*(void **)(manager_base - 19296));
    menu_vtable *table = self->vtable;
    table->move((char *)self + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CA588)
// 0x001CA588 Load__17HighScoreFrontEnd
struct base_vtable{char p0[56];short adjustment;short x0;void(*load)(void*,bool);};struct menu_vtable{char p0[64];short adjustment;short x0;void(*set)(void*);};struct menu{char p0[320];menu_vtable*vtable;};struct highscore{char p0[116];base_vtable*vtable;char p1[200];menu_vtable*inner_vtable;char p2[328];int in_game;char p3[208];menu*nem;};extern "C" void load(highscore*self) __asm__("Load__17HighScoreFrontEnd");void load(highscore*self){base_vtable*t=self->vtable;t->load((char*)self+t->adjustment,false);register menu_vtable*u __asm__("$2")=self->inner_vtable;register void*sub __asm__("$5")=(char*)self+128;register int adj __asm__("$4")=u->adjustment;register void(*fn)(void*) __asm__("$3")=u->set;fn((char*)sub+adj);if(self->in_game){register menu*m __asm__("$4")=self->nem;u=m->vtable;m=(menu*)((char*)m+128);register int a __asm__("$3")=u->adjustment;register void(*f)(void*) __asm__("$5")=u->set;f((char*)m+a);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CD130)
// 0x001CD130 Draw__13NameEntryMenu
struct TextVtable{char pad[24];short adjust;short z;void(*draw)(void*);};struct Text{char pad[76];TextVtable*vtable;};struct NameEntryMenu{char pad0[104];Text*helpText;char pad1[628];Text*high_score;Text*enter_name;Text*name;void Draw()__asm__("Draw__13NameEntryMenu");};extern "C" void base_draw(NameEntryMenu*)__asm__("Draw__15FEGraphicalMenu");__asm__(".equ Draw__15FEGraphicalMenu,0x001580D8");
#define DRAW_TEXT(x) ((x)->vtable->draw((char*)(x)+(x)->vtable->adjust))
void NameEntryMenu::Draw(){base_draw(this);DRAW_TEXT(high_score);DRAW_TEXT(enter_name);DRAW_TEXT(name);DRAW_TEXT(helpText);}
#endif
