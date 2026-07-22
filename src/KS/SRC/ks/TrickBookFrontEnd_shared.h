#ifndef KELLY_DECOMP_TRICK_BOOK_FRONT_END_SHARED_H
#define KELLY_DECOMP_TRICK_BOOK_FRONT_END_SHARED_H

#include "KS/SRC/ks/FEMenu_shared.h"
#include "KS/SRC/ks/trickdata.h"

class TrickBookFrontEnd : public FEMultiMenu {
public:
    static bool TrickOK(int trick);
};

#endif
