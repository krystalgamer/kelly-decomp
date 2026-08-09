#ifndef MENU_SOUND_H
#define MENU_SOUND_H

#pragma interface

#include "KS/SRC/ks/menu.h"
#include "NSL/PS2/nsl_ps2.h"

typedef MenuEntryButtonFunctionPtr pMenuEntryButtonFunction;

class SoundMenuEntryFunctionFloatEdit : public MenuEntryFunctionFloatEdit {
    float *target;

protected:
    float low;
    float high;
    float step;
    char *format;
    pMenuEntryButtonFunction function;

public:
    nslSourceId src;
    nslSoundId snd;

    SoundMenuEntryFunctionFloatEdit(
        char *text,
        float *target,
        pMenuEntryButtonFunction function,
        nslSourceId source,
        float low,
        float high,
        float step);
    virtual ~SoundMenuEntryFunctionFloatEdit() {}
};

#endif
