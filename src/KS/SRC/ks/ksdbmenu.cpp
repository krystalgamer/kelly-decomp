// Matching decompilation blocks selected by generated build shims.


// 0x00235E28 ProfButton__FP9MenuEntryi
class MenuEntry;
extern unsigned char profiler_enabled;
bool ProfButton(MenuEntry* entry, int button) { profiler_enabled = 1; return true; }

// 0x002367F0 ReplaySaveButton__FP9MenuEntryi
#include "KS/SRC/ks/ksdbmenu.h"
__asm__(".equ SaveFile__8KSReplayPc, 0x0023B878");
__asm__(".equ menus, 0x00424EE8");
bool ReplaySaveButton(MenuEntry *entry, int button) {
    if (button == MENUCMD_CROSS) {
        ksreplay.SaveFile(0);
        menus->CloseMenu();
    }
    return true;
}

// 0x00236770 ReplayCancelButton__FP9MenuEntryi
#include "KS/SRC/ks/ksdbmenu.h"
__asm__(".equ Pause__8KSReplayb, 0x0023C9E0");
__asm__(".equ menus, 0x00424EE8");
bool ReplayCancelButton(MenuEntry *entry, int button) {
    if (button == MENUCMD_CROSS) {
        ksreplay.Pause(false);
        menus->CloseMenu();
    }
    return true;
}

// 0x00235EE0 UserCamButton__FP9MenuEntryi
#include "KS/SRC/ks/ksdbmenu.h"
class game {
public:
    void turn_user_cam_on(bool enabled);
};
extern game *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");
__asm__(".equ menus, 0x00424EE8");
__asm__(".equ turn_user_cam_on__4gameb, 0x002833D0");
bool UserCamButton(MenuEntry *entry, int button) {
    if (button == MENUCMD_CROSS) {
        g_game_ptr->turn_user_cam_on(true);
        menus->CloseMenu();
    }
    return true;
}

// 0x00235E40 particles_test__FP9MenuEntryi
#include "KS/SRC/ks/menu.h"

bool particles_test(MenuEntry* entry, int buttonid) {
    return true;
}

// 0x00236688 ReplayFwdButton__FP9MenuEntryi
#include "KS/SRC/ks/menu.h"

bool ReplayFwdButton(MenuEntry* entry, int buttonid) {
    return true;
}

// 0x00236690 ReplayRewButton__FP9MenuEntryi
#include "KS/SRC/ks/menu.h"

bool ReplayRewButton(MenuEntry* entry, int buttonid) {
    return true;
}

// 0x00236630 ToggleShowRumble__FP9MenuEntryi
#include "KS/SRC/ks/ksdbmenu.h"
#include "KS/SRC/ks/menu.h"
#include "KS/SRC/ks/rumbleManager.h"

bool ToggleShowRumble(MenuEntry *entry, int button) { if (button == MENUCMD_CROSS) rumbleMan.toggleDrawState(); return true; }

// 0x00236600 WriteRumbleButton__FP9MenuEntryi
#include "KS/SRC/ks/ksdbmenu.h"
#include "KS/SRC/ks/rumbleManager.h"

__asm__(".equ rumbleMan, 0x004253C0");
__asm__(".equ writeLevels__13rumbleManager, 0x00242810");
bool WriteRumbleButton(MenuEntry *entry, int button) { if (button == 7) rumbleMan.writeLevels(); return true; }

// 0x00236658 ReplayPlayButton__FP9MenuEntryi
#include "KS/SRC/ks/ksdbmenu.h"
#include "KS/SRC/ks/ksreplay.h"

__asm__(".equ Play__8KSReplay, 0x0023C6A0");
bool ReplayPlayButton(MenuEntry *entry, int button) { if (button == 7) ksreplay.Play(); return true; }

// 0x00236698 ReplaySlowButton__FP9MenuEntryi
#include "KS/SRC/ks/ksdbmenu.h"
#include "KS/SRC/ks/ksreplay.h"

__asm__(".equ SpeedSlow__8KSReplay, 0x0023CA38");
bool ReplaySlowButton(MenuEntry *entry, int button) { if (button == 7) ksreplay.SpeedSlow(); return true; }

// 0x002367C0 ReplayRestartButton__FP9MenuEntryi
#include "KS/SRC/ks/ksdbmenu.h"
#include "KS/SRC/ks/ksreplay.h"

__asm__(".equ Restart__8KSReplay, 0x0023C978");
bool ReplayRestartButton(MenuEntry *entry, int button) { if (button == 7) ksreplay.Restart(); return true; }

// 0x00236948 MemoryScreen__FP9MenuEntryi
class MenuEntry;

