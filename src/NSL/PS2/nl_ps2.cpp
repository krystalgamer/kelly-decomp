// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00391748)
// 0x00391748 nlIdentityMatrix__FPA3_f
typedef float nlMatrix4x4[4][4];
void nslSceVu0UnitMatrix(nlMatrix4x4 matrix);
__asm__(".equ nslSceVu0UnitMatrix__FPA3_f, 0x00391718");
void nlIdentityMatrix(nlMatrix4x4 matrix) { nslSceVu0UnitMatrix(matrix); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003918A8)
// 0x003918A8 nlScaleVect3d__FRA2_fRA2_Cff
typedef float nlVector3d[3];
void nlScaleVect3d(nlVector3d &result, const nlVector3d &vector, float factor) { result[0] = vector[0] * factor; result[1] = vector[1] * factor; result[2] = vector[2] * factor; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00391718)
// 0x00391718 nslSceVu0UnitMatrix__FPA3_f
typedef float matrix4x4[4][4];

void nslSceVu0UnitMatrix(matrix4x4 matrix) {
    __asm__ volatile(
        "vsub.xyzw $vf4,$vf0,$vf0\n"
        "vadd.w $vf4,$vf4,$vf0\n"
        "vmr32.xyzw $vf5,$vf4\n"
        "vmr32.xyzw $vf6,$vf5\n"
        "vmr32.xyzw $vf7,$vf6\n"
        "sqc2 $vf4,0x30(%0)\n"
        "sqc2 $vf5,0x20(%0)\n"
        "sqc2 $vf6,0x10(%0)\n"
        "sqc2 $vf7,0x0(%0)\n"
        :
        : "r"(matrix)
    );
    __asm__ volatile("nop");
}
#endif

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
