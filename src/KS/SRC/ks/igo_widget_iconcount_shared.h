#ifndef KELLY_DECOMP_IGO_WIDGET_ICONCOUNT_SHARED_H
#define KELLY_DECOMP_IGO_WIDGET_ICONCOUNT_SHARED_H

#include "KS/SRC/ks/FEPanel_shared.h"
#include "KS/SRC/ks/igo_widget.h"

class IconCountWidget : public IGOWidget {
private:
    enum {
        STATE_NONE,
        STATE_ICON,
        STATE_360_SPIN,
        STATE_360_SPIN_SCORE,
        STATE_540_SPIN,
        STATE_540_SPIN_SCORE
    };

    PanelQuad *objectRoot;
    TextString *iconText;
    TextString *iconCountText;
    float hiliteTime;
    float fade;
    int fadeDir;
    int num_icons;
    int num_spins;
    int state;
    float timer;

public:
    IconCountWidget(int type);
    virtual ~IconCountWidget();
    virtual void SetDisplay(bool value = true);
    void Init(
        PanelFile &panel,
        Font *numberfont,
        Font *textfont,
        const color32 &textColor1,
        const color32 &textColor2);
    virtual void Update(float time);
    virtual void Draw();
    void Hide(bool fadeOut = true);
    void Show(bool fadeIn = true);
};

__asm__(".equ GetPointer__9PanelFilePCc, 0x00152F88");

#endif
