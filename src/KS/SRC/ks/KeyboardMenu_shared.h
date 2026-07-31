#ifndef KELLY_DECOMP_KEYBOARD_MENU_SHARED_H
#define KELLY_DECOMP_KEYBOARD_MENU_SHARED_H

#include "KS/SRC/ks/FEMenu.h"

class SaveLoadFrontEnd;

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
    void Switch(FEMenuEntry *before, FEMenuEntry *after);

private:
    void KeyOn(int index, bool enabled);
};

__asm__(".equ KeyOn__12KeyboardMenuib, 0x001A28B8");

#endif
