#ifndef KELLY_DECOMP_SURFER_FRONT_END_SHARED_H
#define KELLY_DECOMP_SURFER_FRONT_END_SHARED_H

#define KELLY_DECOMP_FEMENU_LAYOUT_PADDING
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_FEMENU_LAYOUT_PADDING

class SurferBioFrontEnd : public FEMultiMenu {
public:
    void Load();
};

#endif
