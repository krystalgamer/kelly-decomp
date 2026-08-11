// Matching decompilation blocks selected by generated build shims.


// 0x00163FC0 Draw__14IGOHintManager
#include "KS/SRC/ks/igohintmanager.h"
__asm__(".equ g_game_ptr, 0x0046AC64");
__asm__(".equ is_paused__C4game, 0x0027D968");
void IGOHintManager::Draw() {
    if (!g_game_ptr->is_paused())
        instruction_text->Draw();
}
