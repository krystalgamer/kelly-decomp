// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0025DC18)
extern void RandomVOShutdown(void *) __asm__("shutdown__8RandomVO");
__asm__(".equ shutdown__8RandomVO, 0x00256700");

class SFXEngine {
public:
    void shutdown() __asm__("shutdown__9SFXEngine");
};

void SFXEngine::shutdown()
{
    char *self = (char *)this;
    RandomVOShutdown(self + 636);
    RandomVOShutdown(self + 1272);
    RandomVOShutdown(self + 2552);
    RandomVOShutdown(self + 3188);
    RandomVOShutdown(self + 3824);
    RandomVOShutdown(self);
    __asm__ volatile("");
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_0036C4B0)
// 0x0036C4B0 ks_fx_OnNewWave__Fv
void ks_fx_reset();
void ks_fx_init_wave();
__asm__(".equ ks_fx_reset__Fv, 0x0036C4D8");
__asm__(".equ ks_fx_init_wave__Fv, 0x00368160");
void ks_fx_OnNewWave() { ks_fx_reset(); ks_fx_init_wave(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036B1D8)
// 0x0036B1D8 ks_fx_create_big_splash__FG8vector3d
 #include "decomp_annotations.h"

struct vector3d {
    float x;
    float y;
    float z;

    vector3d(const vector3d &other)
    {
        x = other.x;
        y = other.y;
        z = other.z;
    }
};

void ks_fx_add_splash(
    unsigned int fxindex,
    const vector3d &position,
    float power
);

__asm__(".equ ks_fx_add_splash__FUiRC8vector3df, 0x0036C3D0");

class game {
    char padding[0xB4];
    int num_ai_players;
    int num_players;

public:
    int get_num_players() const { return num_players; }
    int get_num_ai_players() const { return num_ai_players; }
};

extern game *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");

void ks_fx_create_big_splash(vector3d position)
{
    bool skip = false;
    if (g_game_ptr->get_num_players() >= 2)
        skip = g_game_ptr->get_num_ai_players() == 0;

    if (!skip) {
        ks_fx_add_splash(7, position, 1.0f);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036C6D0)
// 0x0036C6D0 set_size__FP11crashnode_t
struct crashnode_t {
    char padding[0xc];
    float magnitude;
    float size;
    float age;
};
struct fx_data {
    char padding[0x68];
    float wave_inc;
    float wave_dec;
};
extern fx_data FXD;
__asm__(".equ FXD, 0x00485A30");
void set_size(crashnode_t *node) {
    if (node->age>FXD.wave_inc)
        node->size=node->magnitude*
            (1-(node->age-FXD.wave_inc)/FXD.wave_dec);
    else
        node->size=node->magnitude*node->age/FXD.wave_inc;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036C620)
// 0x0036C620 trails_update__Fv
struct trail{int valid;};extern float frame_sec;extern trail*g_trails[4];extern "C" void update(trail*,float) __asm__("update__5trailf");__asm__(".equ frame_sec,0x0046B280");__asm__(".equ g_trails,0x004861D0");__asm__(".equ update__5trailf,0x00362488");extern "C" void trails_update() __asm__("trails_update__Fv");void trails_update(){float dt=frame_sec;for(int i=0;i<4;i++){if(g_trails[i]->valid)update(g_trails[i],dt);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036B228)
// 0x0036B228 ks_fx_create_paddle_splash__FG8vector3d
struct vector3d{float x,y,z;};struct game{char pad[180];int field180;int mode;};extern game*g_game_ptr;extern int currentparticle;extern void*fx_tex[];struct Particle{char pad[192];void*Tex;char pad2[12];unsigned long long move;char tail[8];};extern Particle LooseParticles[];extern "C" void add_splash(unsigned,const vector3d&,float)__asm__("ks_fx_add_splash__FUiRC8vector3df");__asm__(".equ g_game_ptr,0x0046AC64");__asm__(".equ currentparticle,0x0047EE3C");__asm__(".equ fx_tex,0x00485AB4");__asm__(".equ LooseParticles,0x0048E840");__asm__(".equ ks_fx_add_splash__FUiRC8vector3df,0x0036C3D0");extern "C" void paddle(const vector3d&pos)__asm__("ks_fx_create_paddle_splash__FG8vector3d");void paddle(const vector3d&pos){bool skip=false;if(g_game_ptr->mode>=2)skip=(g_game_ptr->field180==0);if(skip)return;add_splash(8,pos,1.0f);Particle&p=LooseParticles[currentparticle];p.Tex=fx_tex[0];p.move|=1;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00366468)
// 0x00366468 param_translate__FfffP8vector3d
typedef float angle_t;
const angle_t PI = 3.1415927f;
#define DEG_TO_RAD(a)    ((a) * (PI / 180.0f))

class vector3d
{
public:
  typedef float T;
  T x,y,z;
};

extern "C" float cosf(float);
extern "C" float sinf(float);
__asm__(".equ cosf, 0x003C6340");
__asm__(".equ sinf, 0x003C6530");

void param_translate(float h_angle, float v_angle, float mag, vector3d *output)
{
	output->x = mag * cosf(DEG_TO_RAD(180 + h_angle)) * sinf(DEG_TO_RAD(v_angle));	// fix trig (dc 08/16/01)
	output->z = mag * sinf(DEG_TO_RAD(180 + h_angle)) * sinf(DEG_TO_RAD(v_angle));	// fix trig (dc 08/16/01)
	output->y = mag * cosf(DEG_TO_RAD(v_angle));
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036B120)
// 0x0036B120 ks_fx_start_wipeout_splash__Fi
#include "KS/SRC/ks/ksfx.h"

void ks_fx_start_wipeout_splash(int index)
{
    if (index >= g_game_ptr->get_num_players())
        return;

    for (int i = 0; i < MAX_WIPEOUT_SPLASHES; i++)
    {
        if (!wipeout_splashes[i].valid)
        {
            if (!ksreplay.IsPlaying())
                ksreplay.SetWipeoutSplash(index);

            wipeout_splashes[i].valid = true;
            wipeout_splashes[i].hero_index = index;
            wipeout_splashes[i].start_time = TIMER_GetTotalSec();
            break;
        }
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036C3D0)
// 0x0036C3D0 ks_fx_add_splash__FUiRC8vector3df
struct vector3d {
    float x;
    float y;
    float z;

};

struct particle {
    char padding0[192];
    void *texture;
    char padding1[12];
    unsigned long long flags;
};

struct loose_particle {
    particle part;
    char tail[224 - sizeof(particle)];
};

extern int currentparticle;
extern loose_particle LooseParticles[100];
extern void *fx_tex[];

extern "C" void prepare_part(
    unsigned int index,
    particle *part,
    float power,
    float scale,
    const vector3d *position,
    const vector3d *second_position,
    float epsilon,
    float zero
) __asm__("prepare_part__FUiP17nglParticleSystemffG8vector3dT4ff");

__asm__(".equ currentparticle, 0x0047EE3C");
__asm__(".equ LooseParticles, 0x0048E840");
__asm__(".equ fx_tex, 0x00485AA0");
__asm__(
    ".equ prepare_part__FUiP17nglParticleSystemffG8vector3dT4ff, "
    "0x00369508"
);

void ks_fx_add_splash(
    unsigned int index,
    const vector3d &position,
    float power
)
{
    currentparticle++;
    if (currentparticle >= 100)
        currentparticle = 0;

    vector3d first_position;
    first_position.x = position.x;
    first_position.y = position.y;
    first_position.z = position.z;
    vector3d second_position;
    second_position.x = position.x;
    second_position.y = position.y;
    second_position.z = position.z;

    prepare_part(
        index,
        &LooseParticles[currentparticle].part,
        power,
        1.0f,
        &first_position,
        &second_position,
        0.0001f,
        0.0f
    );

    loose_particle *current = &LooseParticles[currentparticle];
    void *texture = fx_tex[2];
    unsigned long long flags = current->part.flags;
    current->part.texture = texture;
    current->part.flags = flags & ~1ULL;
}
#endif
