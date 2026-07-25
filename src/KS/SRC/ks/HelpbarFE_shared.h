#ifndef KELLY_DECOMP_HELPBAR_FE_SHARED_H
#define KELLY_DECOMP_HELPBAR_FE_SHARED_H

#include "KS/SRC/ks/FEMenu_shared.h"

#pragma interface

class HelpbarFE : public FrontEnd {
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
    virtual ~HelpbarFE();
    virtual void Draw();
    virtual void LoadPanel(bool floating = false);

    inline void DisableHelpbar() {
        disabled = true;
    }

protected:
    virtual void SetPQIndices();
};

#endif
