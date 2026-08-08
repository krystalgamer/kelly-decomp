#ifndef MAINFRONTEND_H
#define MAINFRONTEND_H

#pragma interface

#include "KS/SRC/inputmgr.h"
#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/ks/SoundScript.h"

class OptionsMenu : public FEGraphicalMenu {
public:
    virtual void Select();
    virtual PanelQuad *GetPointer(const char *name);
};
class MultiplayerMenu;
class FreesurfMenu;
class CareerMenu;
class MultiSubMenu;
class GraphicalMenuSystem;

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
    void EndWarning();
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
    virtual void OnCross(int controller);
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
    virtual void OnCross(int controller);
    virtual void OnTriangle(int controller);
};

class MultiSubMenu : public FEMenu {
public:
    enum {
        SubEasyEntry,
        SubMediumEntry,
        SubHardEntry,
        SubEnd
    };

    GraphicalMenuSystem *sys;
    FEMenuEntry *entry[SubEnd];
    TextString *difficulty;
    int push[SubEnd];
    int time[SubEnd];
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
