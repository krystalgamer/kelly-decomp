#ifndef INCLUDED_IGOLEARN_NEW_TRICKMANAGER_H
#define INCLUDED_IGOLEARN_NEW_TRICKMANAGER_H

#pragma interface

#include "KS/SRC/ks/eventmanager.h"
#include "NGL/PS2/ngl_ps2.h"

class Font;

class IGOLearnNewTrickManager : public EventRecipient {
private:
    class IconResource {
    public:
        nglTexture *texture;
        int trickIdx;

        IconResource();
        ~IconResource();
    };

    class Icon {
    public:
        nglQuad quad;
        IconResource *resource;
        bool show;

        Icon();
        ~Icon();
        void SetShow(bool visible = true);
    };

    enum {
        ICON_BUTTON_ARROW,
        ICON_BUTTON_CROSS,
        ICON_BUTTON_CIRCLE,
        ICON_BUTTON_TRIANGLE,
        ICON_BUTTON_SQUARE,
        ICON_BUTTON_PLUS,
        ICON_BUTTON_COMMA,
        ICON_BUTTON_QUESTION_MARK,
        ICON_NUM_BUTTONS
    };

    nglTexture *buttonTexture[ICON_NUM_BUTTONS];
    int numIconResources;
    IconResource *iconResources;
    Icon *current_icon;
    bool icon_active;
    int iconCounter;
    int prev_iconCounter;
    int current_trickIdx;
    float addIconDelay;
    float addIconTimer;
    float subPointsTimer;
    int specialCounter;
    float trick_available_time;
    bool already_got_one;
    bool got_one_currently;
    nglTexture *counterTexture;
    nglQuad counterQuad;

    virtual void OnEvent(
        EVENT event,
        int param1 = 0,
        int param2 = 0);

public:
    ~IGOLearnNewTrickManager();
    void Reset();
    void PopFront(bool complete = false);
    void TrickChain(int trick_index);
};

#endif
