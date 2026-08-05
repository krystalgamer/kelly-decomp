// Matching decompilation blocks selected by generated build shims.


// 0x00381218 ReloadWaveTextures__FP9MenuEntryi
#include "KS/SRC/ks/menu.h"
#include "KS/SRC/ks/wavetex.h"

__asm__(".equ WAVETEX_ReloadTextureAnims__Fv, 0x0037F260");

bool ReloadWaveTextures(MenuEntry *, int button)
{
    if (button == 7)
        WAVETEX_ReloadTextureAnims();
    return true;
}
