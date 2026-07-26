#ifndef KELLY_DECOMP_ENTITY_ANIM_SHARED_H
#define KELLY_DECOMP_ENTITY_ANIM_SHARED_H

#include "KS/SRC/anim_shared.h"
#include "KS/SRC/mbi_shared.h"
#include "KS/SRC/rtti_shared.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_vector_shared.h"

class PRS_track;
class signal_track;
class entity;
class entity_track_tree;
class po;
class signal_anim;

class po_anim : public anim<po> {
public:
    virtual ~po_anim();
};

class entity_track_node {
    int id;
    int owner;
    char pad[24];
    entity_track_node *m_child;
    entity_track_node *m_sibling;
    PRS_track *m_prs_track;
    signal_track *m_signal_track;
    int more_pad[4];

public:
    entity_track_node();
    void add_child(entity_track_node *good_kid);
};

class entity_anim : public anim<entity *> {
protected:
    entity *ent;
    po_anim *po_anim_ptr;
    signal_anim *signal_anim_ptr;
    int priority;
    quaternion tween_quat;
    vector3d rel_pos;

public:
    virtual ~entity_anim();

    float floor_offset;

    inline bool is_flagged(unsigned short value) const {
        return flags & value;
    }

    inline bool is_valid() const {
        return is_flagged(0x1000);
    }

    inline void set_priority(int value) {
        priority = value;
    }

    void set_po_anim(po_anim *animation);

    static bool meminit;
    static bool *allocated;
    static void *membuffer;
    static int current_allocation;
    static void *mem_init_func;
    static void *mem_free_func;
    static void check_mem_init();
    static void mem_cleanup();
};

typedef vector<entity_anim *, my_allocator<entity_anim *> >
    pentity_anim_vector;

class entity_anim_tree : public entity_anim {
    stringx name;
    const entity_track_tree *track;
    float blend_a;
    anim_control_t control;
    pentity_anim_vector &anims;
    float floor_offset;
    const entity_track_tree *trackb;
    float blend_b;
    pentity_anim_vector anims_b;
    anim_control_t control_b;

public:
    virtual ~entity_anim_tree();

    static bool meminit;
    static bool *allocated;
    static void *membuffer;
    static int current_allocation;
    static void *mem_init_func;
    static void *mem_free_func;
    static void check_mem_init();
    static void mem_cleanup();

    void clear_anims();
    void clear_anims_b();
    void set_priority(int value);

    inline bool was_blended() const {
        return !control.is_tween() ||
               control.get_tween_timer() >=
                   control.get_tween_duration();
    }
};

#endif
