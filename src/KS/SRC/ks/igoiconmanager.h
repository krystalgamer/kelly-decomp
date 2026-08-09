#ifndef IGO_ICON_MANAGER_H
#define IGO_ICON_MANAGER_H

#include "NGL/PS2/ngl_ps2.h"

class IGOIconManager {
public:
    class IconResource {
    public:
        nglTexture *texture;
        int trickIdx;
        unsigned int bitmask;
        unsigned char timesDisplayed;
        unsigned char iconType;
        bool avail;

        IconResource();
        ~IconResource();
    };

    class Icon {
        nglQuad quad;
        IconResource *resource;
        float y;
        float vy;
        float sizeInterp;
        float colorInterp;
        bool show;
        unsigned char state;

    public:
        Icon();
        ~Icon();
        void Draw();
        void SetShow(bool visible = true);
    };

private:
    char icon_manager_data_before_icon_counter[0xb5c];
    int iconCounter;
    char icon_manager_data_before_done[0x1698 - 0xb60];
    bool done_before;

public:
    bool FirstTimeGettingThisMany(int goal, bool ignore_previous);
};

#endif
