// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00285B90)
// 0x00285B90 InCombat__C8PushMode
#include "KS/SRC/game.h"

bool PushMode::InCombat() const {
    for (int i = 0; i < 2; ++i) {
        if (players[i].extraShare > 0) {
            return true;
        }
    }
    return false;
}
#endif
