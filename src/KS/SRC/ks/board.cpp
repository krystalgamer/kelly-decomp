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
