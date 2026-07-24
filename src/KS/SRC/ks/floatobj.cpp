// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001FAFF0) || \
    defined(KELLY_DECOMP_FUNCTION_001FB3C8) || \
    defined(KELLY_DECOMP_FUNCTION_001FC5E0) || \
    defined(KELLY_DECOMP_FUNCTION_00209FA8) || \
    defined(KELLY_DECOMP_FUNCTION_00209FF0)
#include "KS/SRC/ks/floatobj_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FB320)
// 0x001FB320 collide__12beach_objectP6entityRC8vector3d
class entity;
class vector3d;

class beach_object {
    char padding[0x24];
    bool active;
public:
    void collide(entity* other, const vector3d& direction);
};

void beach_object::collide(entity* other, const vector3d& direction) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FB330)
// 0x001FB330 jumped_over__12beach_objectP6entity
class entity;

class beach_object {
    char padding[0x24];
    bool active;
public:
    void jumped_over(entity* other);
};

void beach_object::jumped_over(entity* other) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FB340)
// 0x001FB340 sprayed__12beach_objectP6entity
class entity;

class beach_object {
    char padding[0x24];
    bool active;
public:
    void sprayed(entity* other);
};

void beach_object::sprayed(entity* other) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD7A0)
// 0x001FD7A0 collide__12water_objectP6entityRC8vector3d
class entity;
class vector3d;

class water_object {
    char padding[0x24];
    bool active;
public:
    void collide(entity* other, const vector3d& direction);
};

void water_object::collide(entity* other, const vector3d& direction) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD7B0)
// 0x001FD7B0 jumped_over__12water_objectP6entity
class entity;

class water_object {
    char padding[0x24];
    bool active;
public:
    void jumped_over(entity* other);
};

void water_object::jumped_over(entity* other) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD7C0)
// 0x001FD7C0 sprayed__12water_objectP6entity
class entity;

class water_object {
    char padding[0x24];
    bool active;
public:
    void sprayed(entity* other);
};

void water_object::sprayed(entity* other) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FE758)
// 0x001FE758 collide__15floating_objectP6entityRC8vector3d
class entity;
class vector3d;

class floating_object {
    char padding[0x24];
    bool active;
public:
    void collide(entity* other, const vector3d& direction);
};

void floating_object::collide(entity* other, const vector3d& direction) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00209FA8)
// 0x00209FA8 jumped_over__14surfing_objectP6entity
void surfing_object::jumped_over(entity* ent)
{
    set_target_active(true);
    if (my_anim_handler != 0)
        my_anim_handler->update(false, true, false, &my_max_alpha);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00209FF0)
// 0x00209FF0 sprayed__14surfing_objectP6entity
void surfing_object::sprayed(entity* ent)
{
    set_target_active(true);
    if (my_anim_handler != 0)
        my_anim_handler->update(false, false, true, &my_max_alpha);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002073D8)
