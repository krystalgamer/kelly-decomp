#include "KS/SRC/ks/ode.h"

// 0x0026EA68 SetStepSize__14OdeSolverClassf
void OdeSolverClass::SetStepSize(float value)
{
    stepSize = value;
}

// 0x0026EB48 SetStepSize__15RungeKuttaClassf
void RungeKuttaClass::SetStepSize(float value)
{
    stepSize = value;
    step2 = value / 2.0f;
    step6 = value / 6.0f;
}
