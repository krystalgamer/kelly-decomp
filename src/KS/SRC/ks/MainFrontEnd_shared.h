#ifndef KELLY_DECOMP_MAIN_FRONT_END_SHARED_H
#define KELLY_DECOMP_MAIN_FRONT_END_SHARED_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

#include "KS/SRC/inputmgr_shared.h"
#include "KS/SRC/ks/SoundScript.h"

class OptionsMenu;
class MultiplayerMenu;
class FreesurfMenu;
class CareerMenu;
class MultiSubMenu;
class GraphicalMenuSystem;

class BoxText {
    char state[76];

public:
    virtual ~BoxText();
    virtual void Update(float time_inc);
    virtual void Draw();
};

class CareerMenu : public FEMenu {
public:
    enum {
        ContinueEntry,
        NewEntry,
        LoadEntry,
        SaveEntry,
        OKEntry,
        CancelEntry,
        NumEntries
    };

    FEMenuEntry *entry[NumEntries];
    BoxText *warning;
    bool warning_up;
    GraphicalMenuSystem *system;
    int warning_bottom;
    int regular_bottom;

    virtual void Draw();
};

class MultiplayerMenu : public FEMenu {
public:
    enum {
        MultiPushEntry,
        MultiHeadToHeadEntry,
        MultiTimeAttackEntry,
        MultiEnd
    };

    GraphicalMenuSystem *sys;
    FEMenuEntry *entry[MultiEnd];

    MultiplayerMenu(FEMenuSystem *system, int x, int y);
    virtual void OnActivate();
    virtual void OnDown(int controller);
    virtual void OnUp(int controller);
    virtual void Update(time_value_t time_inc);
    virtual void Select(int entry_index);
    virtual void OnCross(int) { Select(highlighted->entry_num); }
    virtual void OnTriangle(int controller);

private:
    void UpdateDisable();
};

class FreesurfMenu : public FEMenu {
public:
    enum {
        FreeRegularEntry,
        FreeHighScoreEntry,
        FreeIconEntry,
        FreeEnd
    };

    FEMenuEntry *entry[FreeEnd];
    GraphicalMenuSystem *sys;

    FreesurfMenu(FEMenuSystem *system, int x, int y);
    virtual void OnActivate();
    virtual void Select(int entry_index);
    virtual void OnCross(int) { Select(highlighted->entry_num); }
    virtual void OnTriangle(int controller);
};

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
__asm__(
    ".equ cons__6FEMenuP12FEMenuSystemiiG7color32T4T4ffii, "
    "0x00156330");

#endif
