#ifndef GRAPHICAL_MENU_SYSTEM_H
#define GRAPHICAL_MENU_SYSTEM_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class GraphicalMenuSystem : public FEMenuSystem {
    char graphical_menu_data0[0xd4 - sizeof(FEMenuSystem)];

public:
    bool multiplayer;
    bool multi_1;

private:
    char graphical_menu_data1[0x120 - 0xdc];
    bool fedb_draw_overlays;
    bool soundStarted;
    bool LoadedAll;

public:
    enum {
        MainMenu,
        ExtrasMenu,
        CreditsMenu,
        HighScoreMenu,
        SurferMenu,
        BeachMenu,
        SaveLoadMenu,
        TrickBookMenu,
        BoardMenu,
        AccompMenu,
        LogbookMenu,
        BuiltVersionMenu,
        TitleMenu,
        Legal,
        OptionsMenu
    };

    virtual void Select(int menu_index, int entry_index);
    void DrawTop();
    virtual void LoadAll();
    void restartMovie();
    void killMovie();
    void DrawMovie();
    void Reload();
};

class LegalFrontEnd : public FEGraphicalMenu {
    BoxText *legal_babble;
    float timer;

public:
    virtual void Draw();
    virtual void OnStart(int controller);
    virtual void OnCross(int controller);
    virtual void SetSystem(FEMenuSystem *system);
    virtual void Select(int entry);
};

class FEDebugMenu : public FEMultiMenu {
public:
    virtual void Select(int entry);
    virtual void OnCross(int controller);
};

class ControllerFrontEnd : public FEMultiMenu {
    char data_to_selected_controller[0x174 - sizeof(FEMultiMenu)];
    int selected_controller;
    int controller_count;

public:
    void Draw();
    void OnLeft(int controller);
    void OnRight(int controller);
    void OnUp(int controller);
    void OnDown(int controller);
    void Select(int controller);
    void OnStart(int controller);
    virtual void OnUnactivate(FEMenu *menu);
};

class HelpbarFE : public FrontEnd {
private:
    enum {
        ARROW_H,
        ARROW_V,
        ARROW_BOTH,
        CROSS,
        TRIANGLE,
        CIRCLE,
        SQUARE,
        BTN_NUM
    };

    PanelQuad *buttons[BTN_NUM];
    TextString *help_text[BTN_NUM];
    bool has_text[BTN_NUM];
    stringx default_text[BTN_NUM];
    bool disabled;

public:
    HelpbarFE(FEManager *manager, stringx path, stringx panel_filename);
    virtual ~HelpbarFE();
    virtual void Update(time_value_t time_inc);
    virtual void LoadPanel(bool floating = false);
    virtual void ReloadPanel();
    virtual void Draw();
    void DisableHelpbar() { disabled = true; }
    void EnableHelpbar() { disabled = false; }

protected:
    virtual void SetPQIndices();
};

class MCDetectFrontEnd;

class TitleFrontEnd : public FEGraphicalMenu {
    PanelQuad *bkg;
    PanelQuad *box[9];
    TextString *loading;
    int loading_draw_counter;
    MCDetectFrontEnd *mc;

public:
    virtual ~TitleFrontEnd();
    virtual void Update(time_value_t time_inc);
    virtual void Draw();
    virtual void Load();
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);
    virtual void OnStart(int controller);
    virtual void OnCross(int controller);
    virtual void Select(int entry);
    virtual void SetSystem(FEMenuSystem *system);
};

#endif
