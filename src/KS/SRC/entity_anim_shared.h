#ifndef KELLY_DECOMP_ENTITY_ANIM_SHARED_H
#define KELLY_DECOMP_ENTITY_ANIM_SHARED_H

class PRS_track;
class signal_track;

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

#endif
