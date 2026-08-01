#ifndef TUTORIAL_FRONT_END_H
#define TUTORIAL_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class IGOTutorialManager {
    char padding[0x28];

public:
    int wave_indicator_type;
    void StopCurrentVO();
};

class IGOFrontEnd {
    char padding[0x480];

public:
    IGOTutorialManager *tutorial_manager;
};

class PauseMenuSystem : public FEMenuSystem {
public:
    bool drawing;
};

class WaveIndicatorWidget {
public:
    void Hide(bool fade_out = true);
};

struct TutorialFEManager {
    IGOFrontEnd *IGO;
    PauseMenuSystem *pms;
};

extern TutorialFEManager frontendmanager;

class TutorialFrontEnd : public FEMultiMenu {
    PanelQuad *bgPQs[9];
    void *help_text;
    void *pause_button_text;
    WaveIndicatorWidget *waveIndicator;
    bool ignore_next_release;

public:
    virtual void Load();
    virtual void OnButtonRelease(int controller, int button);
};

__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ StopCurrentVO__18IGOTutorialManager, 0x0015A2C0");
__asm__(".equ Hide__19WaveIndicatorWidgetb, 0x00168180");

#endif
