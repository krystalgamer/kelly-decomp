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
        void SetShow(bool visible = true);
    };
};

#endif
