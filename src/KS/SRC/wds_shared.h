#ifndef KELLY_DECOMP_WDS_SHARED_H
#define KELLY_DECOMP_WDS_SHARED_H

class entity;

class world_dynamics_system {
    char data_before_heroes[0xF0];
    entity *hero_ptr[2];

public:
    entity *get_hero_ptr(int index) {
        return hero_ptr[index];
    }
};

extern world_dynamics_system *g_world_ptr;

__asm__(".equ g_world_ptr, 0x00431A8C");

#endif