struct debug_flags {
    bool flag0 : 1;
    bool flag1 : 1;
    bool flag2 : 1;
    bool flag3 : 1;
    bool flag4 : 1;
    bool flag5 : 1;
    bool flag6 : 1;
    bool flag7 : 1;
    bool mem_free_screen : 1;
};

extern debug_flags g_debug;
__asm__(".equ g_debug, 0x00431898");

bool MemoryScreen(MenuEntry *entry, int button)
{
    if (button == 7) {
        if (g_debug.mem_free_screen)
            g_debug.mem_free_screen = 0;
        else
            g_debug.mem_free_screen = 1;
    }
    return true;
}

// 0x002368B8 MemoryDump__FP9MenuEntryi
class MenuEntry;

struct MenuSystemVTable {
    char padding[0x18];
    short adjustment;
    short padding2;
    void (*close_menu)(void *self);
};

class MenuSystem {
public:
    char padding[0x458];
    MenuSystemVTable *vtable;
};

extern MenuSystem *menus;
__asm__(".equ menus, 0x00424EE8");

void mem_dump_heap(int heapid);
__asm__(".equ mem_dump_heap__Fi, 0x002ACC50");

bool MemoryDump(MenuEntry *entry, int button)
{
    if (button == 7) {
        mem_dump_heap(0);
        MenuSystemVTable *table = menus->vtable;
        table->close_menu((char *)menus + table->adjustment);
    }
    return true;
}

// 0x00236980 ExitLevel__FP9MenuEntryi
class MenuEntry;
class MenuSystem { public: void CloseAllMenus(); };
class game { public: void end_level(); };
class app {
    char padding[0x10];
    game *the_game;
public:
    game *get_game() { return the_game; }
};
extern MenuSystem *menus;
extern app *application;
asm(".equ menus, 0x00424EE8");
asm(".equ application, 0x0046AC18");
asm(".equ CloseAllMenus__10MenuSystem, 0x00241060");
asm(".equ end_level__4game, 0x00283598");
bool ExitLevel(MenuEntry *entry, int buttonid)
{
    if (buttonid == 7) {
        menus->CloseAllMenus();
        application->get_game()->end_level();
    }
    return true;
}

// 0x00236A50 KSDBMENU_KillMainMenu__Fv
class Menu { public: void ClearMenu(); };
extern Menu *menu_main;
extern Menu *menu_inner_cam;
extern Menu *menu_inner_camtool;
asm(".equ menu_main, 0x004252A4");
asm(".equ menu_inner_cam, 0x00424F70");
asm(".equ menu_inner_camtool, 0x00434978");
asm(".equ ClearMenu__4Menu, 0x0023E538");
void KSDBMENU_KillMainMenu()
{
    menu_main->ClearMenu();
    menu_inner_cam->ClearMenu();
    menu_inner_camtool->ClearMenu();
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00235D90 FreezeButton__FP9MenuEntryi
struct MenuEntry;

class game {
public:
    void pause();
};

class app {
    char padding[0x10];
    game *the_game;

public:
    game *get_game() { return the_game; }
};

class MenuSystem {
public:
    void CloseAllMenus();
};

extern bool superduperpausehack;
extern app *global_app;
extern MenuSystem *menus;

__asm__(".equ superduperpausehack, 0x00424ED8");
__asm__(".equ global_app, 0x0046AC18");
__asm__(".equ menus, 0x00424EE8");
__asm__(".equ pause__4game, 0x0027D788");
__asm__(".equ CloseAllMenus__10MenuSystem, 0x00241060");

bool FreezeButton(MenuEntry *entry, int button)
{
    superduperpausehack = true;
    global_app->get_game()->pause();
    menus->CloseAllMenus();
    global_app->get_game()->pause();
    return true;
}

// Source implementation boundary.
// 0x00270E68 _$_10KSMainMenu
extern "C" void close_menu(void*,bool)__asm__("Close__4Menub");extern "C" void resize_menu(void*,int)__asm__("Resize__4Menui");extern "C" void delete_object(void*)__asm__("__builtin_delete");extern const char ks_vtable[],menu_vtable[];__asm__(".equ Close__4Menub,0x0023E470");__asm__(".equ Resize__4Menui,0x0023E2B0");__asm__(".equ __builtin_delete,0x002AC6B0");__asm__(".equ ks_vtable,0x004D5450");__asm__(".equ menu_vtable,0x004D5D48");struct menu_layout{char pad[28];const void*vtable;};extern "C" void destroy(menu_layout*self,int deleting)__asm__("_$_10KSMainMenu");void destroy(menu_layout*self,int deleting){self->vtable=ks_vtable;close_menu(self,true);self->vtable=menu_vtable;close_menu(self,true);resize_menu(self,0);if(deleting&1){delete_object(self);KELLY_DECOMP_COMPILER_BARRIER();}}
