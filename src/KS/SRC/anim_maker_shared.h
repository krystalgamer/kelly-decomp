#ifndef KELLY_DECOMP_ANIM_MAKER_SHARED_H
#define KELLY_DECOMP_ANIM_MAKER_SHARED_H

#include "KS/SRC/anim_shared.h"
#include "KS/SRC/mbi_shared.h"
#include "KS/SRC/rtti_shared.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_vector_shared.h"

typedef float rational_t;
typedef float time_value_t;

class PRS_track;
class signal_track;
class entity;
class po;
class signal_anim;

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
    ~entity_track_node();
    void add_child(entity_track_node *good_kid);
};

class entity_track_tree {
    char file_header[4];
    unsigned int version;
    int num_root_nodes;
    rational_t floor_offset;
    time_value_t duration;
    int total_nodes;
    int pad[2];
    entity_track_node root_nodes[4];

public:
    entity_track_tree();
    ~entity_track_tree();
    void *operator new(unsigned int size);
    void operator delete(void *memory);
    entity_track_node *get_root();
    entity_track_node *insert_root();
    inline const entity_track_node *get_root_nodes() const {
        return root_nodes;
    }
    inline int get_num_root_nodes() const {
        return num_root_nodes;
    }
    inline time_value_t get_duration() const {
        return duration;
    }
    inline rational_t get_floor_offset() const {
        return floor_offset;
    }
};

class po_anim : public anim<po> {
public:
    virtual ~po_anim();
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
};

typedef vector<entity_anim *, my_allocator<entity_anim *> >
    pentity_anim_vector;

class entity_anim_tree : public entity_anim {
    stringx name;
    const entity_track_tree *track;
    rational_t blend_a;
    anim_control_t control;
    pentity_anim_vector &anims;
    rational_t floor_offset;
    const entity_track_tree *trackb;
    rational_t blend_b;
    pentity_anim_vector anims_b;
    anim_control_t control_b;

public:
    entity_anim_tree(
        const stringx &name,
        entity *ent,
        const entity_track_tree &track,
        unsigned short anim_flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1);
    entity_anim_tree(
        const stringx &name,
        entity *ent,
        const entity_track_tree &track_a,
        const entity_track_tree &track_b,
        rational_t blend_a,
        rational_t blend_b,
        unsigned short anim_flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1);
    virtual ~entity_anim_tree();
    void construct(
        const stringx &name,
        const entity_track_tree &track,
        unsigned short anim_flags,
        time_value_t start_time,
        int priority,
        short loop);
    void construct(
        const stringx &name,
        const entity_track_tree &track_a,
        const entity_track_tree &track_b,
        rational_t blend_a,
        rational_t blend_b,
        unsigned short anim_flags,
        time_value_t start_time,
        int priority,
        short loop);
    void *operator new(
        unsigned int size,
        unsigned int flags,
        const char *description,
        int line);
    void operator delete(void *memory);
};

class entity_widget {
public:
    void add_anim(entity_anim_tree *new_anim);
    void kill_anim(entity_anim_tree *animation);
};

class world_dynamics_system {
public:
    void add_anim(entity_anim_tree *new_anim);
    void kill_anim(entity_anim_tree *animation);
};

class anim_maker {
public:
    anim_maker();
    virtual ~anim_maker();
    entity_anim_tree *create_anim(
        const stringx &filename,
        entity *ent,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1,
        entity_widget *owning_widget = 0);
    entity_anim_tree *create_anim(
        const stringx &name,
        const entity_track_tree &track,
        entity *ent,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1,
        entity_widget *owning_widget = 0);
    void create_anim(
        entity_anim_tree *cached_anim,
        const stringx &name,
        const entity_track_tree &track,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1,
        entity_widget *owning_widget = 0);
    entity_anim_tree *create_anim(
        const stringx &name,
        const entity_track_tree &track_a,
        const entity_track_tree &track_b,
        rational_t blend_a,
        rational_t blend_b,
        entity *ent,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1,
        entity_widget *owning_widget = 0);
    void create_anim(
        entity_anim_tree *cached_anim,
        const stringx &name,
        const entity_track_tree &track_a,
        const entity_track_tree &track_b,
        rational_t blend_a,
        rational_t blend_b,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1,
        entity_widget *owning_widget = 0);
};

extern world_dynamics_system *g_world_ptr;
extern anim_maker *g_anim_maker;
extern const char anim_maker_source_file[];

__asm__(".equ __nw__16entity_anim_treeUiUiPCci, 0x001137C0");
__asm__(".equ __16entity_anim_treeRC7stringxP6entityRC17entity_track_treeUsfis, 0x00116138");
__asm__(".equ add_anim__13entity_widgetP16entity_anim_tree, 0x002B9B50");
__asm__(".equ add_anim__21world_dynamics_systemP16entity_anim_tree, 0x002A3688");
__asm__(".equ g_world_ptr, 0x00431A8C");
__asm__(".equ anim_maker_source_file, 0x004C9E38");

#endif
