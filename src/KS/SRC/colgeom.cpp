// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002D8638)
// 0x002D8638 __18collision_geometry
extern void* collision_geometry_vtable;
__asm__(".equ collision_geometry_vtable, 0x004F31E8");
class collision_geometry { char padding[0x4]; void* owner; void* vptr; public: collision_geometry(); };
collision_geometry::collision_geometry() { owner = 0; vptr = &collision_geometry_vtable; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D89C0)
// 0x002D89C0 xform__18collision_geometryRC2po
class po;

class collision_geometry {
    char padding[0x4];
    bool valid;
public:
    void xform(const po& transform);
};

void collision_geometry::xform(const po& transform) {
    valid = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D9FA8)
// 0x002D9FA8 get_type__C7cg_mesh
class cg_mesh {
public:
    unsigned int get_type() const;
};

unsigned int cg_mesh::get_type() const {
    return 2;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002DC2B0)
// 0x002DC2B0 get_type__C7cg_none
class cg_none {
public:
    unsigned int get_type() const;
};

unsigned int cg_none::get_type() const {
    return 0;
}
#endif
