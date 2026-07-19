// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0020D2E8)
// 0x0020D2E8 SetCurrentTrick__22kellyslater_controller
class kellyslater_controller {
    char padding_to_current[0x18F4];
    int currentTrick;
    int completedTrick;
    int newTrick;
public:
    void SetCurrentTrick();
};

void kellyslater_controller::SetCurrentTrick() {
    currentTrick = newTrick;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D2F8)
// 0x0020D2F8 ResetTricks__22kellyslater_controller
class kellyslater_controller { char padding[0x18F4]; int currentTrick; int completedTrick; public: void ResetTricks(); };
void kellyslater_controller::ResetTricks() { completedTrick = -1; currentTrick = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002138B0)
// 0x002138B0 StartGrind__22kellyslater_controllerG8vector3d
class vector3d {
public:
    float x;
    float y;
    float z;

    vector3d() {}
    vector3d(const vector3d& value) {
        x = value.x;
        y = value.y;
        z = value.z;
    }
};

class kellyslater_controller {
public:
    void StartGrind(const vector3d direction);
};

void kellyslater_controller::StartGrind(const vector3d direction) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0021E448)
// 0x0021E448 StartCelebration__22kellyslater_controller
class kellyslater_controller { char padding[0x30]; int state; char padding_to_super[0x4]; int super_state; public: void StartCelebration(); };
void kellyslater_controller::StartCelebration() { super_state = 8; state = 90; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0021E460)
// 0x0021E460 StartDisappointment__22kellyslater_controller
class kellyslater_controller { char padding[0x30]; int state; char padding_to_super[0x4]; int super_state; public: void StartDisappointment(); };
void kellyslater_controller::StartDisappointment() { super_state = 8; state = 91; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00224F20)
// 0x00224F20 __12BalanceMeter
class BalanceMeter { char padding[0x14]; int player_num; public: BalanceMeter(); };
BalanceMeter::BalanceMeter() { player_num = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D308)
// 0x0020D308 ClearTricks__22kellyslater_controller
class kellyslater_controller { char padding0[0x16b8]; bool bSpecialTrick; char padding1[0x238]; int completedTrick; int newTrick; int currentTrick; char padding2[0x10]; bool trick_queued; public: void ClearTricks(); };
void kellyslater_controller::ClearTricks() { int value = -1; __asm__ volatile("" : : "r"(value)); bSpecialTrick = false; __asm__ volatile("" : : : "memory"); newTrick = value; __asm__ volatile("" : : : "memory"); trick_queued = false; __asm__ volatile("" : : : "memory"); currentTrick = value; __asm__ volatile("" : : : "memory"); completedTrick = value; }
#endif
