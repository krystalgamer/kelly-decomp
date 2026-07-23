// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0010BA90)
// 0x0010BA90 optimize__11ai_polypath
class terrain;
class ai_polypath_cell {
public:
    void compute_sector(terrain &value, bool high_resolution);
};
__asm__(".equ compute_sector__16ai_polypath_cellR7terrainb, 0x0010D2D8");
struct world_layout { char padding[0xec]; terrain *the_terrain; };
extern world_layout *g_world_ptr;
__asm__(".equ g_world_ptr, 0x00431A8C");
class ai_polypath {
    ai_polypath_cell **begin_value;
    ai_polypath_cell **end_value;
public:
    void optimize();
};
void ai_polypath::optimize() {
    ai_polypath_cell **current=begin_value;
    ai_polypath_cell **end=end_value;
    while (current!=end) {
        (*current)->compute_sector(*g_world_ptr->the_terrain,true);
        ++current;
    }
}
#endif
