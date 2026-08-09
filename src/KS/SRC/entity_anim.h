#ifndef ENTITY_ANIM_H
#define ENTITY_ANIM_H

#include "KS/SRC/anim.h"
#include "KS/SRC/mbi.h"
#include "KS/SRC/po_anim.h"
#include "KS/SRC/rtti.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_vector.h"

typedef float rational_t;
typedef float time_value_t;

class PRS_track;
class signal_track;
class entity;
class entity_track_tree;
class po;
class signal_anim;

enum {
    BORROWS_DATA,
    OWNS_DATA,
    NO_ID = -1
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
    static const char *binary_extension();
    static const char *extension();
    entity_track_node *get_root();
    entity_track_node *insert_root();
    void _compute_duration();
    void _recursive_compute_duration(
        const entity_track_node *node,
        time_value_t &duration) const;
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

class entity_anim : public anim<entity *> {
protected:
    friend class entity_anim_tree;

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

    inline int get_priority() const {
        return priority;
    }
    inline entity *get_entity() const {
        return ent;
    }

    void detach();
    void set_po_anim(po_anim *animation);
    virtual void set_time(float time);

    static bool meminit;
    static bool *allocated;
    static void *membuffer;
    static int current_allocation;
    static void *mem_init_func;
    static void *mem_free_func;
    static void check_mem_init();
    static void mem_cleanup();
    static void *operator new(unsigned int size);
    static void *operator new(
        unsigned int size,
        unsigned int alignment,
        const char *file,
        int line);
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
    void set_blend(float first, float second);
    entity_anim_tree(
        const stringx &name,
        entity *entity,
        const entity_track_tree &track,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1);
    entity_anim_tree(
        const stringx &name,
        entity *entity,
        const entity_track_tree &first_track,
        const entity_track_tree &second_track,
        rational_t first_blend,
        rational_t second_blend,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1);
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
    void deconstruct();
    void detach();
    void attach();
    virtual void set_flag(anim_flags_t flag);
    virtual void clear_flag(anim_flags_t flag);
    void set_timescale_factor(float factor);
    void set_priority(int value);
    void construct(
        const stringx &name,
        const entity_track_tree &track,
        unsigned short flags,
        time_value_t start_time,
        int priority,
        short loop);
    void construct(
        const stringx &name,
        const entity_track_tree &first_track,
        const entity_track_tree &second_track,
        rational_t first_blend,
        rational_t second_blend,
        unsigned short flags,
        time_value_t start_time,
        int priority,
        short loop);
    void *operator new(
        unsigned int size,
        unsigned int flags,
        const char *description,
        int line);
    void *operator new(unsigned int size);
    void operator delete(void *memory);
    bool is_root(entity *value) const;

    inline bool was_blended() const {
        return !control.is_tween() ||
               control.get_tween_timer() >=
                   control.get_tween_duration();
    }
};

#endif
