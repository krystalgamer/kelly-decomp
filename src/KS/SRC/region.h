#ifndef REGION_H
#define REGION_H

#include "KS/SRC/stringx.h"
#include "g++-2/stl_list.h"

class entity;
class light_source;
class trigger;
class vm_thread;

class region {
    char data_before_local_thread_list[0x24];
    list<vm_thread *> local_thread_list;
    char data_before_cam_collision_entities[
        0x88 - 0x24 - sizeof(list<vm_thread *>)
    ];
    entity **cam_collision_begin;
    entity **cam_collision_end;
    char data_before_triggers[0xC4 - 0x90];
    trigger **trigger_begin;
    trigger **trigger_end;
    char data_before_region_ambient_sound[0x124 - 0xCC];
    stringx region_ambient_sound_name;

public:
    void add(entity *value);
    void remove(entity *value);
    void remove_cam_coll_ent(entity *value);
    void remove(trigger *value);
    void add(light_source *value);
    void remove(light_source *value);
    void remove_local_thread(vm_thread *thread);
    void sort_entities();
    void set_region_ambient_sound(stringx &sound_name);
    void optimize();

private:
    void x_sort_entities_by_bounding_box_info();
};

#endif
