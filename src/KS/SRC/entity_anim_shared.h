#ifndef KELLY_DECOMP_ENTITY_ANIM_SHARED_H
#define KELLY_DECOMP_ENTITY_ANIM_SHARED_H

#include "KS/SRC/anim_shared.h"
#include "KS/SRC/rtti_shared.h"

class PRS_track;
class signal_track;
class entity;
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

public:
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
};

struct pentity_anim_vector {
    typedef entity_anim **iterator;

    entity_anim **begin_value;
    entity_anim **end_value;

    inline entity_anim **begin() {
        return begin_value;
    }

    inline entity_anim **end() {
        return end_value;
    }
};

class entity_anim_tree : public entity_anim {
    char tree_padding[80];
    pentity_anim_vector &anims;

public:
    void set_priority(int value);
};

#endif
