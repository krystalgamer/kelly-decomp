#ifndef KELLY_DECOMP_WDS_SHARED_H
#define KELLY_DECOMP_WDS_SHARED_H

class entity;
class kellyslater_controller;

class world_dynamics_system {
    char data_before_heroes[0xF0];
    entity *hero_ptr[2];
    kellyslater_controller *ks_controller[2];

public:
    inline entity *get_hero_ptr(int index) {
        return hero_ptr[index];
    }
    inline kellyslater_controller *get_ks_controller(int index) {
        return ks_controller[index];
    }
};

extern world_dynamics_system *g_world_ptr;

__asm__(".equ g_world_ptr, 0x00431A8C");

#endif
