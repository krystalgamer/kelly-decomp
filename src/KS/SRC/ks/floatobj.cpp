// floatobj definitions extracted by generated one-function shims.


// 0x001FB320 collide__12beach_objectP6entityRC8vector3d
#include "KS/SRC/ks/floatobj.h"

void beach_object::collide(entity* other, const vector3d& direction) {
    set_target_active(true);
}

// 0x001FB330 jumped_over__12beach_objectP6entity
#include "KS/SRC/ks/floatobj.h"

void beach_object::jumped_over(entity* other) {
    set_target_active(true);
}

// 0x001FB340 sprayed__12beach_objectP6entity
#include "KS/SRC/ks/floatobj.h"

void beach_object::sprayed(entity* other) {
    set_target_active(true);
}

// 0x001FD7A0 collide__12water_objectP6entityRC8vector3d
#include "KS/SRC/ks/floatobj.h"

void water_object::collide(entity* other, const vector3d& direction) {
    set_target_active(true);
}

// 0x001FD7B0 jumped_over__12water_objectP6entity
#include "KS/SRC/ks/floatobj.h"

void water_object::jumped_over(entity* other) {
    set_target_active(true);
}

// 0x001FD7C0 sprayed__12water_objectP6entity
#include "KS/SRC/ks/floatobj.h"

void water_object::sprayed(entity* other) {
    set_target_active(true);
}

// 0x001FE758 collide__15floating_objectP6entityRC8vector3d
#include "KS/SRC/ks/floatobj.h"

void floating_object::collide(entity* other, const vector3d& direction) {
    set_target_active(true);
}

// 0x00209FA8 jumped_over__14surfing_objectP6entity
#include "KS/SRC/ks/floatobj.h"

void surfing_object::jumped_over(entity* ent)
{
    set_target_active(true);
    if (my_anim_handler != 0)
        my_anim_handler->update(false, true, false, &my_max_alpha);
}

// 0x00209FF0 sprayed__14surfing_objectP6entity
#include "KS/SRC/ks/floatobj.h"

void surfing_object::sprayed(entity* ent)
{
    set_target_active(true);
    if (my_anim_handler != 0)
        my_anim_handler->update(false, false, true, &my_max_alpha);
}

// 0x002073D8 icepatch_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::icepatch_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x002073F8 kelp_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::kelp_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x00207418 fatbastard_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::fatbastard_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x00207438 swimmer_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::swimmer_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x00207458 snorkeler_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::snorkeler_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x00207558 dolphin_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::dolphin_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x00207578 greatwhite_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::greatwhite_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x00207598 seal_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::seal_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x002075B8 seagull_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::seagull_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x002075E0 humpback_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::humpback_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x00207600 helicopter_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::helicopter_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x00207620 hammerhead_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::hammerhead_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x00209540 mantaray_ai__14surfing_objectR8vector3dT1f
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::mantaray_ai(vector3d &position, vector3d &normal, float time) { return floating_ai(position, normal, time); }

// 0x001FB300 update__11beach_eventf
#include "KS/SRC/ks/floatobj.h"

bool beach_event::update(float time) { return my_func(time, &my_func_data); }

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

// 0x001FD878 parse_params__15floating_objectPPci
extern "C" bool water_parse(void*,char**,int) __asm__("parse_params__12water_objectPPci"); extern "C" bool read_float(void*,char**,int,const char*,float*) __asm__("read_float_param__C12beach_objectPPciPCcPf"); extern const char water_text[];
__asm__(".equ parse_params__12water_objectPPci,0x001FCD38"); __asm__(".equ read_float_param__C12beach_objectPPciPCcPf,0x001FAD50"); __asm__(".equ water_text,0x004D0CE8");
struct floating_layout { char padding[752]; float water_interaction; };
extern "C" bool parse_floating(floating_layout*self,char**argp,int argc) __asm__("parse_params__15floating_objectPPci");
bool parse_floating(floating_layout*self,char**argp,int argc)
{bool result;if(water_parse(self,argp,argc)){read_float(self,argp,argc,water_text,&self->water_interaction);result=true;}else result=false;return result;}

