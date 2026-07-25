#ifndef KELLY_DECOMP_TITLE_FRONT_END_SHARED_H
#define KELLY_DECOMP_TITLE_FRONT_END_SHARED_H

#define KELLY_DECOMP_FULL_FEMENU_ENTRY
#define KELLY_DECOMP_BUILT_FEMENU_SELECT_PADDING
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_BUILT_FEMENU_SELECT_PADDING
#undef KELLY_DECOMP_FULL_FEMENU_ENTRY

#include "KS/SRC/ks/FrontEndManager_shared.h"
#include "KS/SRC/ks/SoundScript_shared.h"

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

void nslFrameAdvance(float time_elapsed);
__asm__(".equ nslFrameAdvance__Ff, 0x00390068");

#endif
