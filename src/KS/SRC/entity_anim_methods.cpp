// entity_anim inline definitions extracted by generated shims.

// 0x00120868 __tf11entity_anim
#include "KS/SRC/entity_anim.h"

extern "C" void **entity_anim_base_rtti() __asm__("__tft4anim1ZP6entity");
extern "C" void *entity_anim_base_type[] __asm__("__tit4anim1ZP6entity");
extern "C" void *entity_anim_type[] __asm__("__ti11entity_anim");
extern "C" const char entity_anim_name[];

__asm__(".equ __tft4anim1ZP6entity, 0x00121B18");
__asm__(".equ __tit4anim1ZP6entity, 0x00511FD0");
__asm__(".equ __ti11entity_anim, 0x005A26D8");
__asm__(".equ entity_anim_name, 0x004CA468");

extern "C" void **entity_anim_rtti() __asm__("__tf11entity_anim");
void **entity_anim_rtti()
{
    if (!entity_anim_type[0]) {
        entity_anim_base_rtti();
        __rtti_si(entity_anim_type, entity_anim_name, entity_anim_base_type);
    }
    return entity_anim_type;
}


// 0x00120A40 set_flag__16entity_anim_tree12anim_flags_t
enum anim_flags_t {
    ANIM_ATTACHED = 16
};

struct anim_control {
    char padding0[0x18];
    unsigned int flags;
    char padding1[0x20];

    void set_flag(anim_flags_t flag, bool enabled) {
        if (enabled) {
            flags |= flag;
        } else {
            flags &= ~flag;
        }
    }
};

class entity_anim {
    unsigned short flags;

public:
    void set_flag(anim_flags_t flag) {
        flags |= flag;
    }
};

class entity_anim_tree : public entity_anim {
    char padding[0x46];
    anim_control control;
    anim_control control_b;

public:
    void set_flag(anim_flags_t flag);
};

void entity_anim_tree::set_flag(anim_flags_t flag) {
    control.set_flag(flag, true);
    control_b.set_flag(flag, true);
    entity_anim::set_flag(flag);
}

// 0x00120950 set_time__11entity_animf
struct po_anim_vtable {
    char padding[0x20];
    short adjustment;
    short padding2;
    void (*set_time)(void *self, float time);
};

struct po_anim_layout {
    char padding[4];
    po_anim_vtable *vtable;
};

class entity_anim {
    char padding[0x0C];
    po_anim_layout *po_anim_ptr;

public:
    void set_time(float time);
};

void entity_anim::set_time(float time)
{
    po_anim_layout *animation = po_anim_ptr;
    if (animation) {
        po_anim_vtable *table = animation->vtable;
        table->set_time((char *)animation + table->adjustment, time);
    }
}

// 0x00120A88 clear_flag__16entity_anim_tree12anim_flags_t
enum anim_flags_t {
    ANIM_ATTACHED = 16
};

struct anim_control {
    char padding0[0x18];
    unsigned int flags;
    char padding1[0x20];

    void set_flag(anim_flags_t flag, bool enabled) {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
};

class entity_anim {
    unsigned short flags;

public:
    void clear_flag(anim_flags_t flag) {
        flags &= ~flag;
    }
};

class entity_anim_tree : public entity_anim {
    char padding[0x46];
    anim_control control;
    anim_control control_b;

public:
    void clear_flag(anim_flags_t flag);
};

void entity_anim_tree::clear_flag(anim_flags_t flag)
{
    control.set_flag(flag, false);
    control_b.set_flag(flag, false);
    entity_anim::clear_flag(flag);
}

// 0x001208B8 _$_11entity_anim
struct AnimVtable{char p[64];short adj;short z;void(*destroy)(void*,int);};struct SubAnim{char p[4];AnimVtable*vtable;};struct entity_anim{char p0[4];void*vtable;char p1[4];SubAnim*po_anim_ptr;SubAnim*signal_anim_ptr;};extern void*vt;extern "C" void detach(entity_anim*)__asm__("detach__11entity_anim");extern "C" void del(entity_anim*)__asm__("__dl__11entity_animPv");__asm__(".equ vt,0x004CA170");__asm__(".equ detach__11entity_anim,0x00113A50");__asm__(".equ __dl__11entity_animPv,0x00113598");extern "C" void destroy(entity_anim*,int)__asm__("_$_11entity_anim");void destroy(entity_anim*self,int flag){self->vtable=&vt;if(self->po_anim_ptr){SubAnim*a=self->po_anim_ptr;AnimVtable*v=a->vtable;v->destroy((char*)a+v->adj,3);}if(self->signal_anim_ptr){SubAnim*a=self->signal_anim_ptr;AnimVtable*v=a->vtable;v->destroy((char*)a+v->adj,3);}detach(self);if(flag&1){del(self);asm volatile("");}}

// 0x00120B10 set_flag__16entity_anim_tree12anim_flags_tb
struct BaseVtable{char p[8];short set_adj;short z0;void(*set)(void*,int);short clear_adj;short z1;void(*clear)(void*,int);};struct Control{char p[24];unsigned flags;char rest[32];void set_flag(int f,bool on){if(on)flags|=f;else flags&=~f;}};class entity_anim_tree{public:char p0[4];BaseVtable*vtable;char p1[64];Control control;Control control_b;void set_flag(int,bool)__asm__("set_flag__16entity_anim_tree12anim_flags_tb");};void entity_anim_tree::set_flag(int f,bool torf){control.set_flag(f,torf);control_b.set_flag(f,torf);if(torf){BaseVtable*v=vtable;v->set((char*)this+v->set_adj,f);}else{BaseVtable*v=vtable;v->clear((char*)this+v->clear_adj,f);}}
