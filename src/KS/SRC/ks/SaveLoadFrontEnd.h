#ifndef SAVELOADFRONTEND_H
#define SAVELOADFRONTEND_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/ks/igo_widget.h"

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
class KeyboardMenu;
class DialogMenu;

class NamesMenu : public FEMultiMenu {
    char names_menu_data0[0x170 - sizeof(FEMultiMenu)];
    SaveLoadFrontEnd *sl_parent;
    char names_menu_data1[0x1bc - 0x174];
    MemCard cards[2];
    stringx blank_name;
    int active_card;
    int adjusted_active_card;

public:
    virtual void Init();
    virtual void OnUnactivate(FEMenu *menu);
    void RefreshDisplay();
    void TurnPQ(bool enabled);
    void Format();
    void ResetCardFormat();
    int ActiveCard() { return active_card; }
    static int FindAdjusted(int active);
    static int FindActive(int adjusted);

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
    char save_load_front_end_data_after_post_format[
        0x32f4 - 0x32bc];
    NamesMenu *NameMenu;
    KeyboardMenu *KeyMenu;
    DialogMenu *dialogMenu;

    virtual void Init();
    virtual void Select();
    virtual void OnCross(int controller);
    int getActiveCard();
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
    // The shipped layout places the panel fields after two entry pointers.
    FEMenuEntry *entry[2];
    PanelQuad *bar[4];
    PanelQuad *box;
    int draw_count;

public:
    virtual void OnTriangle(int command);
    virtual void OnUnactivate(FEMenu *menu);
    void TurnPQ(bool enabled);
};

class KeyboardMenu : public FEMultiMenu {
private:
    enum {
        num = 40,
        space_idx = 36,
        back_idx = 37,
        enter_idx = 38,
        cancel_idx = 39,
        row_size = 8,
        name_size = 10
    };

    FEMenuEntry *ent[num];
    TextString *filename;
    TextString *enter_text;
    TextString *name_text;
    SaveLoadFrontEnd *sl_parent;
    PanelQuad *keys[num][3];
    PanelQuad *name_box[3];
    stringx name;
    bool default_cleared;

public:
    virtual void Init();
    virtual void OnTriangle(int command);
    virtual void OnUnactivate(FEMenu *menu);
    void TurnPQ(bool enabled);
    void Switch(FEMenuEntry *before, FEMenuEntry *after);

private:
    void go_to_previous_menu();
    void KeyOn(int index, bool enabled);
};

__asm__(".equ KeyOn__12KeyboardMenuib, 0x001A28B8");

#endif
