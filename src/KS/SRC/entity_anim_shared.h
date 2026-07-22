#ifndef KELLY_DECOMP_ENTITY_ANIM_SHARED_H
#define KELLY_DECOMP_ENTITY_ANIM_SHARED_H

class PRS_track;
class signal_track;
class entity;

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

class entity_anim {
protected:
    unsigned short flags;
    char anim_padding[6];
    entity *ent;
    void *po_anim_ptr;
    void *signal_anim_ptr;
    int priority;

public:
    bool is_flagged(unsigned short value) const {
        return flags & value;
    }

    bool is_valid() const {
        return is_flagged(0x1000);
    }

    void set_priority(int value) {
        priority = value;
    }
};

struct pentity_anim_vector {
    typedef entity_anim **iterator;

    entity_anim **begin_value;
    entity_anim **end_value;

    entity_anim **begin() {
        return begin_value;
    }

    entity_anim **end() {
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