// 0x001FD8E0 get_settings__15floating_objectRC15floating_object
extern "C" void water_settings(void*,const void*) __asm__("get_settings__12water_objectRC12water_object"); __asm__(".equ get_settings__12water_objectRC12water_object,0x001FD5A8");
struct floating_layout { char padding[720]; float desired_dy,current_dy,max_dy,speed_dy,desired_angle,current_angle,max_angle,speed_angle,water_interaction; };
extern "C" void get_floating(floating_layout*self,const floating_layout&obj) __asm__("get_settings__15floating_objectRC15floating_object");
void get_floating(floating_layout*self,const floating_layout&obj)
{self->desired_dy=obj.desired_dy;self->current_dy=obj.current_dy;self->max_dy=obj.max_dy;self->speed_dy=obj.speed_dy;self->desired_angle=obj.desired_angle;self->current_angle=obj.current_angle;self->max_angle=obj.max_angle;self->speed_angle=obj.speed_angle;self->water_interaction=obj.water_interaction;water_settings(self,&obj);int dead;__asm__("" : "=r"(dead));}

// 0x00200088 _$_14surfing_object
extern void*surf_vtable;__asm__(".equ surf_vtable,0x004D5F30");extern "C" void despawn(void*) __asm__("despawn__14surfing_object");extern "C" void string_dtor(void*,int) __asm__("_$_7stringx");extern "C" void water_dtor(void*,int) __asm__("_$_12water_object");__asm__(".equ despawn__14surfing_object,0x002028F0");__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ _$_12water_object,0x001FC5E0");struct handler_vtable{char p0[8];short adjustment;short x0;void(*destroy)(void*,int);};struct handler{char p0[28];handler_vtable*vtable;};struct surfing{char p0[56];void*vtable;char p1[664];handler*anim_handler;char p2[64];char anim_name[8];};extern "C" void destroy_surf(surfing*self,int deleting) __asm__("_$_14surfing_object");void destroy_surf(surfing*self,int deleting){self->vtable=&surf_vtable;despawn(self);if(self->anim_handler){handler*h=self->anim_handler;handler_vtable*t=h->vtable;t->destroy((char*)h+t->adjustment,3);}string_dtor(self->anim_name,2);water_dtor(self,deleting);int dead;__asm__("" : "=r"(dead));}

// 0x002028F0 despawn__14surfing_object
#include "KS/SRC/ks/floatobj.h"
#include "KS/SRC/ks/SoundScript.h"
#include "KS/SRC/ks/trail.h"

__asm__(".equ despawn__12water_object, 0x001FD540");

