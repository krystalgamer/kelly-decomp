// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0026EA68)
// 0x0026EA68 SetStepSize__14OdeSolverClassf
class OdeSolverClass {
    char padding[0x4];
    float stepSize;
public:
    void SetStepSize(float value);
};

void OdeSolverClass::SetStepSize(float value) {
    stepSize = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026EB48)
// 0x0026EB48 SetStepSize__15RungeKuttaClassf
class RungeKuttaClass { char padding0[4]; float stepSize; char padding1[8]; float step2; float step6; public: void SetStepSize(float step); };
void RungeKuttaClass::SetStepSize(float step) { stepSize = step; step2 = step / 2.0f; step6 = step / 6.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026EA38)
// 0x0026EA38 _$_14OdeSolverClass
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004ED560");

struct target_layout {
    char padding[0xc];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_14OdeSolverClass");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
