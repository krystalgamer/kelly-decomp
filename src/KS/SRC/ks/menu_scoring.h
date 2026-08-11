#ifndef INCLUDED_MENU_SCORING_H
#define INCLUDED_MENU_SCORING_H

#pragma interface

#include "KS/SRC/ks/menu.h"

class TrickMenu : public Menu {
public:
    TrickMenu(Menu *parent, int entries, MenuEntry **entry)
        : Menu(parent, entries, entry)
    {
    }
    virtual ~TrickMenu();
    virtual void OnOpen(Menu *close_to, MenuSystem *control);
};

extern bool os_file_system_locked;

void SaveScoringSystem();
void LoadScoringSystem();
bool SaveScoringButton(MenuEntry *entry, int button_id);
bool LoadScoringButton(MenuEntry *entry, int button_id);

__asm__(".equ os_file_system_locked, 0x0040E3A0");
__asm__(".equ SaveScoringSystem__Fv, 0x0024ACF0");
__asm__(".equ LoadScoringSystem__Fv, 0x0024A560");

#endif
