#ifndef KELLY_DECOMP_WAVETEX_PROJECT_LIGHT_SHARED_H
#define KELLY_DECOMP_WAVETEX_PROJECT_LIGHT_SHARED_H

struct PlayMode {
    void *timeAttack;
    void *meterAttack;
    void *headToHead;
    void *push;
};

struct game_recti {
    int x0;
    int y0;
    int x1;
    int y1;
};

class game {
    char data_before_snapshot_state[0x68];
    int snapshotState;
    void *destSnapshot;
    int renderState;
    int game_mode;
    PlayMode play_mode;
    void *player_cam[2];
    game_recti player_viewports[2];
    int num_players;
    int num_ai_players;
    int num_active_players;
    int active_player;

public:
    int get_active_player() const {
        return active_player;
    }

    bool is_splitscreen() const {
        return num_active_players > 1 && num_ai_players == 0;
    }
};

class kellyslater_controller {
    char data_before_state[0x30];
    int current_state;
    char data_before_super_state[4];
    int super_state;

public:
    int get_current_state() const {
        return current_state;
    }

    int get_super_state() const {
        return super_state;
    }
};

class world_dynamics_system {
    char data_before_controllers[0xf8];
    kellyslater_controller *controllers[2];

public:
    kellyslater_controller *get_ks_controller(int player) {
        return controllers[player];
    }
};

enum light_flavor_t {
    LIGHT_FLAVOR_POINT,
    LIGHT_FLAVOR_SPOT,
    LIGHT_FLAVOR_DIRECTIONAL,
    LIGHT_FLAVOR_PARALLELPOINT
};

class light_properties {
    light_flavor_t flavor;

public:
    light_flavor_t get_flavor() const {
        return flavor;
    }
};

class light_source {
    char entity_state[0x200];
    light_properties *properties;

public:
    const light_properties &get_properties() const {
        return *properties;
    }
};

struct WavetexDebugStruct {
    int AllTranslucent;
    int Autowiggle;
    int BackfaceCull;
    int BilinearFilter;
    int DrawDarkPass;
    int DrawHighPass;
    int DrawLightPass;
    int DrawShadowQuad;
    int DrawSpotPass;
    int DrawTexture;
    int DrawTextureAnim;
    int FixedShadowTex;
    int FoamPass;
    int ForceZ;
    int MultiTexture;
    int ScissorWaveMesh;
    int ShadowBlur;
    int ShadowDistort;
    int ShadowLights;
};

enum {
    SUPER_STATE_WIPEOUT = 3,
    STATE_SWIMTOLIE = 4,
    STATE_DUCKDIVE = 7,
    STATE_FLYBY = 10
};

extern game *g_game_ptr;
extern world_dynamics_system *g_world_ptr;
extern float WAVETEX_shadowalpha;
extern WavetexDebugStruct WavetexDebug;
extern int updateshadowsun;
extern int WavetexDebug_ShadowPass;

void WAVETEX_UpdateSunCamPos();

__asm__(".equ g_game_ptr, 0x0046AC64");
__asm__(".equ g_world_ptr, 0x00431A8C");
__asm__(".equ WAVETEX_shadowalpha, 0x00484ED0");
__asm__(".equ WavetexDebug, 0x00484DB0");
__asm__(".equ updateshadowsun, 0x00484FC4");
__asm__(".equ WavetexDebug_ShadowPass, 0x00484FC0");
__asm__(".equ WAVETEX_UpdateSunCamPos__Fv, 0x0037F490");

#endif
