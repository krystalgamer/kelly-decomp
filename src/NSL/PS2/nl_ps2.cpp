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
typedef float nlVector3d[3];

float nlDotProduct3d(nlVector3d v0, nlVector3d v1)
{
    return v0[0] * v1[0] + v0[1] * v1[1] + v0[2] * v1[2];
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00391808)
// 0x00391808 nlTransformVector__FPfPA3_fT0
typedef float nlVector4d[4] __attribute__((aligned(16)));
typedef float nlMatrix4x4[4][4] __attribute__((aligned(16)));

void nlTransformVector(nlVector4d destination, nlMatrix4x4 matrix,
                       nlVector4d input)
{
    __asm__ volatile(
        "lqc2 vf4,0x0(%1)\n\t"
        "lqc2 vf5,0x10(%1)\n\t"
        "lqc2 vf6,0x20(%1)\n\t"
        "lqc2 vf7,0x30(%1)\n\t"
        "lqc2 vf8,0x0(%2)\n\t"
        "vmulax.xyzw ACC,vf4,vf8\n\t"
        "vmadday.xyzw ACC,vf5,vf8\n\t"
        "vmaddaz.xyzw ACC,vf6,vf8\n\t"
        "vmaddw.xyzw vf9,vf7,vf8\n\t"
        "sqc2 vf9,0x0(%0)"
        :
        : "r"(destination), "r"(matrix), "r"(input)
        : "memory"
    );
    __asm__ volatile("nop");
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
