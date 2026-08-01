#ifndef IGO_ICON_MANAGER_H
#define IGO_ICON_MANAGER_H

#include "NGL/PS2/ngl_ps2.h"

class IGOIconManager {
public:
    class IconResource;

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
