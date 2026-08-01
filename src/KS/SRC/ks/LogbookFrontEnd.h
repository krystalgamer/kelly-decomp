#ifndef LOGBOOK_FRONT_END_H
#define LOGBOOK_FRONT_END_H

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/FEMenu.h"

class GraphicalMenuSystem;

class FEManager {
    char fields_before_font_body[0x10BBC];

public:
    Font font_body;

private:
    char fields_between_fonts[0x130E4 - 0x10BBC - sizeof(Font)];

public:
    Font font_bold_old;
};

class LogbookFrontEnd : public FEMultiMenu {
private:
    enum {
        max_notes = 32
    };

    GraphicalMenuSystem *sys;
    BoxText *notes[max_notes];
    TextString *dates[max_notes];
    stringx note_body[max_notes];
    int note_page_num[max_notes];
    PanelQuad *book;
    int cur_spread;
    int max_spread;

public:
    LogbookFrontEnd(
        FEMenuSystem *system,
        FEManager *manager,
        stringx path,
        stringx panel_name);
    virtual ~LogbookFrontEnd();
    virtual void Load();
    virtual void Select(int);
    virtual void Draw();
    virtual void OnActivate();
    virtual void OnLeft(int);
    virtual void OnRight(int);
    virtual void OnTriangle(int);
};

void *operator new(
    unsigned int size,
    unsigned int heap,
    const char *description,
    int line);

__asm__(
    ".equ cons__15FEGraphicalMenuP12FEMenuSystemP9FEManagerG7stringxT3, "
    "0x00157D38");
__asm__(
    ".equ cons__11FEMenuEntryG7stringxP6FEMenubP4Font, "
    "0x001559B0");
__asm__(".equ Add__6FEMenuP11FEMenuEntry, 0x001566B8");
__asm__(
    ".equ cons__7BoxTextP4FontG7stringxffif"
    "Q24Font9HORIZJUSTQ24Font8VERTJUSTG7color32i, "
    "0x00149638");
__asm__(
    ".equ cons__10TextStringP4FontG7stringxffif"
    "Q24Font9HORIZJUSTQ24Font8VERTJUSTbG7color32, "
    "0x00148150");
__asm__(".equ __nw__FUiUiPCci, 0x002AC578");

#endif
