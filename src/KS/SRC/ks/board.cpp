// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001EE8D8)
// 0x001EE8D8 Terminate__20SurfBoardObjectClass
class SurfBoardObjectClass {
public:
    int Terminate();
};

int SurfBoardObjectClass::Terminate() {
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001F1ED0)
// 0x001F1ED0 ResetTimers__20SurfBoardObjectClass
class SurfBoardObjectClass {
    char padding_to_backwards[0xA54];
    float backwards_time;
    char padding_to_standing[0x8];
    float standing_time;
public:
    void ResetTimers();
};

void SurfBoardObjectClass::ResetTimers() {
    standing_time = 0;
    backwards_time = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001F9B18)
// 0x001F9B18 IncrementFloatSpeed__20SurfBoardObjectClass
class SurfBoardObjectClass { char padding[0xaa0]; float float_speed; public: void IncrementFloatSpeed(); };
void SurfBoardObjectClass::IncrementFloatSpeed() { float value = float_speed; __asm__ volatile("" : : "f"(value)); float increment = 1.5f; __asm__ volatile("nop"); float_speed = value + increment; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001F99D0)
// 0x001F99D0 GetLeanPercentage__20SurfBoardObjectClass
class SurfBoardObjectClass { char padding0[0xd8]; float maxLeanAngle; char padding1[0x8f4]; float curLeanAngle; public: float GetLeanPercentage(); };
float SurfBoardObjectClass::GetLeanPercentage() { return curLeanAngle / (maxLeanAngle * 0.017453292f); }
#endif
