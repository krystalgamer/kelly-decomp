// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002413E0)
// 0x002413E0 Terminate__15RungeKuttaClass
extern "C" void arch_free(void*)__asm__("arch_free__FPv");class RungeKuttaClass{public:char pad[24];float*temp1,*temp2,*temp3,*temp4,*xtemp;int Terminate()__asm__("Terminate__15RungeKuttaClass");};__asm__(".equ arch_free__FPv,0x002AC768");int RungeKuttaClass::Terminate(){if(temp1)arch_free(temp1);temp1=0;if(temp2)arch_free(temp2);temp2=0;if(temp3)arch_free(temp3);temp3=0;if(temp4)arch_free(temp4);temp4=0;if(xtemp)arch_free(xtemp);xtemp=0;return 1;}
#endif

// Source implementation boundary.
// 0x0026EA68 SetStepSize__14OdeSolverClassf
#include "KS/SRC/ks/ode.h"
void OdeSolverClass::SetStepSize(float value)
{
    stepSize = value;
}

// 0x0026EB48 SetStepSize__15RungeKuttaClassf
#include "KS/SRC/ks/ode.h"
void RungeKuttaClass::SetStepSize(float value)
{
    stepSize = value;
    step2 = value / 2.0f;
    step6 = value / 6.0f;
}
