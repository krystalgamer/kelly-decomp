// Matching decompilation blocks selected by generated build shims.

// 0x001A27D8 Switch__12KeyboardMenuP11FEMenuEntryT1
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

void KeyboardMenu::Switch(FEMenuEntry *before, FEMenuEntry *after)
{
    if (before == after)
        return;

    if (before->entry_num == back_idx)
    {
        KeyOn(back_idx, false);
        KeyOn(enter_idx, false);
        KeyOn(cancel_idx, false);
    }
    else if (before->entry_num < back_idx)
        KeyOn(before->entry_num, false);

    if (after->entry_num == back_idx)
    {
        KeyOn(back_idx, true);
        KeyOn(enter_idx, true);
        KeyOn(cancel_idx, true);
    }
    else if (after->entry_num < back_idx)
        KeyOn(after->entry_num, true);
}

// 0x001A06D0 Format__9NamesMenu
#include "KS/SRC/HWOSPS2/ps2_gamesaver.h"
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

enum {
    NUM_MEMORY_SLOTS = 1
};

__asm__(".equ _16GenericGameSaver$instance, 0x0042E5B8");
__asm__(".equ format__16GenericGameSaverii, 0x001E4508");
__asm__(".equ StartError__16SaveLoadFrontEndi, 0x0019B230");
__asm__(".equ SetDState__16SaveLoadFrontEndibT2, 0x0019B760");
__asm__(".equ FindAdjusted__9NamesMenui, 0x001A0808");

void NamesMenu::Format()
{
    int type, free, formatted;
    if (GenericGameSaver::getInfo(
            active_card, 0, &type, &free, &formatted)
        != GSErrorUnformatted)
    {
        sl_parent->SetDState(SaveLoadFrontEnd::DSTATE_SAVE);
        return;
    }

    int ret = GenericGameSaver::inst()->format(
        active_card != -1 ? active_card / NUM_MEMORY_SLOTS : -1,
        active_card != -1 ? active_card % NUM_MEMORY_SLOTS : 0);
    cards[FindAdjusted(ActiveCard())].status = ret;
    if (ret != GSOk)
        sl_parent->StartError(SE_FORM_ERROR);
    else
    {
        cards[FindAdjusted(ActiveCard())].available = true;
        sl_parent->SetDState(sl_parent->post_format_state);
    }
}


// 0x0019B668 getActiveCard__16SaveLoadFrontEnd
struct names_menu_active_card_layout {
    char padding[0x1FC];
    int active_card;
};

struct save_load_active_card_layout {
    char padding[0x32F4];
    names_menu_active_card_layout *NameMenu;
};

extern "C" int get_active_card(save_load_active_card_layout *self)
    __asm__("getActiveCard__16SaveLoadFrontEnd");
int get_active_card(save_load_active_card_layout *self) {
    return self->NameMenu->active_card;
}

// 0x0019BF38 DialogActive__16SaveLoadFrontEnd
class FEMenu;
struct save_load_dialog_layout {
    char padding_to_active[0x60];
    FEMenu *active;
    char padding_to_dialog[0x3298];
    FEMenu *dialogMenu;
};
extern "C" bool dialog_active(save_load_dialog_layout *self)
    __asm__("DialogActive__16SaveLoadFrontEnd");
bool dialog_active(save_load_dialog_layout *self) {
    return self->active == self->dialogMenu;
}

// 0x0019EDD8 Init__9NamesMenu
struct names_menu_init_layout {
    char padding_to_parent[0x64];
    void *parent;
    char padding_to_sl_parent[0x108];
    void *sl_parent;
};

extern "C" void init_names_menu(names_menu_init_layout *self)
    __asm__("Init__9NamesMenu");
void init_names_menu(names_menu_init_layout *self) {
    self->sl_parent = self->parent;
}

// 0x001A0808 FindAdjusted__9NamesMenui
extern "C" int find_adjusted(int active)
    __asm__("FindAdjusted__9NamesMenui");
int find_adjusted(int active) {
    return active;
}

// 0x001A0810 FindActive__9NamesMenui
extern "C" int find_active(int adjusted)
    __asm__("FindActive__9NamesMenui");
int find_active(int adjusted) {
    return adjusted;
}

// 0x001A1CF8 Init__12KeyboardMenu
struct keyboard_menu_init_layout {
    char padding_to_parent[0x64];
    void *parent;
    char padding_to_sl_parent[0x1A4];
    void *sl_parent;
};

