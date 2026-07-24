// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001CD9B0)
// 0x001CD9B0 OnStart__13NameEntryMenui
extern "C" void FEMenuOnStart(void *self, int command) __asm__("OnStart__6FEMenui");
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
class NameEntryMenu { char padding[0x2dc]; bool in_game; public: void OnStart(int command); };
void NameEntryMenu::OnStart(int command) { if (!in_game) { FEMenuOnStart(this, command); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB0F0)
// 0x001CB0F0 OnUp__17HighScoreFrontEndi
typedef void (*score_handler)(void *, int);
struct score_slot { short adjustment; unsigned short padding; score_handler function; };
struct score_vtable { char padding[0x98]; score_slot up; };
struct ScoreMenu { char padding[0x74]; score_vtable *vtable; };
class HighScoreFrontEnd { char padding[0x60]; ScoreMenu *active; char padding2[0x228]; int in_game; public: void OnUp(int); };
void HighScoreFrontEnd::OnUp(int controller)
{
    if (in_game && active) {
        score_slot &slot = active->vtable->up;
        slot.function((char *)active + slot.adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB130)
// 0x001CB130 OnDown__17HighScoreFrontEndi
typedef void (*score_handler)(void *, int);
struct score_slot { short adjustment; unsigned short padding; score_handler function; };
struct score_vtable { char padding[0xa0]; score_slot down; };
struct ScoreMenu { char padding[0x74]; score_vtable *vtable; };
class HighScoreFrontEnd { char padding[0x60]; ScoreMenu *active; char padding2[0x228]; int in_game; public: void OnDown(int); };
void HighScoreFrontEnd::OnDown(int controller)
{
    if (in_game && active) {
        score_slot &slot = active->vtable->down;
        slot.function((char *)active + slot.adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB310)
// 0x001CB310 OnStart__17HighScoreFrontEndi
typedef void (*score_handler)(void *, int);
struct score_slot { short adjustment; unsigned short padding; score_handler function; };
struct score_vtable { char padding[0x90]; score_slot start; };
struct ScoreMenu { char padding[0x74]; score_vtable *vtable; };
class HighScoreFrontEnd { char padding[0x60]; ScoreMenu *active; char padding2[0x228]; int in_game; public: void OnStart(int); };
void HighScoreFrontEnd::OnStart(int controller)
{
    if (in_game && active) {
        score_slot &slot = active->vtable->start;
        slot.function((char *)active + slot.adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CCCC0)
// 0x001CCCC0 Update__13NameEntryMenuf
#include "decomp_annotations.h"
class FrontEnd { public: void Update(float); };
class FEMenu { char padding[0x80]; public: void Update(float); };
class NameEntryMenu : public FEMenu { FrontEnd frontend; public: void Update(float); };
asm(".equ Update__8FrontEndf, 0x00157B30");
asm(".equ Update__6FEMenuf, 0x00156DC8");
void NameEntryMenu::Update(float time_inc)
{
    frontend.Update(time_inc);
    FEMenu::Update(time_inc);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB090)
// 0x001CB090 OnTriangle__17HighScoreFrontEndi
struct active_slot {
    short adjustment; short reserved;
    void (*function)(void *,int,int,int);
};
struct graphical_system {
    char padding[0x8c]; char *vtable;
};
struct SoundScriptManager;
extern SoundScriptManager *sound_manager;
extern "C" void play_event(
    SoundScriptManager *,int,void *,float
) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
__asm__(".equ sound_manager, 0x0046B4A0");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf, 0x0031C380");
class HighScoreFrontEnd {
    char padding[0x160];
    graphical_system *sys;
    char padding2[0x128];
    int in_game;
public:
    void OnTriangle(int controller);
};
void HighScoreFrontEnd::OnTriangle(int) {
    if (!in_game) {
        active_slot *slot=(active_slot *)(sys->vtable+0x20);
        slot->function((char *)sys+slot->adjustment,1,1,1);
        play_event(sound_manager,27,0,0.0f);
        __asm__ __volatile__("" : : : "memory");
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
