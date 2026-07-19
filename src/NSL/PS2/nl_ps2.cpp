// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00391748)
// 0x00391748 nlIdentityMatrix__FPA3_f
typedef float nlMatrix4x4[4][4];
void nslSceVu0UnitMatrix(nlMatrix4x4 matrix);
__asm__(".equ nslSceVu0UnitMatrix__FPA3_f, 0x00391718");
void nlIdentityMatrix(nlMatrix4x4 matrix) { nslSceVu0UnitMatrix(matrix); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
