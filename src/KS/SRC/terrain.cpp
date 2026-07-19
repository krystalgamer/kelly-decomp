// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002E81C8)
// 0x002E81C8 __10partition3
class partition3 {
    char padding[0x10];
    void* my_sector;
public:
    partition3();
};

partition3::partition3() {
    my_sector = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EC610)
// 0x002EC610 find_sector__C7terrainRC8vector3d
class vector3d;
class sector;
class tree_t { public: sector *find_sector(const vector3d &position) const; };
__asm__(".equ find_sector__C6tree_tRC8vector3d, 0x002E83D0");
class terrain { char padding[0x34]; tree_t *tree; public: sector *find_sector(const vector3d &position) const; };
sector *terrain::find_sector(const vector3d &position) const { sector *result = tree->find_sector(position); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
