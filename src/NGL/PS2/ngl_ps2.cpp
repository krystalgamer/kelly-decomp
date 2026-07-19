// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00395D88)
// 0x00395D88 nglGetScreenWidth__Fv
extern int nglDisplayWidth;
__asm__(".equ nglDisplayWidth, 0x004BB820");
int nglGetScreenWidth() { return nglDisplayWidth; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395D98)
// 0x00395D98 nglGetScreenHeight__Fv
extern int nglDisplayHeight;
__asm__(".equ nglDisplayHeight, 0x004BB824");
int nglGetScreenHeight() { return nglDisplayHeight; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395E18)
// 0x00395E18 nglGetMeshPath__Fv
extern const char nglMeshPath[];
__asm__(".equ nglMeshPath, 0x004BF058");
const char* nglGetMeshPath() { return nglMeshPath; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395E28)
// 0x00395E28 nglGetTexturePath__Fv
extern const char nglTexturePath[];
__asm__(".equ nglTexturePath, 0x004BF158");
const char* nglGetTexturePath() { return nglTexturePath; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395E38)
// 0x00395E38 nglSetProViewPS2__Fb
extern bool nglUsingProView;
__asm__(".equ nglUsingProView, 0x004BB794");
void nglSetProViewPS2(bool value) { nglUsingProView = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395EF0)
// 0x00395EF0 nglGetTVMode__Fv
extern unsigned int nglTVMode;
__asm__(".equ nglTVMode, 0x004BB81C");
unsigned int nglGetTVMode() { return nglTVMode; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395F68)
// 0x00395F68 nglSetDebugFlag__FPCcb
void nglSetDebugFlag(const char* flag, bool value) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395F70)
// 0x00395F70 nglGetDebugFlag__FPCc
bool nglGetDebugFlag(const char* flag) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003969F8)
// 0x003969F8 nglGetFrontBufferTex__Fv
struct nglTexture {};
extern nglTexture nglFrontBufferTex;
__asm__(".equ nglFrontBufferTex, 0x004BBD28");
nglTexture* nglGetFrontBufferTex() { return &nglFrontBufferTex; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00396A08)
// 0x00396A08 nglGetBackBufferTex__Fv
struct nglTexture {};
extern nglTexture nglBackBufferTex;
__asm__(".equ nglBackBufferTex, 0x004BBE58");
nglTexture* nglGetBackBufferTex() { return &nglBackBufferTex; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00397568)
// 0x00397568 nglSetIFLSpeed__Ff
extern float nglIFLSpeed;
__asm__(".equ nglIFLSpeed, 0x004BB808");
void nglSetIFLSpeed(float value) { nglIFLSpeed = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398578)
// 0x00398578 nglSetClearFlags__FUi
struct nglScene { char padding[0x420]; unsigned int ClearFlags; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetClearFlags(unsigned int value) { nglCurScene->ClearFlags = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003985F0)
// 0x003985F0 nglSetClearZ__Ff
struct nglScene { char padding[0x424]; float ClearZ; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetClearZ(float value) { nglCurScene->ClearZ = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398600)
// 0x00398600 nglSetFBWriteMask__FUi
struct nglScene { char padding[0x440]; unsigned int FBWriteMask; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetFBWriteMask(unsigned int value) { nglCurScene->FBWriteMask = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398610)
// 0x00398610 nglSetZWriteEnable__Fb
struct nglScene { char padding[0x444]; bool ZWriteEnable; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetZWriteEnable(bool value) { nglCurScene->ZWriteEnable = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398620)
// 0x00398620 nglSetZTestEnable__Fb
struct nglScene { char padding[0x448]; bool ZTestEnable; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetZTestEnable(bool value) { nglCurScene->ZTestEnable = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398658)
// 0x00398658 nglSetAnimTime__Ff
struct nglScene { char padding[0x49C]; float AnimTime; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetAnimTime(float value) { nglCurScene->AnimTime = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039F8A0)
// 0x0039F8A0 nglTim2GetClut__FP10nglTexture
struct TIM2_PICTUREHEADER { char padding[0xC]; unsigned short HeaderSize; };
struct nglTexture { char padding[0x18]; TIM2_PICTUREHEADER* ph; };
void* nglTim2GetClut(nglTexture* texture) { return (char*)texture->ph + texture->ph->HeaderSize; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A0E70)
// 0x003A0E70 nglExportTextureTGA__FP10nglTexturePCc
struct nglTexture;

void nglExportTextureTGA(nglTexture* texture, const char* filename) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A5810)
// 0x003A5810 nglSetSectionRenderer__FP14nglMeshSectionPFRPUiPv_v
typedef void (*nglCustomNodeFn)(unsigned int*& packet, void* data);

struct nglMeshSection {
    char padding[0x3C];
    nglCustomNodeFn RenderFn;
};

void nglSetSectionRenderer(nglMeshSection* section, nglCustomNodeFn render) {
    section->RenderFn = render;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A69A0)
// 0x003A69A0 nglSetQuadTex__FP7nglQuadP10nglTexture
struct nglTexture;
struct nglQuad {
    char padding[0x60];
    nglTexture* Tex;
};

void nglSetQuadTex(nglQuad* quad, nglTexture* texture) {
    quad->Tex = texture;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A69A8)
// 0x003A69A8 nglSetQuadMapFlags__FP7nglQuadUi
struct nglQuad {
    char padding[0x54];
    unsigned int MapFlags;
};

void nglSetQuadMapFlags(nglQuad* quad, unsigned int flags) {
    quad->MapFlags = flags;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A69B0)
// 0x003A69B0 nglSetQuadBlend__FP7nglQuadUiUi
struct nglQuad { char padding[0x58]; unsigned int BlendMode; unsigned int BlendModeConstant; };
void nglSetQuadBlend(nglQuad* quad, unsigned int blend, unsigned int constant) { quad->BlendMode = blend; quad->BlendModeConstant = constant; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A69E8)
// 0x003A69E8 nglSetQuadColor__FP7nglQuadUi
struct nglQuad { char padding0[0x10]; unsigned int Color1; char padding1[0x10]; unsigned int Color2; char padding2[0x10]; unsigned int Color3; char padding3[0x10]; unsigned int Color4; };
void nglSetQuadColor(nglQuad* quad, unsigned int color) { quad->Color1 = color; quad->Color2 = color; quad->Color3 = color; quad->Color4 = color; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6A90)
// 0x003A6A90 nglSetQuadZ__FP7nglQuadf
struct nglQuad {
    char padding[0x50];
    float Z;
};

void nglSetQuadZ(nglQuad* quad, float value) {
    quad->Z = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AA1A8)
// 0x003AA1A8 nglMeshWriteStrip__FUi
extern unsigned int nglScratchStripVertIdx;
__asm__(".equ nglScratchStripVertIdx, 0x004BB7C0");
void nglMeshWriteStrip(unsigned int length) { nglScratchStripVertIdx = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AAAD8)
// 0x003AAAD8 nglSceneDumpStart__Fv
void nglSceneDumpStart() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AAAE0)
// 0x003AAAE0 nglSceneDumpEnd__Fv
void nglSceneDumpEnd() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395F08)
// 0x00395F08 nglIdentityMatrix__FR9nglMatrix
class nglMatrix { float data[16]; public: operator float *() { return data; } };
extern "C" void sceVu0UnitMatrix(float *matrix);
__asm__(".equ sceVu0UnitMatrix, 0x003BC528");
void nglIdentityMatrix(nglMatrix &matrix) { sceVu0UnitMatrix(matrix); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
