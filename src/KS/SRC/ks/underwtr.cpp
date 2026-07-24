// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0036D6F8)
// 0x0036D6F8 UNDERWATER_CameraReset__Fv
extern bool underwater_camera_reset;
__asm__(".equ underwater_camera_reset, 0x00484568");
void UNDERWATER_CameraReset() { underwater_camera_reset = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036E5E0)
// 0x0036E5E0 UNDERWATER_ScrollBottom__Fv
struct game { char padding[0xb0]; int num_players; int get_num_players() const { return num_players; } };
extern game *g_game_ptr __asm__("g_game_ptr");
asm(".equ g_game_ptr, 0x0046AC64");
void UNDERWATER_ScrollPlayerBottom(int player);
asm(".equ UNDERWATER_ScrollPlayerBottom__Fi, 0x0036E378");
void UNDERWATER_ScrollBottom()
{
    if (g_game_ptr->get_num_players() > 1)
        UNDERWATER_ScrollPlayerBottom(1);
    UNDERWATER_ScrollPlayerBottom(0);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036DA88)
// 0x0036DA88 UNDERWATER_CameraUnderwater__Fi
class KSReplay { public: bool IsPlaying(); };
extern KSReplay ksreplay;
extern bool Wave_cameraunderwater[];
extern bool FEDone();
__asm__(".equ ksreplay, 0x004252A8");
__asm__(".equ IsPlaying__8KSReplay, 0x0023BE08");
__asm__(".equ FEDone__Fv, 0x00199150");
__asm__(".equ Wave_cameraunderwater, 0x0049A980");
bool UNDERWATER_CameraUnderwater(int player) {
    if (ksreplay.IsPlaying()) return Wave_cameraunderwater[player];
    if (!FEDone()) return false;
    return Wave_cameraunderwater[player];
}
#endif