// 0x002073D8 icepatch_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool icepatch_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::icepatch_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002073F8)
// 0x002073F8 kelp_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool kelp_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::kelp_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207418)
// 0x00207418 fatbastard_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool fatbastard_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::fatbastard_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207438)
// 0x00207438 swimmer_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool swimmer_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::swimmer_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207458)
// 0x00207458 snorkeler_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool snorkeler_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::snorkeler_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207558)
// 0x00207558 dolphin_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool dolphin_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::dolphin_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207578)
// 0x00207578 greatwhite_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool greatwhite_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::greatwhite_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207598)
// 0x00207598 seal_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool seal_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::seal_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002075B8)
// 0x002075B8 seagull_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool seagull_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::seagull_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002075E0)
// 0x002075E0 humpback_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool humpback_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::humpback_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207600)
// 0x00207600 helicopter_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool helicopter_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::helicopter_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207620)
// 0x00207620 hammerhead_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool hammerhead_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::hammerhead_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00209540)
// 0x00209540 mantaray_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool mantaray_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::mantaray_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FB300)
// 0x001FB300 update__11beach_eventf
class beach_event { char padding[0x3c]; bool (*my_func)(float time, void **data); void *my_func_data; public: bool update(float time); };
bool beach_event::update(float time) { return my_func(time, &my_func_data); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FB298)
// 0x001FB298 spawn__11beach_event
class beach_event { char padding0[0xc]; int times_spawned; bool spawned; char padding1[0x10]; void *my_func_data; char padding2[4]; int spawn_count; public: void spawn(); };
void beach_event::spawn() { if (times_spawned == spawn_count) return; my_func_data = 0; spawned = true; times_spawned++; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD850)
// 0x001FD850 _$_15floating_object
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_12water_object");
extern const char derived_vtable[];
__asm__(".equ _$_12water_object, 0x001FC5E0");
__asm__(".equ derived_vtable, 0x004D6060");
struct WaterObjectLayout { char padding[0x38]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_15floating_object");
void DerivedDtor(void *self, int deleting) { ((WaterObjectLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FE958)
// 0x001FE958 _$_13static_object
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_12water_object");
extern const char derived_vtable[];
__asm__(".equ _$_12water_object, 0x001FC5E0");
__asm__(".equ derived_vtable, 0x004D5EC0");
struct WaterObjectLayout { char padding[0x38]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_13static_object");
void DerivedDtor(void *self, int deleting) { ((WaterObjectLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD948)
// 0x001FD948 spawn__15floating_object
asm(".equ spawn__12water_object, 0x001FD1B8");
class water_object { public: void spawn(); };
class floating_object : public water_object {
    char padding_to_times[8];
    int times_spawned;
    char padding_to_spawn_count[0x1C];
    int spawn_count;
    char padding_to_dy[0x2A0];
    float desired_dy;
    float current_dy;
    char padding_to_angle[8];
    float desired_angle;
    float current_angle;
public:
    void spawn();
};
void floating_object::spawn()
{
    if (times_spawned == spawn_count)
        return;
    desired_dy = 0;
    current_dy = 0;
    desired_angle = 0;
    current_angle = 0;
    water_object::spawn();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FAAA8)
// 0x001FAAA8 _$_12beach_object
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char beach_object_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ beach_object_vtable, 0x004D6208");
struct beach_layout { char padding0[0x30]; char path[8]; const void *vtable; };
extern "C" void BeachObjectDtor(void *self, int deleting) __asm__("_$_12beach_object");
void BeachObjectDtor(void *self, int deleting) {
    ((beach_layout *)self)->vtable=beach_object_vtable;
    StringDtor((char *)self+0x30,2);
    if (deleting&1) { BuiltinDelete(self); __asm__ __volatile__("" : : : "memory"); }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD878)
// 0x001FD878 parse_params__15floating_objectPPci
extern "C" bool water_parse(void*,char**,int) __asm__("parse_params__12water_objectPPci"); extern "C" bool read_float(void*,char**,int,const char*,float*) __asm__("read_float_param__C12beach_objectPPciPCcPf"); extern const char water_text[];
__asm__(".equ parse_params__12water_objectPPci,0x001FCD38"); __asm__(".equ read_float_param__C12beach_objectPPciPCcPf,0x001FAD50"); __asm__(".equ water_text,0x004D0CE8");
struct floating_layout { char padding[752]; float water_interaction; };
extern "C" bool parse_floating(floating_layout*self,char**argp,int argc) __asm__("parse_params__15floating_objectPPci");
bool parse_floating(floating_layout*self,char**argp,int argc)
{bool result;if(water_parse(self,argp,argc)){read_float(self,argp,argc,water_text,&self->water_interaction);result=true;}else result=false;return result;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD8E0)
// 0x001FD8E0 get_settings__15floating_objectRC15floating_object
extern "C" void water_settings(void*,const void*) __asm__("get_settings__12water_objectRC12water_object"); __asm__(".equ get_settings__12water_objectRC12water_object,0x001FD5A8");
struct floating_layout { char padding[720]; float desired_dy,current_dy,max_dy,speed_dy,desired_angle,current_angle,max_angle,speed_angle,water_interaction; };
extern "C" void get_floating(floating_layout*self,const floating_layout&obj) __asm__("get_settings__15floating_objectRC15floating_object");
void get_floating(floating_layout*self,const floating_layout&obj)
{self->desired_dy=obj.desired_dy;self->current_dy=obj.current_dy;self->max_dy=obj.max_dy;self->speed_dy=obj.speed_dy;self->desired_angle=obj.desired_angle;self->current_angle=obj.current_angle;self->max_angle=obj.max_angle;self->speed_angle=obj.speed_angle;self->water_interaction=obj.water_interaction;water_settings(self,&obj);int dead;__asm__("" : "=r"(dead));}
#endif
