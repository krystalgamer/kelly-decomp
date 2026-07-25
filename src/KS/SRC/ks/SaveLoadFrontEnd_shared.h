#ifndef KELLY_DECOMP_SAVE_LOAD_FRONT_END_SHARED_H
#define KELLY_DECOMP_SAVE_LOAD_FRONT_END_SHARED_H

#pragma interface

#define KELLY_DECOMP_FULL_FEMENU_ENTRY
#define KELLY_DECOMP_SAVELOAD_VTABLE
#include "KS/SRC/ks/FEMenu_shared.h"
#include "KS/SRC/ks/igo_widget_shared.h"
#undef KELLY_DECOMP_SAVELOAD_VTABLE
#undef KELLY_DECOMP_FULL_FEMENU_ENTRY

class FEManager {
    char manager_data[0x15644];

public:
    color32 col_info_b;
};

extern FEManager frontendmanager;

struct MemCard {
    int free;
    bool exists;
    bool changed;
    bool available;
    bool ask_format;
    bool saved_games;
    int status;
};

class NamesMenu : public FEMultiMenu {
    char names_menu_data[0x1bc - sizeof(FEMultiMenu)];
    MemCard cards[2];
    stringx blank_name;
    int active_card;
    int adjusted_active_card;

public:
    void OnUnactivate(FEMenu *menu);
    void RefreshDisplay();
    void TurnPQ(bool enabled);

private:
    void GetFileList(int active, int adjusted);
    void UpdateMessage();
};

class SaveLoadFrontEnd : public FEMultiMenu {
public:
    virtual void Select();
    virtual void OnCross(int controller);
};

class BoxText;

class DialogMenu : public FEMultiMenu {
public:
    enum {
        DM_TYPE_MNG,
        DM_TYPE_FMT,
        DM_TYPE_YES,
        DM_TYPE_OK,
        DM_TYPE_PROGRESS,
        DM_TYPE_EMPTY
    };

private:
    enum {
        DM_YES,
        DM_NO,
        DM_OK,
        DM_FMT,
        DM_CNL,
        DM_MNG,
        DM_CNL2,
        DM_NUM
    };

    BoxText *message;
    BoxText *prompt;
    int type;
    FEMenuEntry *entry[2];
    PanelQuad *bar[4];
    PanelQuad *box;
    int draw_count;

public:
    void TurnPQ(bool enabled);
};

#endif
