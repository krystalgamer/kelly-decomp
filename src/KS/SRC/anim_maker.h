#ifndef ANIM_MAKER_H
#define ANIM_MAKER_H

#pragma interface

#include "KS/SRC/entity_anim.h"
#include "KS/SRC/wds.h"

class entity_widget {
public:
    void add_anim(entity_anim_tree *animation);
    void kill_anim(entity_anim_tree *animation);
};

class anim_maker {
public:
    anim_maker();
    virtual ~anim_maker();
    entity_anim_tree *create_anim(
        const stringx &name,
        const entity_track_tree &track,
        entity *entity,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1,
        entity_widget *owner = 0);
    void create_anim(
        entity_anim_tree *cached_animation,
        const stringx &name,
        const entity_track_tree &track,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1,
        entity_widget *owner = 0);
    void create_anim(
        entity_anim_tree *cached_animation,
        const stringx &name,
        const entity_track_tree &first_track,
        const entity_track_tree &second_track,
        rational_t first_blend,
        rational_t second_blend,
        unsigned short flags = 0,
        time_value_t start_time = 0,
        int priority = 0,
        short loop = -1,
        entity_widget *owner = 0);
};

extern anim_maker *g_anim_maker;
extern const char anim_maker_source_file[];

__asm__(".equ anim_maker_source_file, 0x004C9E38");

#endif
