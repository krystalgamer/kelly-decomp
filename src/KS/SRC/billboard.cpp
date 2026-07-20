// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002C1020)
// 0x002C1020 get_center__C12vr_billboardf
class vector3d { float x; float y; float z; };
extern const vector3d billboard_center;
__asm__(".equ billboard_center, 0x004318B8");

class vr_billboard {
public:
    const vector3d& get_center(float delta_t) const;
};

const vector3d& vr_billboard::get_center(float delta_t) const {
    return billboard_center;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C1030)
// 0x002C1030 get_radius__C12vr_billboardf
class vr_billboard { char padding[0x134]; float width; float height; public: float get_radius(float delta_t) const; };
float vr_billboard::get_radius(float delta_t) const { return width + height; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C1040)
// 0x002C1040 compute_xz_radius_rel_center__12vr_billboardRC2po
class po;
class vr_billboard { char padding[0x134]; float width; float height; public: float compute_xz_radius_rel_center(const po& transform); };
float vr_billboard::compute_xz_radius_rel_center(const po& transform) { return width + height; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C10B8)
// 0x002C10B8 time_value_to_frame__12vr_billboardf
class vr_billboard { public: float time_value_to_frame(float time); };
float vr_billboard::time_value_to_frame(float time) { return time * 30.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C1000)
// 0x002C1000 get_anim_length__C12vr_billboard
class mat_fac { public: int get_anim_length() const; };
__asm__(".equ get_anim_length__C7mat_fac, 0x002BD170");
class vr_billboard { char padding[0x18]; mat_fac my_material; public: int get_anim_length() const; };
int vr_billboard::get_anim_length() const { int result = my_material.get_anim_length(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BD210)
// 0x002BD210 flush__12vr_billboard
class aggregate_vert_buf_list { public: void flush(); };
__asm__(".equ flush__23aggregate_vert_buf_list, 0x003382E8");
struct geometry_manager_layout { char padding[0x194]; aggregate_vert_buf_list buffers; };
extern geometry_manager_layout *g_geometry_manager;
__asm__(".equ g_geometry_manager, 0x00431A8C");
class vr_billboard { public: void flush(); };
void vr_billboard::flush() { g_geometry_manager->buffers.flush(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C1050)
// 0x002C1050 render_passes_needed__C12vr_billboard
class mat_fac { public: bool is_translucent() const; };
__asm__(".equ is_translucent__C7mat_fac, 0x002BD178");
class vr_billboard { char padding[0x18]; mat_fac material; public: int render_passes_needed() const; };
int vr_billboard::render_passes_needed() const { return material.is_translucent() ? 2 : 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C10C8)
// 0x002C10C8 render_instance__12vr_billboardP7nglMeshPiUiP20instance_render_infoPs
struct nglMesh;
struct instance_render_info;

struct billboard_vtable {
    char padding[0xa0];
    short adjustment;
    short padding2;
    void (*render_batch)(
        void *self,
        nglMesh *mesh,
        int *num_quads,
        unsigned int flavor,
        instance_render_info *info,
        int enabled,
        short *lookup
    );
};

class vr_billboard {
    char padding[0x10];
    billboard_vtable *vtable;

public:
    void render_instance(
        nglMesh *mesh,
        int *num_quads,
        unsigned int flavor,
        instance_render_info *info,
        short *lookup
    );
};

void vr_billboard::render_instance(
    nglMesh *mesh,
    int *num_quads,
    unsigned int flavor,
    instance_render_info *info,
    short *lookup
) {
    billboard_vtable *table = vtable;
    table->render_batch(
        (char *)this + table->adjustment,
        mesh,
        num_quads,
        flavor,
        info,
        1,
        lookup
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C10F8)
// 0x002C10F8 render_instance__12vr_billboardUiP20instance_render_infoPs
struct instance_render_info;

struct billboard_vtable {
    char padding[0xa8];
    short adjustment;
    short padding2;
    void (*render_batch)(
        void *self,
        unsigned int flavor,
        instance_render_info *info,
        int enabled,
        short *lookup
    );
};

class vr_billboard {
    char padding[0x10];
    billboard_vtable *vtable;

public:
    void render_instance(
        unsigned int flavor,
        instance_render_info *info,
        short *lookup
    );
};

void vr_billboard::render_instance(
    unsigned int flavor,
    instance_render_info *info,
    short *lookup
) {
    billboard_vtable *table = vtable;
    table->render_batch(
        (char *)this + table->adjustment,
        flavor,
        info,
        1,
        lookup
    );
}
#endif
