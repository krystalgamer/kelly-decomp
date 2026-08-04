// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0037F2F8)
// 0x0037F2F8 WAVETEX_SetShadowScale__Ff
extern float WAVETEX_ShadowScale;
__asm__(".equ WAVETEX_ShadowScale, 0x00484ED4");
void WAVETEX_SetShadowScale(float scale) { WAVETEX_ShadowScale = scale * 15.0f * 0.5f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037F100)
// 0x0037F100 WAVETEX_CheckClearShadows__Fv
extern int newshadowbuf;
void WAVETEX_ClearShadows();
__asm__(".equ newshadowbuf, 0x00484EC4");
__asm__(".equ WAVETEX_ClearShadows__Fv, 0x0037F930");
void WAVETEX_CheckClearShadows() { if (newshadowbuf) { newshadowbuf = 0; WAVETEX_ClearShadows(); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380C38)
// 0x00380C38 WAVETEX_SetMatZSorted__Fbi
struct nglMaterial { unsigned int Flags; char padding[260]; };
extern nglMaterial WaveTexLMat[][5] __asm__("WaveTexLMat");
extern int wavetex_currentmat __asm__("wavetex_currentmat");
asm(".equ WaveTexLMat, 0x0058DE98");
asm(".equ wavetex_currentmat, 0x00595CC8");
void WAVETEX_SetMatZSorted(bool onOff, int matid)
{
    WaveTexLMat[wavetex_currentmat][matid].Flags |= 0x00080000;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037E5C8)
// 0x0037E5C8 WAVETEX_CameraUnderwater__Fv
int WAVETEX_GetPlayer();
bool UNDERWATER_CameraUnderwater(int player);
__asm__(".equ WAVETEX_GetPlayer__Fv, 0x0037E738");
__asm__(".equ UNDERWATER_CameraUnderwater__Fi, 0x0036DA88");
struct game_layout {
    char padding[0xb4];
    int mode_flag;
    int player_count;
    bool is_splitscreen() const {
        return player_count>=2 && mode_flag==0;
    }
};
extern game_layout *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");
bool WAVETEX_CameraUnderwater() {
    int player=WAVETEX_GetPlayer();
    if (g_game_ptr->is_splitscreen())
        goto not_underwater;
    return UNDERWATER_CameraUnderwater(player);
not_underwater:
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380120)
// 0x00380120 WAVETEX_GetTextureAnim__Fi
struct nglTexture;
extern nglTexture *WaveTexAnimLight;
extern nglTexture *WaveTexAnimDark;
extern nglTexture *WaveTexAnimHighlight;
extern nglTexture *WaveTexAnimSpotlight;
extern nglTexture *WaveTexAnimFoam;
__asm__(".equ WaveTexAnimLight,0x00484E98");
__asm__(".equ WaveTexAnimDark,0x00484E9C");
__asm__(".equ WaveTexAnimHighlight,0x00484EA0");
__asm__(".equ WaveTexAnimSpotlight,0x00484EA4");
__asm__(".equ WaveTexAnimFoam,0x00484EA8");
enum { WAVETEX_TEXLITE=0, WAVETEX_TEXDARK, WAVETEX_TEXHIGH, WAVETEX_TEXSPOT, WAVETEX_TEXENVM, WAVETEX_TEXFOAM };
extern void *texture_switch_table[];
__asm__(".equ texture_switch_table,0x0051A4B0");
nglTexture *WAVETEX_GetTextureAnim(int textype)
{
    static void *keep_labels[] __attribute__((used)) = {
        &&use_light, &&use_dark, &&use_highlight,
        &&use_spotlight, &&use_light, &&use_foam
    };
    if ((unsigned int)textype >= 6)
        goto use_light;
    goto *texture_switch_table[textype];
use_dark:
    __asm__ __volatile__(".globl .L00380144\n.L00380144:");
    return WaveTexAnimDark;
use_highlight:
    __asm__ __volatile__(".globl .L00380150\n.L00380150:");
    return WaveTexAnimHighlight;
use_spotlight:
    __asm__ __volatile__(".globl .L0038015C\n.L0038015C:");
    return WaveTexAnimSpotlight;
use_foam:
    __asm__ __volatile__(".globl .L00380168\n.L00380168:");
    return WaveTexAnimFoam;
use_light:
    __asm__ __volatile__(".globl .L00380174\n.L00380174:");
    return WaveTexAnimLight;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380BD0)
// 0x00380BD0 WAVETEX_Update__Fi
extern "C" void prepare() __asm__("WAVETEX_PrepareMaterials__Fv");__asm__(".equ WAVETEX_PrepareMaterials__Fv,0x00380B28");struct game_layout{char padding[180];int mode;int players;};extern game_layout*g_game_ptr;extern int WAVETEX_BufferIndex;__asm__(".equ g_game_ptr,0x0046AC64");__asm__(".equ WAVETEX_BufferIndex,0x00484E1C");extern "C" void update_wave(int player) __asm__("WAVETEX_Update__Fi");void update_wave(int player){prepare();bool primary=false;if(g_game_ptr->players>=2)primary=(g_game_ptr->mode==0);if(!primary||player==0)WAVETEX_BufferIndex=(WAVETEX_BufferIndex+1)&1;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037F418)
// 0x0037F418 WAVETEX_ProjectLight__FP12light_source
struct light_source;struct texture;struct matrix{char p0[64];};struct vector4{float v[4];};extern "C" bool project(light_source*) __asm__("WAVETEX_ProjectThisLight__FP12light_source");extern "C" texture*shadow_tex() __asm__("WAVETEX_GetShadowTex__Fv");extern "C" void add_light(unsigned,const matrix&,const vector4&,unsigned,unsigned,texture*) __asm__("nglListAddDirProjectorLight__FUiRC9nglMatrixRC9nglVectorUiUiP10nglTexture");__asm__(".equ WAVETEX_ProjectThisLight__FP12light_source,0x0037F328");__asm__(".equ WAVETEX_GetShadowTex__Fv,0x0037F2A8");__asm__(".equ nglListAddDirProjectorLight__FUiRC9nglMatrixRC9nglVectorUiUiP10nglTexture,0x0039B458");extern float lightscale;extern vector4 projScale;extern matrix suntolit;extern unsigned blend;__asm__(".equ lightscale,0x00484FD0");__asm__(".equ projScale,0x00484FE0");__asm__(".equ suntolit,0x00484F80");__asm__(".equ blend,0x00484FF0");extern "C" void project_light(light_source*lp) __asm__("WAVETEX_ProjectLight__FP12light_source");void project_light(light_source*lp){if(project(lp)){projScale.v[0]=lightscale;projScale.v[1]=lightscale;projScale.v[2]=lightscale;projScale.v[3]=1.0f;texture*t=shadow_tex();add_light(0x80000000,suntolit,projScale,blend,0,t);int dead;__asm__("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037F328)
// 0x0037F328 WAVETEX_ProjectThisLight__FP12light_source
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

const float minvisiblealpha = 1.0f / 128.0f;

bool WAVETEX_ProjectThisLight(light_source *lp)
{
    int current_state =
        g_world_ptr->get_ks_controller(
            g_game_ptr->get_active_player())->get_current_state();
    int super_state =
        g_world_ptr->get_ks_controller(
            g_game_ptr->get_active_player())->get_super_state();

    if (super_state == SUPER_STATE_WIPEOUT ||
        current_state == STATE_DUCKDIVE ||
        current_state == STATE_SWIMTOLIE ||
        current_state == STATE_FLYBY)
        return false;

    if (g_game_ptr->is_splitscreen())
        return false;

    if (WAVETEX_shadowalpha < minvisiblealpha)
        return false;
    if ((!WavetexDebug.ShadowLights) ||
        lp->get_properties().get_flavor() == LIGHT_FLAVOR_POINT)
        return false;
    if (updateshadowsun)
        WAVETEX_UpdateSunCamPos();
    return WavetexDebug_ShadowPass;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380B28)
// 0x00380B28 WAVETEX_PrepareMaterials__Fv
struct nglMaterial{char data[264];};extern int AllTranslucent,WAVETEX_alltrans,WAVETEX_transval,wavetex_currentmat;extern nglMaterial WaveTexLMat[][5];extern void WAVETEX_WriteMaterialParms();extern void WAVETEX_InitMaterial(nglMaterial&,int,int,int);asm(".equ AllTranslucent,0x00484DB0");asm(".equ WAVETEX_alltrans,0x00484E60");asm(".equ WAVETEX_transval,0x00484E5C");asm(".equ wavetex_currentmat,0x00595CC8");asm(".equ WaveTexLMat,0x0058DE98");asm(".equ WAVETEX_WriteMaterialParms__Fv,0x0037E620");asm(".equ WAVETEX_InitMaterial__FR11nglMaterialiii,0x003805B0");void WAVETEX_PrepareMaterials(){if(AllTranslucent)WAVETEX_transval=WAVETEX_alltrans;else WAVETEX_transval=128;WAVETEX_WriteMaterialParms();for(int i=0;i<5;i++)WAVETEX_InitMaterial(WaveTexLMat[wavetex_currentmat][i],0,5,i);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380180)
// 0x00380180 WAVETEX_GetTexture__Fii
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

enum
{
    NGLTEX_TGA,
    NGLTEX_TIM2,
    NGLTEX_IFL,
    NGLTEX_ATE,
};

struct nglTexture
{
    u_int TexStreamPos[2];
    u_short Width, Height;
    u_int Hash;
    u_char Type;
    u_char TW, TH;
    u_char padding0;
    u_int Flags;
    void *ph;
    u_int Format;
    u_int *Data;
    u_int NFrames;
    nglTexture **Frames;
};

enum
{
    WAVETEX_TEXLITE = 0,
    WAVETEX_TEXDARK,
    WAVETEX_TEXHIGH,
    WAVETEX_TEXSPOT,
    WAVETEX_TEXENVM,
    WAVETEX_TEXFOAM,
};

extern float WAVE_TexAnimFrame;
extern nglTexture *WaveTexAnimDark;
extern nglTexture *WaveTexAnimHighlight;
extern nglTexture *FoamTexture;
nglTexture *WAVETEX_GetTextureAnim(int textype);

__asm__(".equ WAVE_TexAnimFrame, 0x004846A0");
__asm__(".equ WaveTexAnimDark, 0x00484E9C");
__asm__(".equ WaveTexAnimHighlight, 0x00484EA0");
__asm__(".equ FoamTexture, 0x00484EBC");
__asm__(".equ WAVETEX_GetTextureAnim__Fi, 0x00380120");

#define NULL 0
#define assert(condition) ((void)0)

nglTexture *WAVETEX_GetTexture(int textype, int frame)
{
    if (frame < 0)
    {
        frame = (int)WAVE_TexAnimFrame;
    }

    if (textype == WAVETEX_TEXHIGH || textype == WAVETEX_TEXSPOT)
    {
        if (WaveTexAnimDark && WaveTexAnimHighlight &&
            WaveTexAnimDark->NFrames > WaveTexAnimHighlight->NFrames)
        {
            frame = frame / 2;
        }
    }

    nglTexture *anim = WAVETEX_GetTextureAnim(textype);
    if (anim == NULL && textype == WAVETEX_TEXFOAM)
    {
        return FoamTexture;
    }

    if (anim == NULL)
    {
        return NULL;
    }

    if (anim && frame < (int)anim->NFrames)
        return anim->Frames[frame];
    else if (anim && anim->Type == NGLTEX_IFL)
    {
        if (anim->NFrames)
        {
            assert(anim->Frames[frame % anim->NFrames]);
            return anim->Frames[frame % anim->NFrames];
        }
    }

    return NULL;
}
#endif