extern "C" void init_keyboard_menu(keyboard_menu_init_layout *self)
    __asm__("Init__12KeyboardMenu");
void init_keyboard_menu(keyboard_menu_init_layout *self) {
    self->sl_parent = self->parent;
}

// 0x001A07B0 ActiveFile__9NamesMenu
struct FEMenuEntry { int entry_num; };
struct names_menu_active_file_layout {
    char padding0[0x4c];
    FEMenuEntry *highlighted;
    char padding1[0x108];
    FEMenuEntry *secondary_cursor;
};
extern "C" int active_file(names_menu_active_file_layout *self)
    __asm__("ActiveFile__9NamesMenu");
int active_file(names_menu_active_file_layout *self) {
    if (!self->highlighted)
        return -1;
    else
        return self->secondary_cursor->entry_num;
}

// 0x001A2B30 OnUnactivate__12KeyboardMenuP6FEMenu
class FEMenu;
extern "C" void turn_keyboard_pq(void *self, bool value)
    __asm__("TurnPQ__12KeyboardMenub");
extern "C" void unactivate_keyboard(void *self, FEMenu *menu)
    __asm__("OnUnactivate__12KeyboardMenuP6FEMenu");
__asm__(".equ TurnPQ__12KeyboardMenub, 0x001A1C10");
void unactivate_keyboard(void *self, FEMenu *menu) {
    turn_keyboard_pq(self, false);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x0019B738 ReadyToAccess__16SaveLoadFrontEndii
extern "C" void set_dstate(void *self, int state, bool ready, bool failed)
    __asm__("SetDState__16SaveLoadFrontEndibb");
extern "C" void ready_to_access(void *self, int ignored, int state)
    __asm__("ReadyToAccess__16SaveLoadFrontEndii");
__asm__(".equ SetDState__16SaveLoadFrontEndibb, 0x0019B760");
void ready_to_access(void *self, int ignored, int state) {
    set_dstate(self, state, true, false);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x0019BF50 SetOverwrite__16SaveLoadFrontEndPCc
extern "C" char *strcpy(char *destination, const char *source);
__asm__(".equ strcpy, 0x003D3FCC");
struct save_load_overwrite_layout {
    char padding0[0x3230];
    char desc[0xb0];
    bool overwrite;
};
extern "C" void set_overwrite(
    save_load_overwrite_layout *self,
    const char *filename
) __asm__("SetOverwrite__16SaveLoadFrontEndPCc");
void set_overwrite(
    save_load_overwrite_layout *self,
    const char *filename
) {
    self->overwrite = filename == 0;
    if (!self->overwrite)
        strcpy(self->desc, filename);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x0019F0B8 DrawHeader__9NamesMenu
struct menu_entry_vtable { char padding[0x38]; short adjustment; short padding2; void (*draw)(void *self); };
struct menu_entry { char padding[0x60]; menu_entry_vtable *vtable; };
struct names_menu_draw_header_layout {
    char padding[0x4c];
    menu_entry *highlighted;
};
extern "C" void draw_names_header(names_menu_draw_header_layout *self)
    __asm__("DrawHeader__9NamesMenu");
void draw_names_header(names_menu_draw_header_layout *self) {
    menu_entry_vtable *table = self->highlighted->vtable;
    table->draw(
        (char *)self->highlighted + table->adjustment);
}

// 0x0019BF00 CancelDialog__16SaveLoadFrontEnd
extern "C" bool dialog_active_call(void *self)
    __asm__("DialogActive__16SaveLoadFrontEnd");
extern "C" void dialog_no_pressed(void *self)
    __asm__("DialogNoPressed__16SaveLoadFrontEnd");
extern "C" void cancel_dialog(void *self)
    __asm__("CancelDialog__16SaveLoadFrontEnd");
__asm__(".equ DialogActive__16SaveLoadFrontEnd, 0x0019BF38");
__asm__(".equ DialogNoPressed__16SaveLoadFrontEnd, 0x0019BE10");

void cancel_dialog(void *self)
{
    if (!dialog_active_call(self))
        return;
    dialog_no_pressed(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x0019FF08 OnUnactivate__9NamesMenuP6FEMenu
#include "KS/SRC/ks/SaveLoadFrontEnd.h"
struct SaveLoadFEManagerLayout {
    char manager_data[0x15644];
    color32 col_info_b;
};
extern SaveLoadFEManagerLayout frontendmanager;
__asm__(".equ frontendmanager, 0x003F7728");
__asm__(".equ TurnPQ__9NamesMenub, 0x0019EC78");
void NamesMenu::OnUnactivate(FEMenu *menu) {
    TurnPQ(false);
    highlighted->SetSpecialColor(frontendmanager.col_info_b, frontendmanager.col_info_b);
}

// 0x0019FF58 RefreshDisplay__9NamesMenu
#include "KS/SRC/ks/SaveLoadFrontEnd.h"
#include "decomp_annotations.h"
__asm__(".equ GetFileList__9NamesMenuii, 0x0019FFA8");
__asm__(".equ UpdateMessage__9NamesMenu, 0x0019FDD0");
void NamesMenu::RefreshDisplay() {
    if (cards[adjusted_active_card].exists)
        GetFileList(active_card, adjusted_active_card);
    UpdateMessage();
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x0019B1E0 OnCross__16SaveLoadFrontEndi
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

void SaveLoadFrontEnd::OnCross(int c)
/* shared dispatch candidate, corrected vtable context */
{
    if (active)
        active->OnCross(c);
    else
        Select();
}

// 0x001A0678 AvailAndSavedGames__9NamesMenui
struct MemCard
{
    int free;
    int exists;
    int changed;
    int available;
    int ask_format;
    int saved_games;
    int status;
};

struct names_menu_cards_layout {
    char padding[0x1bc];
    MemCard cards[2];
};

extern "C" int find_adjusted(int card)
    __asm__("FindAdjusted__9NamesMenui");
extern "C" bool available_and_saved_games(
    names_menu_cards_layout *self,
    int card
) __asm__("AvailAndSavedGames__9NamesMenui");
__asm__(".equ FindAdjusted__9NamesMenui, 0x001A0808");

bool available_and_saved_games(names_menu_cards_layout *self, int card)
{
    int adjusted = find_adjusted(card);
    return self->cards[adjusted].exists &&
           self->cards[adjusted].available &&
           self->cards[adjusted].saved_games;
}

// 0x0019ED70 TurnPQLines__9NamesMenub
struct panel_vtable { char padding[24]; short adjustment; short reserved; void (*turn_on)(void *,bool); };
struct PanelQuad { char padding[404]; panel_vtable *vtable; };
struct names_layout { char padding[540]; PanelQuad *lines[10]; };
extern "C" void turn_lines(names_layout *self,bool on) __asm__("TurnPQLines__9NamesMenub");
void turn_lines(names_layout *self,bool on)
{
    for(int i=0;i<10;++i){PanelQuad *p=self->lines[i];panel_vtable *t=p->vtable;t->turn_on((char*)p+t->adjustment,on);}
}

// 0x0019FD40 SetActiveCard__9NamesMenu
struct names_menu_set_active_layout {
    char padding0[356];
    bool save;
    char padding1[148];
    int active_card;
    int adjusted_active_card;
};
extern "C" bool available(
    names_menu_set_active_layout *self,
    int card,
    bool unformatted_ok
) __asm__("Available__9NamesMenuib");
extern "C" bool available_and_saved_games(
    names_menu_set_active_layout *self,
    int card
) __asm__("AvailAndSavedGames__9NamesMenui");
extern "C" int find_adjusted(int active)
    __asm__("FindAdjusted__9NamesMenui");
extern "C" void set_active_card(names_menu_set_active_layout *self)
    __asm__("SetActiveCard__9NamesMenu");
__asm__(".equ Available__9NamesMenuib,0x001A0610");
__asm__(".equ AvailAndSavedGames__9NamesMenui,0x001A0678");
__asm__(".equ FindAdjusted__9NamesMenui,0x001A0808");
void set_active_card(names_menu_set_active_layout *self) {
    self->active_card = 0;
    self->adjusted_active_card = find_adjusted(self->active_card);
    for (int i = 0; i < 2; i++) {
        if (
            (self->save && available(self, i, true)) ||
            available_and_saved_games(self, i)
        ) {
            self->active_card = i;
            self->adjusted_active_card = find_adjusted(i);
            break;
        }
    }
}

// 0x0019DA00 TurnPQ__10DialogMenub
#include "KS/SRC/ks/SaveLoadFrontEnd.h"
// Uses the two-entry target-build DialogMenu layout from shared context.

void DialogMenu::TurnPQ(bool on)
{
	for(int i=0; i<4; i++)
		bar[i]->TurnOn(on && type == DM_TYPE_PROGRESS);
	box->TurnOn(on);
}
