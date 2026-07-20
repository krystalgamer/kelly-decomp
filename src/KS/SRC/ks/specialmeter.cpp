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

#if defined(KELLY_DECOMP_FUNCTION_00250CA8)
// 0x00250CA8 Reset__12SpecialMeter
class SpecialMeter { char padding0[8]; float fillage; bool isEnabled; int trickRegion; bool isDoingTrick; float faceLinkTimer; int faceLink; float specialTime; char padding1[4]; int numPerfects; public: void Reset(); };
void SpecialMeter::Reset() { numPerfects = 0; KELLY_DECOMP_COMPILER_BARRIER(); fillage = 0.0f; KELLY_DECOMP_COMPILER_BARRIER(); isEnabled = false; KELLY_DECOMP_COMPILER_BARRIER(); isDoingTrick = false; KELLY_DECOMP_COMPILER_BARRIER(); faceLinkTimer = 0.0f; KELLY_DECOMP_COMPILER_BARRIER(); specialTime = 0.0f; KELLY_DECOMP_COMPILER_BARRIER(); faceLink = 0; KELLY_DECOMP_COMPILER_BARRIER(); trickRegion = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00250C78)
// 0x00250C78 _$_12SpecialMeter
extern "C" void EventRecipientDtor(void *self, int deleting) __asm__("_$_14EventRecipient");
extern const char special_meter_vtable[];
__asm__(".equ _$_14EventRecipient, 0x00349B98");
__asm__(".equ special_meter_vtable, 0x004DD4C8");
struct special_meter_layout { const void *vtable; };
extern "C" void SpecialMeterDtor(void *self, int deleting) __asm__("_$_12SpecialMeter");
void SpecialMeterDtor(void *self, int deleting) { ((special_meter_layout *)self)->vtable = special_meter_vtable; EventRecipientDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
