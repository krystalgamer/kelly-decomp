// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0020BD28)
// 0x0020BD28 calculate_priority__14surfer_ai_goalf
class surfer_ai_goal { char padding[0x4]; float priority; public: float calculate_priority(float time); };
float surfer_ai_goal::calculate_priority(float time) { priority = 1.0f; return priority; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020BD08)
// 0x0020BD08 frame_advance__14surfer_ai_goalf
class ai_goal { public: float frame_advance(float time); };
__asm__(".equ frame_advance__7ai_goalf, 0x00106500");
class surfer_ai_goal : public ai_goal { public: float frame_advance(float time); };
float surfer_ai_goal::frame_advance(float time) { float result = ai_goal::frame_advance(time); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020BD38)
// 0x0020BD38 going_into_service__14surfer_ai_goal
class ai_goal { public: void going_into_service(); };
__asm__(".equ going_into_service__7ai_goal, 0x00106618");
class surfer_ai_goal : public ai_goal { public: void going_into_service(); };
void surfer_ai_goal::going_into_service() { ai_goal::going_into_service(); __asm__ volatile(""); }
#endif
