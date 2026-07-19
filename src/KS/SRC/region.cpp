// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002E81C0)
// 0x002E81C0 optimize__6region
class region {
public:
    void optimize();
};

void region::optimize() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E68D8)
// 0x002E68D8 sort_entities__6region
class region { public: void x_sort_entities_by_bounding_box_info(); void sort_entities(); };
__asm__(".equ x_sort_entities_by_bounding_box_info__6region, 0x002E68F8");
void region::sort_entities() { x_sort_entities_by_bounding_box_info(); __asm__ volatile(""); }
#endif
