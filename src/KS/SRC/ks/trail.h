#ifndef TRAIL_H
#define TRAIL_H

#include "KS/SRC/game.h"
#include "KS/SRC/ks/wave.h"
#include "KS/SRC/algebra.h"

typedef unsigned int u_int;

enum {
    MAX_SPRAY_PTS = 25,
    MAX_TRAIL_NODES = 30,
    MAX_TRAIL_GENERATORS = 4
};

struct surface_point_t {
    WavePositionHint hint;
    WaveVelocityHint vhint;
    vector3d pos;
    vector3d norm;
    WaveRegionEnum region;
    u_int vvalid;
};

struct trail_node_t {
    u_int valid;
    float age;
    float uv;
    surface_point_t pnt1;
    surface_point_t pnt2;
    surface_point_t pnt3;
};

struct spray_control_t {
    vector3d current __attribute__((aligned(16)));
    vector3d start __attribute__((aligned(16)));
    vector3d *trailpt;
    trail_node_t *trail_node;
    vector3d vel;
    float seed;
    float age;
    float life;
    int valid;
};

struct spray_params_t {
    spray_control_t control_points_a[MAX_SPRAY_PTS];
    spray_control_t control_points_b[MAX_SPRAY_PTS];
    int num_control_points_a;
    int num_control_points_b;
    float last_apow;
    float last_bpow;
    vector3d lastpointa;
    vector3d lastpointb;
    float extra_splash_power[2];
    vector3d last_vec;
    float floater_interval;
    float airdrops_interval;
    float left_hand_interval;
    float right_hand_interval;
};

class kellyslater_controller;

class trail {
public:
    virtual ~trail();
    void initialize(
        float sample_rate,
        float life,
        bool extra,
        kellyslater_controller *owner);
    void draw();
    void reset();
    void destroy();
    void create_chophop_splash(vector3d &position);
    inline bool is_valid() const {
        return valid;
    }
    void spraypt_update(spray_control_t *control_points, u_int max);

protected:
    void spraypt_pos(spray_control_t *control_point);

    bool valid;
    u_int my_index;
    float my_life;
    float my_sample_rate;
    float my_last_sample;
    u_int my_total_nodes;
    trail_node_t my_trail_data[MAX_TRAIL_NODES];
    bool my_extra;
    float my_lastmag1;
    float my_lastmag2;
    kellyslater_controller *my_owner;
    spray_params_t *my_spray;
};

extern trail *g_trails[MAX_TRAIL_GENERATORS];
extern trail *trail_p1;
extern trail *trail_p2;
extern trail *trail_m1;
extern trail *trail_m2;
extern const char no_player_trail_text[];
extern const char no_object_trail_text[];
extern "C" void nglPrintf(const char *format, ...)
    __asm__("nglPrintf__FPCce");
void ks_fx_trail_destroy(trail *dead);

__asm__(".equ spraypt_pos__5trailP15spray_control_t, 0x00364A20");
__asm__(".equ draw__5trail, 0x00363438");
__asm__(".equ g_trails, 0x004861D0");
__asm__(".equ trail_p1, 0x0047ED54");
__asm__(".equ trail_p2, 0x0047ED58");
__asm__(".equ trail_m1, 0x0047ED5C");
__asm__(".equ trail_m2, 0x0047ED60");
__asm__(".equ no_player_trail_text, 0x00507B08");
__asm__(".equ no_object_trail_text, 0x00507B28");
__asm__(
    ".equ initialize__5trailffbP22kellyslater_controller, "
    "0x00361C08");
__asm__(".equ nglPrintf__FPCce, 0x003AC050");

#endif
