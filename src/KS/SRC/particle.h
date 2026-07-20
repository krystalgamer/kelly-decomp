// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003000D8)
// 0x003000D8 is_a_particle_generator__C18particle_generator
class particle_generator {
public:
    bool is_a_particle_generator() const;
};

bool particle_generator::is_a_particle_generator() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003000E0)
// 0x003000E0 get_distance_fade_ok__C18particle_generator
class particle_generator {
public:
    bool get_distance_fade_ok() const;
};

bool particle_generator::get_distance_fade_ok() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00385388)
// 0x00385388 _GLOBAL_$I$TRAIL_StaticInit__Fv
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$TRAIL_StaticInit__Fv");
__asm__(".equ __static_initialization_and_destruction_0, 0x00382368");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003853A8)
// 0x003853A8 _GLOBAL_$D$TRAIL_StaticInit__Fv
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$TRAIL_StaticInit__Fv");
__asm__(".equ __static_initialization_and_destruction_0, 0x00382368");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003000E8)
// 0x003000E8 is_active__C18particle_generator
struct entity_vtable_layout { char padding[0x158]; short adjustment; short padding2; bool (*is_visible)(void *self); };
class particle_generator { char padding[8]; entity_vtable_layout *vtable; public: bool is_active() const; };
bool particle_generator::is_active() const { entity_vtable_layout *table = vtable; return table->is_visible((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00300148)
// 0x00300148 frame_done__18particle_generator
struct vector3d { float x; float y; float z; vector3d &operator=(const vector3d &other) { x = other.x; y = other.y; z = other.z; return *this; } };
struct particle_source_layout { char padding[0x30]; vector3d position; };
class particle_generator { char padding0[0x50]; particle_source_layout *source; char padding1[0x264]; vector3d last_position; public: void frame_done(); };
void particle_generator::frame_done() { last_position = source->position; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00300170)
// 0x00300170 possibly_active__C18particle_generator
struct entity_vtable_layout { char padding[0x168]; short adjustment; short padding2; bool (*is_still_visible)(void *self); };
class particle_generator { char padding[8]; entity_vtable_layout *vtable; public: bool possibly_active() const; };
bool particle_generator::possibly_active() const { entity_vtable_layout *table = vtable; return table->is_still_visible((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00300198)
// 0x00300198 possibly_aging__C18particle_generator
struct entity_vtable_layout { char padding[0x168]; short adjustment; short padding2; bool (*is_still_visible)(void *self); };
class particle_generator { char padding[8]; entity_vtable_layout *vtable; public: bool possibly_aging() const; };
bool particle_generator::possibly_aging() const { entity_vtable_layout *table = vtable; return table->is_still_visible((char *)this + table->adjustment); }
#endif
