#ifndef KELLY_DECOMP_SAVE_LOAD_FRONT_END_SHARED_H
#define KELLY_DECOMP_SAVE_LOAD_FRONT_END_SHARED_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/ks/igo_widget_shared.h"

class FEManager {
    char manager_data[0x15644];

public:
    color32 col_info_b;
};

extern FEManager frontendmanager;

enum SaveErrors {
    SE_NO_MEMORY_CARDS,
    SE_UNFORMAT,
    SE_NOT_ENOUGH_SPACE,
    SE_SAVE_ERROR,
    SE_LOAD_ERROR,
    SE_FORM_ERROR
};

struct MemCard {
    int free;
    bool exists;
    bool changed;
    bool available;
    bool ask_format;
    bool saved_games;
    int status;
};

class SaveLoadFrontEnd;

class NamesMenu : public FEMultiMenu {
    char names_menu_data0[0x170 - sizeof(FEMultiMenu)];
    SaveLoadFrontEnd *sl_parent;
    char names_menu_data1[0x1bc - 0x174];
    MemCard cards[2];
    stringx blank_name;
    int active_card;
    int adjusted_active_card;

public:
    void OnUnactivate(FEMenu *menu);
    void RefreshDisplay();
    void TurnPQ(bool enabled);
    void Format();
    int ActiveCard() { return active_card; }
    static int FindAdjusted(int active);

private:
    void GetFileList(int active, int adjusted);
    void UpdateMessage();
};

class SaveLoadFrontEnd : public FEMultiMenu {
    char save_load_front_end_data[0x32b8 - sizeof(FEMultiMenu)];

public:
    enum disp_states {
        DSTATE_LSD,
        DSTATE_LOAD,
        DSTATE_LOAD_PICK,
        DSTATE_LOAD_GLOBAL,
        DSTATE_LOADING_GLOBAL,
        DSTATE_LOADING,
        DSTATE_LOAD_DONE,
        DSTATE_SAVE
    };

    int post_format_state;

    virtual void Select();
    virtual void OnCross(int controller);
    void StartError(int id);
    void SetDState(
        int state,
        bool activate = true,
        bool end_error = false)
        __asm__("SetDState__16SaveLoadFrontEndibT2");
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
