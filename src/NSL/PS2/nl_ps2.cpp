// Matching decompilation blocks selected by generated build shims.


// 0x003918A8 nlScaleVect3d__FRA2_fRA2_Cff
#include "NSL/PS2/nl_ps2.h"

void nlScaleVect3d(
    nlVector3d &result,
    const nlVector3d &vector,
    float factor)
{
    result[0] = vector[0] * factor;
    result[1] = vector[1] * factor;
    result[2] = vector[2] * factor;
}

#if defined(KELLY_DECOMP_FUNCTION_00391770)
// 0x00391770 nlDotProduct3d__FPfT0
#include "NSL/PS2/nl_ps2.h"

float nlDotProduct3d(nlVector3d v0, nlVector3d v1)
{
    return v0[0] * v1[0] + v0[1] * v1[1] + v0[2] * v1[2];
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00391838)
// 0x00391838 nlAddVect3d__FRA2_fRA2_CfT1
typedef float nlVector3d[3];

void nlAddVect3d(
    nlVector3d &result,
    const nlVector3d &first,
    const nlVector3d &second
) {
    result[0] = first[0] + second[0];
    result[1] = first[1] + second[1];
    result[2] = first[2] + second[2];
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00391870)
// 0x00391870 nlSubVect3d__FRA2_fRA2_CfT1
typedef float nlVector3d[3];

void nlSubVect3d(
    nlVector3d &result,
    const nlVector3d &first,
    const nlVector3d &second
) {
    result[0] = first[0] - second[0];
    result[1] = first[1] - second[1];
    result[2] = first[2] - second[2];
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003917A0)
// 0x003917A0 nlCrossProduct3d__FPfN20
extern "C" void nlCrossProduct3d(float *dst, float *lhs, float *rhs) __asm__("nlCrossProduct3d__FPfN20");
extern "C" void nlCrossProduct3d(float *dst, float *lhs, float *rhs)
{
    dst[0] = lhs[1]*rhs[2] - lhs[2]*rhs[1];
    dst[1] = lhs[2]*rhs[0] - lhs[0]*rhs[2];
    dst[2] = lhs[0]*rhs[1] - lhs[1]*rhs[0];
}
#endif