void surfing_object::despawn()
{
    if (my_trail)
    {
        ks_fx_trail_destroy(my_trail);
        my_trail = 0;
    }

    if (mySound >= 0)
        SoundScriptManager::inst()->endEvent(mySound);

    if (my_board_entity)
    {
        my_board_entity->set_render_color(ren_col);
        my_board_entity->set_visible(false);
        my_board_entity->set_active(false);
    }

    if (my_third_entity)
    {
        my_third_entity->set_render_color(ren_col);
        my_third_entity->set_visible(false);
        my_third_entity->set_active(false);
    }

    water_object::despawn();
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x001FAC30 find_param__C12beach_objectPPciPCc
#include "KS/SRC/ks/floatobj.h"
extern "C" int cstrcmp(const char*,const char*) __asm__("strcmp");
__asm__(".equ strcmp,0x003D3E88");
extern "C" bool find_param(const beach_object*,char**,int,const char*) __asm__("find_param__C12beach_objectPPciPCc");
bool find_param(const beach_object*,char**argp,int argc,const char*name){for(int i=0;i<argc;i++)if(!cstrcmp(argp[i],name))return true;return false;}

// 0x001FB350 __15beach_billboardP6entityRC7stringx
#include "KS/SRC/stringx.h"
class entity;struct vector3d{float x,y,z;vector3d&operator=(const vector3d&o){x=o.x;y=o.y;z=o.z;return *this;}};struct po{char data[72];};
class beach_object{public:beach_object(entity*,const stringx&);virtual~beach_object();virtual void spawn()=0;virtual void despawn()=0;virtual bool update(float)=0;virtual bool parse_params(char**,int);virtual void get_settings(const beach_object&);virtual void collide(entity*,const vector3d&);virtual void jumped_over(entity*);virtual void sprayed(entity*);virtual bool is_surfing_object();beach_object*next;float spawn_time;int timer_type;int times_spawned;bool spawned;bool smashable;bool active;bool never_despawn;protected:bool physical;char layout_pad[4];entity*my_entity;int spawn_count;stringx my_path;};
class beach_billboard:public beach_object{public:beach_billboard(entity*,const stringx&);virtual~beach_billboard();void spawn();void despawn();bool update(float);protected:vector3d my_velocity;po my_initial_po;bool rotate;float my_age;float my_life;};
extern const vector3d zero_vec;__asm__(".equ zero_vec,0x00554478");__asm__(".equ __12beach_objectP6entityRC7stringx,0x001FAA10");__asm__(".equ _vt$15beach_billboard,0x004D6148");
beach_billboard::beach_billboard(entity*ent,const stringx&path):beach_object(ent,path){my_entity=ent;my_velocity=zero_vec;rotate=true;my_life=0;physical=false;}

// 0x001FAB00 get_settings__12beach_objectRC12beach_object
struct stringx{char data[8];stringx&operator=(const stringx&);};__asm__(".equ __as__7stringxRC7stringx,0x0034E0B8");struct beach_object{char pad0[4];float spawn_time;int timer_type;int times_spawned;int spawned;int smashable;int active;int never_despawn;int physical;char pad1[8];int spawn_count;stringx my_path;void get_settings(const beach_object&)__asm__("get_settings__12beach_objectRC12beach_object");};void beach_object::get_settings(const beach_object&o){__asm__ volatile ("" : : : "memory");my_path=o.my_path;spawn_time=o.spawn_time;timer_type=o.timer_type;spawned=o.spawned;spawn_count=o.spawn_count;times_spawned=o.times_spawned;smashable=o.smashable;active=o.active;physical=o.physical;never_despawn=o.never_despawn;}

// 0x001FD7D0 __15floating_objectP6entityRC7stringx
struct entity;struct stringx{char data[8];};struct floating_object{char pad0[56];void*vptr;char pad1[668];float max_dy,speed_dy;char pad2[8];float max_angle,speed_angle,water_interaction;};extern "C" void base_ctor(floating_object*,entity*,const stringx&)__asm__("__12water_objectP6entityRC7stringx");extern void*floating_vtable[];extern float g_max_dy,g_speed_dy,g_max_angle,g_speed_angle;__asm__(".equ __12water_objectP6entityRC7stringx,0x001FC560");__asm__(".equ floating_vtable,0x004D6060");__asm__(".equ g_max_dy,0x004308A4");__asm__(".equ g_speed_dy,0x004308A8");__asm__(".equ g_max_angle,0x004308AC");__asm__(".equ g_speed_angle,0x004308B0");extern "C" floating_object*ctor(floating_object*self,entity*ent,const stringx&path)__asm__("__15floating_objectP6entityRC7stringx");floating_object*ctor(floating_object*self,entity*ent,const stringx&path){base_ctor(self,ent,path);self->vptr=floating_vtable;self->max_dy=0.25f;self->speed_dy=1.0f;self->max_angle=20.0f;self->speed_angle=1.0f;self->water_interaction=1.0f;g_max_dy=self->max_dy;g_speed_dy=self->speed_dy;g_max_angle=self->max_angle;g_speed_angle=self->speed_angle;return self;}

// 0x00200100 parse_params__14surfing_objectPPci
struct AnimHandler{char p[16];bool dummy;};struct __attribute__((packed)) MemberPtr{unsigned a,b;};extern MemberPtr dummy_ai_ptr;extern const char dummy_name[];extern "C" bool water_parse(void*,char**,int)__asm__("parse_params__12water_objectPPci");extern "C" bool find(void*,char**,int,const char*)__asm__("find_param__C12beach_objectPPciPCc");class surfing_object{public:char p[724];AnimHandler*handler;MemberPtr ai_func;bool parse_params(char**,int)__asm__("parse_params__14surfing_objectPPci");};__asm__(".equ dummy_ai_ptr,0x004D1078");__asm__(".equ dummy_name,0x004D1118");__asm__(".equ parse_params__12water_objectPPci,0x001FCD38");__asm__(".equ find_param__C12beach_objectPPciPCc,0x001FAC30");bool surfing_object::parse_params(char**args,int argc){if(!water_parse(this,args,argc))return false;if(find(this,args,argc,dummy_name)){ai_func=dummy_ai_ptr;if(handler)handler->dummy=true;}return true;}

// 0x001FAB80 parse_params__12beach_objectPPci
extern const char spawn_count_name[],never_despawn_name[],smashable_name[],time_name[];asm(".equ spawn_count_name,0x004D08F8");asm(".equ never_despawn_name,0x004D0908");asm(".equ smashable_name,0x004D0918");asm(".equ time_name,0x004D0928");class beach_object{void*vtable;float spawn_time;char pad0[12];int smashable;char pad1[4];int never_despawn;char pad2[12];int spawn_count;public:bool parse_params(char**,int);bool find_param(char**,int,const char*)const;bool read_int_param(char**,int,const char*,int*)const;bool read_float_param(char**,int,const char*,float*)const;};asm(".equ find_param__C12beach_objectPPciPCc,0x001FAC30");asm(".equ read_int_param__C12beach_objectPPciPCcPi,0x001FACA8");asm(".equ read_float_param__C12beach_objectPPciPCcPf,0x001FAD50");bool beach_object::parse_params(char**argp,int argc){read_int_param(argp,argc,spawn_count_name,&spawn_count);if(find_param(argp,argc,never_despawn_name))never_despawn=true;if(find_param(argp,argc,smashable_name))smashable=true;return read_float_param(argp,argc,time_name,&spawn_time);}

// 0x0020A4B0 __17generic_anim_miscPP6entityRC7stringxT2PPCci
#include "KS/SRC/ks/floatobj.h"

// Preserve the released constructor prologue normalized by the EE compiler shim.
generic_anim_misc::generic_anim_misc (
    entity **entities,
    const stringx& path,
    const stringx& name,
    const char **prefixes,
    int count)
	: generic_anim (path, name)
{
	construct (entities, path, name, prefixes, count);
}

// 0x00209560 turtle_ai__14surfing_objectR8vector3dT1f
class vector3d
{
public:
  float x, y, z;
  vector3d(const vector3d& v) : x(v.x), y(v.y), z(v.z) {}
  vector3d(float a, float b, float c) : x(a), y(b), z(c) {}
  vector3d operator-(const vector3d& v) const { return vector3d(x-v.x, y-v.y, z-v.z); }
  vector3d operator+(const vector3d& v) const { return vector3d(x+v.x, y+v.y, z+v.z); }
  vector3d operator*(float f) const { return vector3d(x*f, y*f, z*f); }
  vector3d& operator=(const vector3d& v) { x=v.x; y=v.y; z=v.z; return *this; }
};
extern const vector3d YVEC;
__asm__(".equ YVEC, 0x00554458");
class generic_anim_animal
{
  char padding[40];
  int generic_anim_state;
public:
  bool is_diving() const { return generic_anim_state == 1; }
};
class surfing_object
{
  char padding[724];
  void* my_anim_handler;
public:
  bool floating_ai(vector3d& position, vector3d& normal, float dt);
  bool turtle_ai(vector3d& position, vector3d& normal, float dt);
};
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::turtle_ai (vector3d& position, vector3d& normal, float dt)
{
	vector3d old (position);
	bool ret;

	ret = floating_ai (position, normal, dt);

	position = old + ((position - old) * 0.5f);

	if (my_anim_handler != 0)
	{
		if (((generic_anim_animal*) my_anim_handler)->is_diving ())
			normal = YVEC;
	}

  return ret;
}

// Source implementation boundary.
// 0x0026F900 is_surfing_object__12beach_object
#include "KS/SRC/ks/floatobj.h"

bool beach_object::is_surfing_object() {
    return false;
}

// 0x0026FA70 get_type__C12water_object
#include "KS/SRC/ks/floatobj.h"

int water_object::get_type() const {
    return -1;
}

// 0x0026FD10 spawn__17generic_anim_misc
#include "KS/SRC/ks/floatobj.h"

void generic_anim_misc::spawn() {
    generic_anim_state = GA_SPAWN;
}

// 0x0026FDF0 spawn__19generic_anim_animal
#include "KS/SRC/ks/floatobj.h"

void generic_anim_animal::spawn() {
    generic_anim_state = AA_SPAWN;
}

// 0x0026FED0 spawn__16generic_anim_ice
#include "KS/SRC/ks/floatobj.h"

void generic_anim_ice::spawn() {
    generic_anim_state = IA_SPAWN;
}

// 0x0026FF88 is_surfing_object__14surfing_object
#include "KS/SRC/ks/floatobj.h"

bool surfing_object::is_surfing_object() {
    return true;
}

// 0x0026FF90 get_type__C14surfing_object
#include "KS/SRC/ks/floatobj.h"

int surfing_object::get_type() const {
    return my_type;
}

// 0x0026F8C0 __tf12beach_object
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120D0"); asm(".equ type_name, 0x004E4F50");
extern "C" void *GetTypeInfo() __asm__("__tf12beach_object");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x0026FB30 __tf12generic_anim
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120D8"); asm(".equ type_name, 0x004E4FB0");
extern "C" void *GetTypeInfo() __asm__("__tf12generic_anim");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x0026FB70 _$_12generic_anim
extern "C" void StringDtor(void *self, int deleting)
    __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");
extern const char generic_anim_vtable[];

__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ generic_anim_vtable, 0x004D6030");

struct generic_anim_layout
{
    char string_and_fields[0x1c];
    const void *vtable;
};

extern "C" void GenericAnimDtor(void *self, int deleting)
    __asm__("_$_12generic_anim");

void GenericAnimDtor(void *self, int deleting)
{
    ((generic_anim_layout *)self)->vtable = generic_anim_vtable;
    StringDtor(self, 2);
    if (deleting & 1)
    {
        BuiltinDelete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}

// 0x0026FD98 _$_19generic_anim_animal
extern "C" void StringDtor(void *self, int deleting)
    __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");
extern const char generic_anim_vtable[];

__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ generic_anim_vtable, 0x004D6030");

struct generic_anim_layout
{
    char string_and_fields[0x1c];
    const void *vtable;
};

extern "C" void GenericAnimAnimalDtor(void *self, int deleting)
    __asm__("_$_19generic_anim_animal");

void GenericAnimAnimalDtor(void *self, int deleting)
{
    ((generic_anim_layout *)self)->vtable = generic_anim_vtable;
    StringDtor(self, 2);
    if (deleting & 1)
    {
        BuiltinDelete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}

// 0x0026FE78 _$_16generic_anim_ice
extern "C" void StringDtor(void *self, int deleting)
    __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");
extern const char generic_anim_vtable[];

__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ generic_anim_vtable, 0x004D6030");

struct generic_anim_layout
{
    char string_and_fields[0x1c];
    const void *vtable;
};

extern "C" void GenericAnimIceDtor(void *self, int deleting)
    __asm__("_$_16generic_anim_ice");

void GenericAnimIceDtor(void *self, int deleting)
{
    ((generic_anim_layout *)self)->vtable = generic_anim_vtable;
    StringDtor(self, 2);
    if (deleting & 1)
    {
        BuiltinDelete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
