// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00125228)
// 0x00125228 set_last_collision_normal__18physical_interfaceRC8vector3d
struct vector3d { float x; float y; float z; vector3d &operator=(const vector3d &other) { x = other.x; y = other.y; z = other.z; return *this; } };
class physical_interface { char padding[0x50]; vector3d last_collision_normal; public: void set_last_collision_normal(const vector3d &value); };
void physical_interface::set_last_collision_normal(const vector3d &value) { last_collision_normal = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00122CC8)
// 0x00122CC8 using_velocity__C18physical_interface
struct entity_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    bool (*is_stationary)(void *self);
};

class entity {
    char padding[8];

public:
    entity_vtable *vtable;
};

class physical_interface {
    char padding[4];
    entity *my_entity;

public:
    bool using_velocity() const;
};

bool physical_interface::using_velocity() const {
    entity_vtable *table = my_entity->vtable;
    return !table->is_stationary(
        (char *)my_entity + table->adjustment
    );
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00125B18)
// 0x00125B18 destroy_guidance_sys__18physical_interface
class physical_interface;
class guidance_system {
    physical_interface* owner;
    int flags;
public:
    virtual ~guidance_system();
};
class physical_interface {
    char padding[0x90];
    guidance_system* guide_sys;
public:
    void destroy_guidance_sys();
};
void physical_interface::destroy_guidance_sys()
{
    delete guide_sys;
    guide_sys = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00122C60)
// 0x00122C60 _$_18physical_interface
extern "C" void destroy_guidance(void *) __asm__("destroy_guidance_sys__18physical_interface");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char physical_vtable[];
extern const char generic_vtable[];
__asm__(".equ destroy_guidance_sys__18physical_interface,0x00125B18");
__asm__(".equ __builtin_delete,0x002AC6B0");
__asm__(".equ physical_vtable,0x004CDD58");
__asm__(".equ generic_vtable,0x004C85B8");
struct physical_layout { const void *vtable; void *entity; char padding[136]; void *guidance; };
extern "C" void destroy_physical(physical_layout *self, int deleting) __asm__("_$_18physical_interface");
void destroy_physical(physical_layout *self, int deleting)
{
    self->vtable = physical_vtable;
    if (self->guidance)
        destroy_guidance(self);
    self->entity = 0;
    self->vtable = generic_vtable;
    if (deleting & 1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
