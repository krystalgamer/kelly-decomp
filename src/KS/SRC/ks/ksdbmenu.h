#ifndef _ksdbmenu_h
#define _ksdbmenu_h

#pragma interface

#include "KS/SRC/ks/ksreplay.h"
#include "KS/SRC/ks/menu.h"

enum {
    MENUCMD_CROSS = 7
};

class KSMainMenu : public Menu {
public:
    KSMainMenu(Menu *parent) : Menu(parent) {}
    KSMainMenu(
        Menu *parent,
        int entries,
        MenuEntry **entry)
        : Menu(parent, entries, entry)
    {
    }
    virtual ~KSMainMenu();

protected:
    virtual void OnOpen(Menu *close_to, MenuSystem *control);
    virtual void OnClose(bool to_parent);
};

extern MenuSystem *menus;
extern bool superduperpausehack;
extern KSMainMenu *menu_main;
extern Menu *menu_inner_cam;
extern Menu *menu_inner_camtool;
extern Menu *fakefrontend;

bool UserCamButton(MenuEntry *entry, int button);
bool ReplayCancelButton(MenuEntry *entry, int button);
bool ReplaySaveButton(MenuEntry *entry, int button);
void KSDBMENU_InitMainMenu();
void KSDBMENU_KillMainMenu();

#endif
