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
