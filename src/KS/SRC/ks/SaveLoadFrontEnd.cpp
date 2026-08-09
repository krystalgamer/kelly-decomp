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
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

int SaveLoadFrontEnd::getActiveCard() {
    return NameMenu->ActiveCard();
}

// 0x0019BF38 DialogActive__16SaveLoadFrontEnd
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

bool SaveLoadFrontEnd::DialogActive() {
    return active == dialogMenu;
}

// 0x0019EDD8 Init__9NamesMenu
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

void NamesMenu::Init() {
    sl_parent = (SaveLoadFrontEnd *)parent;
}

// 0x001A0808 FindAdjusted__9NamesMenui
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

int NamesMenu::FindAdjusted(int active) {
    return active;
}

// 0x001A0810 FindActive__9NamesMenui
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

int NamesMenu::FindActive(int adjusted) {
    return adjusted;
}

// 0x001A1CF8 Init__12KeyboardMenu
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

void KeyboardMenu::Init() {
    sl_parent = (SaveLoadFrontEnd *)parent;
}

// 0x001A07B0 ActiveFile__9NamesMenu
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

int NamesMenu::ActiveFile() {
    if (!highlighted)
        return -1;
    else
        return secondary_cursor->entry_num;
}

// 0x0019BF50 SetOverwrite__16SaveLoadFrontEndPCc
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

extern "C" char *strcpy(char *destination, const char *source);
__asm__(".equ strcpy, 0x003D3FCC");
void SaveLoadFrontEnd::SetOverwrite(const char *filename) { overwrite = filename == 0; if (!overwrite) { char *(*copy)(char *, const char *) = strcpy; copy(desc, filename); } }

// 0x0019F0B8 DrawHeader__9NamesMenu
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

void NamesMenu::DrawHeader() { highlighted->Draw(); }

// 0x0019BF00 CancelDialog__16SaveLoadFrontEnd
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

extern "C" void dialog_no_pressed(SaveLoadFrontEnd *self)
    __asm__("DialogNoPressed__16SaveLoadFrontEnd");
__asm__(".equ DialogActive__16SaveLoadFrontEnd, 0x0019BF38");
__asm__(".equ DialogNoPressed__16SaveLoadFrontEnd, 0x0019BE10");

void SaveLoadFrontEnd::CancelDialog()
{
    if (!DialogActive())
        return;
    void (*no_pressed)(SaveLoadFrontEnd *) = dialog_no_pressed;
    no_pressed(this);
}

// 0x0019FF08 OnUnactivate__9NamesMenuP6FEMenu
#include "KS/SRC/ks/FrontEndManager.h"
#include "KS/SRC/ks/SaveLoadFrontEnd.h"
__asm__(".equ frontendmanager, 0x003F7728");
__asm__(".equ TurnPQ__9NamesMenub, 0x0019EC78");
void NamesMenu::OnUnactivate(FEMenu *menu) {
    TurnPQ(false);
    highlighted->SetSpecialColor(frontendmanager.col_info_b, frontendmanager.col_info_b);
}

// 0x0019FF58 RefreshDisplay__9NamesMenu
#include "KS/SRC/ks/SaveLoadFrontEnd.h"
__asm__(".equ GetFileList__9NamesMenuii, 0x0019FFA8");
__asm__(".equ UpdateMessage__9NamesMenu, 0x0019FDD0");
extern "C" void update_names_message(NamesMenu *menu)
    __asm__("UpdateMessage__9NamesMenu");

void NamesMenu::RefreshDisplay() {
    if (cards[adjusted_active_card].exists)
        GetFileList(active_card, adjusted_active_card);
    void (*update_message)(NamesMenu *) = update_names_message;
    update_message(this);
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

// Source implementation boundary.
// 0x001DCDF0 OnTriangle__10DialogMenui
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

void DialogMenu::OnTriangle(int command) {
}

// 0x001DCCE8 __tf16SaveLoadFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCCE8() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCCE8[] __asm__("__ti16SaveLoadFrontEnd");
extern const char name_001DCCE8[];
extern void *base_type_001DCCE8[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti16SaveLoadFrontEnd, 0x005A2CA8");
__asm__(".equ name_001DCCE8, 0x004DDD28");
__asm__(".equ base_type_001DCCE8, 0x004DDC48");
extern "C" void **Rtti_001DCCE8() __asm__("__tf16SaveLoadFrontEnd");
void **Rtti_001DCCE8()
{
    if (!type_001DCCE8[0]) {
        BaseRtti_001DCCE8();
        __rtti_class(type_001DCCE8, name_001DCCE8, base_type_001DCCE8, 1);
    }
    return type_001DCCE8;
}

// 0x001DCD40 __tf9NamesMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCD40() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCD40[] __asm__("__ti9NamesMenu");
extern const char name_001DCD40[];
extern void *base_type_001DCD40[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti9NamesMenu, 0x005A2CB8");
__asm__(".equ name_001DCD40, 0x004DDD40");
__asm__(".equ base_type_001DCD40, 0x004DDC48");
extern "C" void **Rtti_001DCD40() __asm__("__tf9NamesMenu");
void **Rtti_001DCD40()
{
    if (!type_001DCD40[0]) {
        BaseRtti_001DCD40();
        __rtti_class(type_001DCD40, name_001DCD40, base_type_001DCD40, 1);
    }
    return type_001DCD40;
}

// 0x001DCD98 __tf10DialogMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCD98() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCD98[] __asm__("__ti10DialogMenu");
extern const char name_001DCD98[];
extern void *base_type_001DCD98[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti10DialogMenu, 0x005A2CC8");
__asm__(".equ name_001DCD98, 0x004DDD50");
__asm__(".equ base_type_001DCD98, 0x004DDC48");
extern "C" void **Rtti_001DCD98() __asm__("__tf10DialogMenu");
void **Rtti_001DCD98()
{
    if (!type_001DCD98[0]) {
        BaseRtti_001DCD98();
        __rtti_class(type_001DCD98, name_001DCD98, base_type_001DCD98, 1);
    }
    return type_001DCD98;
}

// 0x001DCE18 __tf12KeyboardMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCE18() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCE18[] __asm__("__ti12KeyboardMenu");
extern const char name_001DCE18[];
extern void *base_type_001DCE18[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti12KeyboardMenu, 0x005A2CD8");
__asm__(".equ name_001DCE18, 0x004DDD60");
__asm__(".equ base_type_001DCE18, 0x004DDC48");
extern "C" void **Rtti_001DCE18() __asm__("__tf12KeyboardMenu");
void **Rtti_001DCE18()
{
    if (!type_001DCE18[0]) {
        BaseRtti_001DCE18();
        __rtti_class(type_001DCE18, name_001DCE18, base_type_001DCE18, 1);
    }
    return type_001DCE18;
}
