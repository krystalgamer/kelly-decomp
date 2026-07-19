// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00250CA0)
// 0x00250CA0 Initialize__12SpecialMeteri
class SpecialMeter {
    char padding[0x4];
    int playerIdx;
public:
    void Initialize(int index);
};

void SpecialMeter::Initialize(int index) {
    playerIdx = index;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00250EA8)
// 0x00250EA8 SetUpSpecialTimer__12SpecialMeter
class SpecialMeter {
    char padding[0x24];
    float current_special_time;
public:
    void SetUpSpecialTimer();
};

void SpecialMeter::SetUpSpecialTimer() {
    current_special_time = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002510F0)
// 0x002510F0 CanRegionLink__C12SpecialMeter
class SpecialMeter {
    char padding[0xC];
    bool isEnabled;
public:
    bool CanRegionLink() const;
};

bool SpecialMeter::CanRegionLink() const {
    return isEnabled;
}
#endif
