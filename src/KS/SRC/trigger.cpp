// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0028D610)
// 0x0028D610 new_box_trigger__15trigger_managerP6entity
class entity;
class trigger;

class trigger_manager {
public:
    trigger* new_box_trigger(entity* value);
};

trigger* trigger_manager::new_box_trigger(entity* value) {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028D618)
// 0x0028D618 add__15trigger_managerP7trigger
struct trigger { char padding[0x18]; trigger* next; };
class trigger_manager { char padding[0x10]; trigger* head; public: void add(trigger* value); };
void trigger_manager::add(trigger* value) { value->next = head; head = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028DEE0)
// 0x0028DEE0 get_abs_position__C13point_trigger
class vector3d {
    float x;
    float y;
    float z;
};

class point_trigger {
    char padding[0x38];
    vector3d position;
public:
    const vector3d& get_abs_position() const;
};

const vector3d& point_trigger::get_abs_position() const {
    return position;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028E948)
// 0x0028E948 update_region__14region_trigger
class region_trigger {
public:
    void update_region();
};

void region_trigger::update_region() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028EB18)
// 0x0028EB18 get_abs_position__C14entity_trigger
class vector3d { float x; float y; float z; };
struct entity_position_holder { char padding[0x30]; vector3d position; };
struct entity { char padding[0x50]; entity_position_holder* absolute; };
class entity_trigger { char padding[0x38]; entity* ent; public: const vector3d& get_abs_position() const; };
const vector3d& entity_trigger::get_abs_position() const { return ent->absolute->position; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028EB28)
// 0x0028EB28 update_region__14entity_trigger
class entity_trigger {
public:
    void update_region();
};

void entity_trigger::update_region() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028DD50)
// 0x0028DD50 __13point_triggerRC7stringx
class stringx;

extern "C" void TriggerCtor(void *self, const stringx &id)
    __asm__("__7triggerRC7stringx");
__asm__(".equ __7triggerRC7stringx, 0x0028D838");

extern const char point_trigger_vtable[];
__asm__(".equ point_trigger_vtable, 0x004FB0A0");

struct point_trigger_layout {
    char padding[8];
    const void *vtable;
};

extern "C" void *PointTriggerCtor(void *self, const stringx &id)
    __asm__("__13point_triggerRC7stringx");

void *PointTriggerCtor(void *self, const stringx &id)
{
    TriggerCtor(self, id);
    ((point_trigger_layout *)self)->vtable = point_trigger_vtable;
    return self;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028E7C0)
// 0x0028E7C0 __14region_triggerRC7stringx
class stringx;

extern "C" void TriggerCtor(void *self, const stringx &id)
    __asm__("__7triggerRC7stringx");
__asm__(".equ __7triggerRC7stringx, 0x0028D838");

extern const char region_trigger_vtable[];
__asm__(".equ region_trigger_vtable, 0x004FB040");

struct region_trigger_layout {
    char padding[8];
    const void *vtable;
};

extern "C" void *RegionTriggerCtor(void *self, const stringx &id)
    __asm__("__14region_triggerRC7stringx");

void *RegionTriggerCtor(void *self, const stringx &id)
{
    TriggerCtor(self, id);
    ((region_trigger_layout *)self)->vtable = region_trigger_vtable;
    return self;
}
#endif
