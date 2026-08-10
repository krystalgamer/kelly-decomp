// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0010BA90)
// 0x0010BA90 optimize__11ai_polypath
#include "KS/SRC/ai_polypath.h"
#include "KS/SRC/wds.h"

__asm__(".equ compute_sector__16ai_polypath_cellR7terrainb, 0x0010D2D8");
void ai_polypath::optimize() {
    vector<ai_polypath_cell *>::iterator current=cells.begin();
    vector<ai_polypath_cell *>::iterator end=cells.end();
    while (current!=end) {
        (*current)->compute_sector(g_world_ptr->get_the_terrain(),true);
        ++current;
    }
}
#endif
