#ifndef KELLY_DECOMP_KELLYSLATER_MAIN_SHARED_H
#define KELLY_DECOMP_KELLYSLATER_MAIN_SHARED_H

void WATER_Create(int heroIdx);
void WATER_ListAdd();
void ks_fx_draw(int heroIdx);

extern bool particle_enable;

class world_dynamics_system {
public:
    void render_kelly_slater_stuff(int heroIdx);
    void process_kelly_slater_stuff();
};

#endif
