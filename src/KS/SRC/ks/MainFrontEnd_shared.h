#ifndef KELLY_DECOMP_MAIN_FRONT_END_SHARED_H
#define KELLY_DECOMP_MAIN_FRONT_END_SHARED_H

#define KELLY_DECOMP_FULL_FEMENU_ENTRY
#define KELLY_DECOMP_FULL_FEMULTI_MENU
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_FULL_FEMULTI_MENU
#undef KELLY_DECOMP_FULL_FEMENU_ENTRY

#include "KS/SRC/inputmgr_shared.h"
#include "KS/SRC/ks/SoundScript_shared.h"

class OptionsMenu;
class MultiplayerMenu;
class FreesurfMenu;
class CareerMenu;
class MultiSubMenu;
class GraphicalMenuSystem;

class MainFrontEnd : public FEMultiMenu {
public:
    enum {
        MainFreeEntry,
        MainCareerEntry,
        MainMultiEntry,
        MainExtrasEntry,
        MainOpEntry,
        MainEnd
    };

private:
    FEManager *manager;
    GraphicalMenuSystem *sys;
    FEMenuEntry *entry_list[MainEnd];
    entity *ents[MainEnd];
    PanelQuad *boxes[MainEnd][9];
    PanelQuad *circles[MainEnd][1];
    PanelQuad *lines[MainEnd][3];

public:
    OptionsMenu *Options;
    MultiplayerMenu *Multi;
    FreesurfMenu *Freesurf;
    CareerMenu *career_menu;
    MultiSubMenu *multi_sub;

    virtual ~MainFrontEnd();
    virtual void Init();
    virtual void Load();
    virtual void Update(time_value_t time_inc);
    virtual void UpdateInScene();
    virtual void Draw();
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);
    virtual void OnCross(int controller);
    virtual void OnAnyButtonPress(int controller, int button);
    virtual void OnTriangle(int controller);
    virtual void OnActivate();
    virtual void MakeActive(FEMenu *menu);
    virtual void Select();
    virtual void Select(int entry_index);

    int returnToHighlighted;
};

__asm__(".equ OnCross__6FEMenui, 0x00157860");

#endif
