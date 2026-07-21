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

#if defined(KELLY_DECOMP_FUNCTION_002DC2B8)
// 0x002DC2B8 xform__7cg_noneRC2po
class po;
class collision_geometry { public: void xform(const po &value); };
__asm__(".equ xform__18collision_geometryRC2po, 0x002D89C0");
class cg_none : public collision_geometry { public: void xform(const po &value); };
void cg_none::xform(const po &value) { collision_geometry::xform(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002DC288)
// 0x002DC288 _$_7cg_none
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_18collision_geometry");
extern const char base_vtable[];
__asm__(".equ _$_18collision_geometry, 0x002D8658");
__asm__(".equ base_vtable, 0x004F3148");
struct object_layout { char padding[0x8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_7cg_none");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D8658)
// 0x002D8658 _$_18collision_geometry
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F31E8");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_18collision_geometry");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002DBDB0)
// 0x002DBDB0 compare_cface__FPCvT0
struct vector3d { float x; float y; float z; };
class cface { char padding[0x2c]; vector3d raw_center; public: const vector3d& get_raw_center() const { return raw_center; } };
static int compare_cface(const void* x1, const void* x2)
{
    cface* cf1 = (cface*)x1;
    cface* cf2 = (cface*)x2;
    int result;
    if (cf1->get_raw_center().x < cf2->get_raw_center().x)
        result = -1;
    else if (cf1->get_raw_center().x > cf2->get_raw_center().x)
        result = 1;
    else
        return 0;
    __asm__ volatile("" : "+r"(result));
    return result;
}
#endif
