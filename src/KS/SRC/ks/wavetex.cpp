// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0037E728)
// 0x0037E728 WAVETEX_SetPlayer__Fi
extern int wavetex_player;
__asm__(".equ wavetex_player, 0x00484EC0");
void WAVETEX_SetPlayer(int value) { wavetex_player = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037E738)
// 0x0037E738 WAVETEX_GetPlayer__Fv
extern int wavetex_player;
__asm__(".equ wavetex_player, 0x00484EC0");
int WAVETEX_GetPlayer() { return wavetex_player; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380500)
// 0x00380500 WAVETEX_Width__Fii
unsigned int WAVETEX_Width(int textype, int frame) {
    return 128;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380508)
// 0x00380508 WAVETEX_Height__Fii
unsigned int WAVETEX_Height(int textype, int frame) {
    return 128;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380D98)
// 0x00380D98 WAVETEX_SetMatPlayerShadows__Fbi
void WAVETEX_SetMatPlayerShadows(bool enabled, int material) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003810E8)
// 0x003810E8 WAVETEX_CloseWaveMesh__Fv
void WAVETEX_CloseWaveMesh() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00381100)
// 0x00381100 WAVETEX_FillWaveMesh__FUibN41
// Released signature: WAVETEX_FillWaveMesh(unsigned int, bool, bool, bool, bool, bool).
void WAVETEX_FillWaveMesh_stub() asm(
    "WAVETEX_FillWaveMesh__FUibN41"
);

void WAVETEX_FillWaveMesh_stub() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003818D8)
// 0x003818D8 WAVETEX_StaticInit__Fv
void WAVETEXMENU_StaticInit();
__asm__(".equ WAVETEXMENU_StaticInit__Fv, 0x00381240");
void WAVETEX_StaticInit() { WAVETEXMENU_StaticInit(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

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
