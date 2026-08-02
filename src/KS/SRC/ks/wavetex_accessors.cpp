// Released wave-texture player accessors.

#include "KS/SRC/ks/wavetex.h"

// 0x0037E728 WAVETEX_SetPlayer__Fi
void WAVETEX_SetPlayer(int player) {
    wavetex_playerid = player;
}

// 0x0037E738 WAVETEX_GetPlayer__Fv
int WAVETEX_GetPlayer() {
    return wavetex_playerid;
}
