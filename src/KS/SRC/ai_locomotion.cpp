// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00106EA0)
// 0x00106EA0 get_my_entity__C13ai_locomotion
class entity;

class ai_interface {
    char padding[0x4];
    entity* my_entity;
public:
    entity* get_my_entity() {
        return my_entity;
    }
};

class ai_locomotion {
    ai_interface* owner;
public:
    entity* get_my_entity() const;
};

entity* ai_locomotion::get_my_entity() const {
    return owner->get_my_entity();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106F18)
// 0x00106F18 copy__13ai_locomotionP13ai_locomotion
class ai_locomotion { char padding_to_patrol_id[0x68]; int patrol_id; bool xz_movement; float patrol_radius; public: void copy(ai_locomotion* other); };
void ai_locomotion::copy(ai_locomotion* other) { patrol_radius = other->patrol_radius; patrol_id = other->patrol_id; xz_movement = other->xz_movement; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00109268)
// 0x00109268 going_into_service__13ai_locomotion
class ai_locomotion {
    char padding_to_wait[0xC8];
    bool wait_for_facing;
    bool in_service;
public:
    void going_into_service();
};
void ai_locomotion::going_into_service() { in_service = true; wait_for_facing = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00109278)
// 0x00109278 going_out_of_service__13ai_locomotion
class ai_locomotion {
    char padding_to_service[0xCC];
    bool in_service;
    char padding_to_repulsion_timer[0x6C];
    float repulsion_wait_timer;
    bool repulsion_wait;
public:
    void going_out_of_service();
};
void ai_locomotion::going_out_of_service() { repulsion_wait_timer = 0.0f; repulsion_wait = false; in_service = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00107F68)
// 0x00107F68 set_goto_path__13ai_locomotionfb
extern "C" void clear_path(void*) __asm__("clear_path__13ai_locomotion");__asm__(".equ clear_path__13ai_locomotion,0x00107FD8");struct loco_vtable{char padding[16];short adjustment;short reserved;bool(*set_path)(void*,const void*,float,bool);};struct loco_layout{char p0[168];char target_pos[12];char p1[8];int use_path,path_tries;char p2[128];loco_vtable*vtable;};extern "C" void set_goto(loco_layout*self,float mod,bool force) __asm__("set_goto_path__13ai_locomotionfb");void set_goto(loco_layout*self,float mod,bool force){clear_path(self);loco_vtable*t=self->vtable;self->use_path=t->set_path((char*)self+t->adjustment,self->target_pos,mod,force);self->path_tries++;}
#endif
