// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002868C8)
// 0x002868C8 __14HeadToHeadMode
class HeadToHeadMode {
public:
    HeadToHeadMode();
};

HeadToHeadMode::HeadToHeadMode() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002868F8)
// 0x002868F8 Initialize__14HeadToHeadModePP22kellyslater_controller
class kellyslater_controller;

class HeadToHeadMode {
public:
    void Initialize(kellyslater_controller** controllers);
};

void HeadToHeadMode::Initialize(kellyslater_controller** controllers) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286900)
// 0x00286900 Reset__14HeadToHeadMode
class HeadToHeadMode {
public:
    void Reset();
};

void HeadToHeadMode::Reset() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286908)
// 0x00286908 Update__14HeadToHeadModef
class HeadToHeadMode {
public:
    void Update(float dt);
};

void HeadToHeadMode::Update(float dt) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002868D0)
// 0x002868D0 _$_14HeadToHeadMode
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void HeadToHeadModeDtor(void *self, int deleting) __asm__("_$_14HeadToHeadMode");
void HeadToHeadModeDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
