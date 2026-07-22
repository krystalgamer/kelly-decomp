#ifndef KELLY_DECOMP_PS2_GAMESAVER_SHARED_H
#define KELLY_DECOMP_PS2_GAMESAVER_SHARED_H

#include "KS/SRC/stringx.h"

extern "C" int sprintf(char*, const char*, ...);

enum {
    GT_MEMORY_CARD_PS2 = 554,
    GT_MEMORY_SLOT_PS2,
};

extern stringx ksGlobalTextArray[];

class GenericGameSaver {
public:
    stringx getCardString(int port, int slot);
    stringx getShortCardString(int port, int slot);
};

#endif
