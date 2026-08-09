#ifndef REGION_H
#define REGION_H

#include "KS/SRC/stringx.h"
#include "g++-2/stl_list.h"

class entity;
class light_source;
class vm_thread;

class region {
    char data_before_local_thread_list[0x24];
    list<vm_thread *> local_thread_list;
    char data_before_region_ambient_sound[
        0x124 - 0x24 - sizeof(list<vm_thread *>)
    ];
    stringx region_ambient_sound_name;

public:
    void add(entity *value);
    void remove(entity *value);
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
