// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E2E80)
// 0x001E2E80 frame_advance__10game_clockf
__asm__(".equ _10game_clock$delta, 0x0040E48C");
__asm__(".equ _10game_clock$frames, 0x0040E490");
__asm__(".equ _10game_clock$ticks, 0x0040E498");
typedef float time_value_t; typedef unsigned int uint32; typedef unsigned long long uint64;
class game_clock { public: static time_value_t delta; static uint32 frames; static uint64 ticks; void frame_advance(time_value_t _delta); };
void game_clock::frame_advance(time_value_t _delta) { ++frames; delta = _delta; ticks += uint64((int)(delta * 10000.0F)); }
#endif
