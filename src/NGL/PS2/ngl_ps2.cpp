// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_003A7008)
#include "NGL/PS2/ngl_ps2_shared.h"

// 0x003A7008 nglReleaseFont__FP7nglFont
void nglReleaseFont(nglFont *Font)
{
    if (nglFontBank.Delete(Font->Tex->FileName))
        return;

    nglMemFree(Font->GlyphInfo);
    nglMemFree(Font);
    Font = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A8C18)
#include "NGL/PS2/ngl_ps2_shared.h"

// 0x003A8C18 nglVif1AddCommandListExec__FRPUiUiUi
void nglVif1AddCommandListExec(u_int *&Packet, u_int VertBase, u_int Pass)
{
    Packet[0] = 0x10000000;
    Packet[1] = 0x60010000;
    Packet[2] = Pass;
    Packet[3] = VertBase | 0x04000000;
    Packet[4] = 0x17000000;
    Packet += 5;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395D88)
// 0x00395D88 nglGetScreenWidth__Fv
extern int nglDisplayWidth;
__asm__(".equ nglDisplayWidth, 0x004BB820");
int nglGetScreenWidth() { return nglDisplayWidth; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6BB0)
// 0x003A6BB0 nglScaleQuad__FP7nglQuadffff
typedef unsigned int u_int;
struct nglQuadVertex { float X; float Y; float U; float V; u_int Color; };
struct nglQuad { nglQuadVertex Verts[4]; };
void nglScaleQuad(nglQuad* Quad, float cx, float cy, float sx, float sy)
{
    for (int i = 0; i < 4; i++) {
        nglQuadVertex* Vert = &Quad->Verts[i];
        float x = Vert->X - cx;
        float y = Vert->Y - cy;
        Vert->X = x * sx + cx;
        Vert->Y = y * sy + cy;
    }
}
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

#if defined(KELLY_DECOMP_FUNCTION_00395F28)
// 0x00395F28 nglMulMatrix__FR9nglMatrixRC9nglMatrixT1
class nglMatrix { float data[16]; public: operator float *() { return data; } operator const float *() const { return data; } };
extern "C" void sceVu0MulMatrix(float *dst, const float *lhs, const float *rhs);
__asm__(".equ sceVu0MulMatrix, 0x003BC350");
void nglMulMatrix(nglMatrix &dst, const nglMatrix &lhs, const nglMatrix &rhs) { sceVu0MulMatrix(dst, lhs, rhs); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395D10)
// 0x00395D10 nglMemAlloc__FUiUi
typedef unsigned int u_int;
struct nglSystemCallbackStruct {
    void *ReadFile;
    void *ReleaseFile;
    void *CriticalError;
    void *DebugPrint;
    void *(*MemAlloc)(u_int Size, u_int Align);
    void *MemFree;
};
extern nglSystemCallbackStruct nglSystemCallbacks;
extern "C" void *memalign(u_int Align, u_int Size);
__asm__(".equ nglSystemCallbacks, 0x004BBF98");
__asm__(".equ memalign, 0x003D09A0");
void* nglMemAlloc(u_int Size, u_int Align)
{
    if (!nglSystemCallbacks.MemAlloc)
        return memalign(Align, Size);
    else
        return nglSystemCallbacks.MemAlloc(Size, Align);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00399520)
// 0x00399520 nglVif1RenderSceneNode__FRPUiPv
typedef unsigned int u_int;
struct nglScene { nglScene *Parent; };
extern void nglVif1RenderScene(u_int *&Packet, nglScene *Scene);
extern void nglVif1SetupScene(u_int *&Packet, nglScene *Scene, bool ClearEnable);
__asm__(".equ nglVif1RenderScene__FRPUiP8nglScene, 0x0039A4E0");
__asm__(".equ nglVif1SetupScene__FRPUiP8nglSceneb, 0x0039A128");
void nglVif1RenderSceneNode(u_int *&Packet, void *Param)
{
    nglScene *Scene = (nglScene *)Param;
    nglVif1RenderScene(Packet, Scene);
    nglVif1SetupScene(Packet, Scene->Parent, false);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6110)
// 0x003A6110 nglVif1StartQuads__FRPUi
typedef unsigned int u_int;
typedef unsigned long long u_long;
extern u_long *nglDmaTagPtr;
extern void nglVif1FlushSPAD(u_int *&Packet, bool Force);
__asm__(".equ nglDmaTagPtr, 0x004BB7E8");
__asm__(".equ nglVif1FlushSPAD__FRPUib, 0x003996B8");
inline void nglDmaStartTag(u_int *&Packet)
{
    nglDmaTagPtr = (u_long *)Packet;
    Packet += 4;
}
void nglVif1StartQuads(u_int *&Packet)
{
    nglVif1FlushSPAD(Packet, true);
    nglDmaStartTag(Packet);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395F48)
// 0x00395F48 nglApplyMatrix__FR9nglVectorR9nglMatrixT0
class nglVector { float data[4]; public: operator float *() { return data; } };
class nglMatrix { float data[16]; public: operator float *() { return data; } };
extern "C" void sceVu0ApplyMatrix(float *dst, float *matrix, float *source);
__asm__(".equ sceVu0ApplyMatrix, 0x003BC320");
void nglApplyMatrix(nglVector &dst, nglMatrix &matrix, nglVector &source) { sceVu0ApplyMatrix(dst, matrix, source); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398558)
// 0x00398558 nglSetViewport__FUiUiUiUi
struct nglScene { char padding[0x410]; unsigned int ViewX1; unsigned int ViewY1; unsigned int ViewX2; unsigned int ViewY2; };
extern nglScene *nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetViewport(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) { nglCurScene->ViewX1 = x1; nglCurScene->ViewY1 = y1; nglCurScene->ViewX2 = x2; nglCurScene->ViewY2 = y2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398638)
// 0x00398638 nglSetFogRange__Fffff
struct nglScene { char padding[0x44c]; float FogNear; float FogFar; float FogMin; float FogMax; };
extern nglScene *nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetFogRange(float near_value, float far_value, float minimum, float maximum) { nglCurScene->FogNear = near_value; nglCurScene->FogFar = far_value; nglCurScene->FogMin = minimum; nglCurScene->FogMax = maximum; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6A98)
// 0x003A6A98 nglSetQuadVPos__FP7nglQuadiff
struct nglQuadVertex { float X; float Y; float U; float V; unsigned int Color; };
struct nglQuad { nglQuadVertex Verts[4]; };
void nglSetQuadVPos(nglQuad *quad, int index, float x, float y) { quad->Verts[index].X = x; quad->Verts[index].Y = y; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6AB8)
// 0x003A6AB8 nglSetQuadVUV__FP7nglQuadiff
struct nglQuadVertex { float X; float Y; float U; float V; unsigned int Color; };
struct nglQuad { nglQuadVertex Verts[4]; };
void nglSetQuadVUV(nglQuad *quad, int index, float u, float v) { quad->Verts[index].U = u; quad->Verts[index].V = v; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AAAB8)
// 0x003AAAB8 nglHostClose__FUi
extern "C" int sceClose(int file);
__asm__(".equ sceClose, 0x003DEC00");
void nglHostClose(unsigned int file) { sceClose(file); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00396D90)
// 0x00396D90 nglVBlankInterrupt__Fi
extern volatile int nglVBlankCount;
__asm__(".equ nglVBlankCount, 0x004BBFBC");
int nglVBlankInterrupt(int parameter) { nglVBlankCount++; __asm__ volatile("sync\n\tei"); return 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003974E8)
// 0x003974E8 nglExit__Fv
extern "C" int DisableIntc(int interrupt);
__asm__(".equ DisableIntc, 0x003DBD60");
void nglExit() { DisableIntc(5); DisableIntc(2); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00397540)
// 0x00397540 nglSetFrameLock__Ff
void nglSetFrameLock(float frames_per_second) { register float value __asm__("$f0") = 60.0f; register char *globals __asm__("$3") = (char *)0x004B0000; __asm__ volatile("" : "+f"(value), "+r"(globals)); value /= frames_per_second; register int divisor __asm__("$4"); __asm__ volatile(".word 0x46000024\n\tmfc1 $4,$f0" : "+f"(value), "=r"(divisor)); register int stored __asm__("$2") = divisor; __asm__ volatile("" : "+r"(stored)); *(int *)(globals - 0xba0) = stored; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A69C0)
// 0x003A69C0 nglSetQuadUV__FP7nglQuadffff
struct nglQuadVertex { float X; float Y; float U; float V; unsigned int Color; };
struct nglQuad { nglQuadVertex Verts[4]; };
void nglSetQuadUV(nglQuad *quad, float u1, float v1, float u2, float v2) { quad->Verts[0].U = u1; quad->Verts[0].V = v1; quad->Verts[1].U = u2; quad->Verts[1].V = v1; quad->Verts[2].U = u1; quad->Verts[2].V = v2; quad->Verts[3].U = u2; quad->Verts[3].V = v2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6A68)
// 0x003A6A68 nglSetQuadRect__FP7nglQuadffff
struct nglQuadVertex { float X; float Y; float U; float V; unsigned int Color; };
struct nglQuad { nglQuadVertex Verts[4]; };
void nglSetQuadRect(nglQuad *quad, float x1, float y1, float x2, float y2) { quad->Verts[0].X = x1; quad->Verts[0].Y = y1; quad->Verts[1].X = x2; quad->Verts[1].Y = y1; quad->Verts[2].X = x1; quad->Verts[2].Y = y2; quad->Verts[3].X = x2; quad->Verts[3].Y = y2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AA9B0)
// 0x003AA9B0 nglSetMeshFlags__FUi
struct nglMesh { unsigned int flags; };
void nglSetMeshFlags(unsigned int flags) { register char *globals __asm__("$3") = (char *)0x004B0000; register unsigned int required __asm__("$6") = 0x400000; __asm__ volatile("" : "+r"(globals), "+r"(required)); register nglMesh *mesh __asm__("$5") = *(nglMesh **)(globals - 0x4850); unsigned int preserved = mesh->flags & 0x1000; preserved |= required; mesh->flags = flags | preserved; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398528)
// 0x00398528 nglSetRenderTarget__FP10nglTextureb
struct nglScene { char padding[0x10]; void *RenderTarget; int Download; };
extern nglScene *nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
struct nglTexture { char padding[0x10]; unsigned long long Flags; };
void nglSetRenderTarget(nglTexture *texture, bool download) { nglCurScene->RenderTarget = texture; nglCurScene->Download = download; texture->Flags |= (1ULL << 36); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039F8B0)
// 0x0039F8B0 nglTim2GetImage__FP10nglTexturei
struct TIM2_PICTUREHEADER { char padding[0x11]; unsigned char MipMapTextures; };
struct nglGsImage { void *Data; char padding[12]; };
struct nglTexture { char padding0[0x18]; TIM2_PICTUREHEADER *ph; char padding1[0x74]; nglGsImage GsImage[1]; };
void *nglTim2GetImage(nglTexture *texture, int mipmap) { if (mipmap < texture->ph->MipMapTextures) return texture->GsImage[mipmap].Data; return 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00397510)
// 0x00397510 nglResetDisplay__Fv
extern "C" int EnableIntc(int interrupt);
__asm__(".equ EnableIntc, 0x003DBDC8");

void _nglSetDisplay();
__asm__(".equ _nglSetDisplay__Fv, 0x00396DB0");

void nglResetDisplay() {
    EnableIntc(5);
    EnableIntc(2);
    _nglSetDisplay();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039A0B8)
// 0x0039A0B8 nglOpenRenderList__FPt4pair2ZP11nglListNodeZUiP11nglListNodeUi
struct nglListNode {
    nglListNode *Next;
    char padding[8];
    unsigned int Hash;
};

struct node_pair {
    nglListNode *first;
    unsigned int second;
};

extern "C" void OpenRenderList(
    node_pair *table,
    nglListNode *list,
    unsigned int size
) __asm__("nglOpenRenderList__FPt4pair2ZP11nglListNodeZUiP11nglListNodeUi");

void OpenRenderList(
    node_pair *table,
    nglListNode *list,
    unsigned int size
) {
    node_pair *entry = table;
    if (!list) {
        return;
    }

loop:
    entry->first = list;
    entry->second = list->Hash;
    list = list->Next;
    __asm__ volatile("nop");
    if (list) {
        ++entry;
        goto loop;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A8C68)
// 0x003A8C68 nglVif1AddBatchSetup__FRPUiUii
void nglVif1AddBatchSetup(
    unsigned int *&packet,
    unsigned int vertex_base,
    int vertex_count
) {
    packet[0] = vertex_base | 0x70010000;
    packet[1] = vertex_count | 0x8000;
    packet += 2;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A9B80)
// 0x003A9B80 nglDestroyMesh__FP7nglMesh
struct nglMesh;

void nglVif1SafeWait();
void nglMemFree(void *memory);
__asm__(".equ nglVif1SafeWait__Fv, 0x00397728");
__asm__(".equ nglMemFree__FPv, 0x00395D50");

void nglDestroyMesh(nglMesh *mesh) {
    nglVif1SafeWait();
    nglMemFree(mesh);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039C750)
// 0x0039C750 nglGetTexture__FRC14nglFixedString
class nglFixedString {};
class nglTexture;

class nglInstanceBank {
public:
    struct Instance {
        char padding[0x20];
        void *Value;
    };

    Instance *Search(const nglFixedString &name);
};

__asm__(".equ Search__15nglInstanceBankRC14nglFixedString, 0x003AC608");

extern nglInstanceBank nglTextureBank;
__asm__(".equ nglTextureBank, 0x004BBFF8");

nglTexture *nglGetTexture(const nglFixedString &fileName)
{
    nglInstanceBank::Instance *instance =
        nglTextureBank.Search(fileName);
    if (!instance)
        return 0;
    return (nglTexture *)instance->Value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A15B8)
// 0x003A15B8 nglGetFirstMeshInFile__FRC14nglFixedString
class nglFixedString;
class nglMesh;

struct nglMeshFile {
    char padding[0x130];
    nglMesh *FirstMesh;
};

class nglInstanceBank {
public:
    struct Instance {
        char padding[0x20];
        void *Value;
    };

    Instance *Search(const nglFixedString &name);
};

__asm__(".equ Search__15nglInstanceBankRC14nglFixedString, 0x003AC608");

extern nglInstanceBank nglMeshFileBank;
__asm__(".equ nglMeshFileBank, 0x004BBFE0");

nglMesh *nglGetFirstMeshInFile(const nglFixedString &fileName)
{
    nglInstanceBank::Instance *instance =
        nglMeshFileBank.Search(fileName);
    if (instance)
        return ((nglMeshFile *)instance->Value)->FirstMesh;
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A57D8)
// 0x003A57D8 nglGetMeshSectionFunction__FUiUi
typedef void (*nglCustomNodeFn)(unsigned int *&, void *);

extern "C" void RenderSimple(unsigned int *&packet, void *data)
    __asm__("nglVif1RenderSimpleBakedMeshSection__FRPUiPv");
extern "C" void RenderFull(unsigned int *&packet, void *data)
    __asm__("nglVif1RenderBakedMeshSection__FRPUiPv");
__asm__(".equ nglVif1RenderSimpleBakedMeshSection__FRPUiPv, 0x003A43D0");
__asm__(".equ nglVif1RenderBakedMeshSection__FRPUiPv, 0x003A35F0");

nglCustomNodeFn nglGetMeshSectionFunction(
    unsigned int materialFlags,
    unsigned int paramFlags
) {
    if (!(materialFlags & 0x102000E4) &&
        !(paramFlags & 0x258F))
        return RenderSimple;
    else
        return RenderFull;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395D50)
// 0x00395D50 nglMemFree__FPv
typedef void (*nglMemFreeCallback)(void *pointer);
struct nglSystemCallbackStruct { char padding[0x14]; nglMemFreeCallback MemFree; };
extern nglSystemCallbackStruct nglSystemCallbacks;
__asm__(".equ nglSystemCallbacks, 0x004BBF98");
extern "C" void free(void *pointer);
__asm__(".equ free, 0x003D0BC8");
void nglMemFree(void *pointer)
{
    if (nglSystemCallbacks.MemFree) {
        nglSystemCallbacks.MemFree(pointer);
        KELLY_DECOMP_COMPILER_BARRIER();
    } else {
        free(pointer);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395DA8)
// 0x00395DA8 nglSetMeshPath__FPCc
extern char nglMeshPath[256];
__asm__(".equ nglMeshPath, 0x004BF058");
extern "C" char *strncpy(char *destination, const char *source, unsigned int count);
__asm__(".equ strncpy, 0x003D4508");
void nglSetMeshPath(const char *path)
{
    strncpy(nglMeshPath, path, sizeof(nglMeshPath));
    nglMeshPath[sizeof(nglMeshPath) - 1] = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395DE0)
// 0x00395DE0 nglSetTexturePath__FPCc
extern char nglTexturePath[256];
__asm__(".equ nglTexturePath, 0x004BF158");
extern "C" char *strncpy(char *destination, const char *source, unsigned int count);
__asm__(".equ strncpy, 0x003D4508");
void nglSetTexturePath(const char *path)
{
    strncpy(nglTexturePath, path, sizeof(nglTexturePath));
    nglTexturePath[sizeof(nglTexturePath) - 1] = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039B298)
// 0x0039B298 nglDistanceToPlane__FRC9nglVectorT0
class nglVector {
    float values[4];
public:
    float operator[](int index) const { return values[index]; }
};
float nglDistanceToPlane(const nglVector &plane, const nglVector &point)
{
    float distance = plane[0] * point[0] + plane[1] * point[1] + plane[2] * point[2] + plane[3];
    return distance;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039C710)
// 0x0039C710 nglAddTextureRef__FP10nglTexture
class nglFixedString {};
struct nglTexture { char padding[0x40]; nglFixedString FileName; };
class nglInstanceBank {
public:
    struct Instance { char padding[0x24]; int RefCount; };
    Instance *Search(const nglFixedString &name);
};
extern nglInstanceBank nglTextureBank;
__asm__(".equ nglTextureBank, 0x004BBFF8");
__asm__(".equ Search__15nglInstanceBankRC14nglFixedString, 0x003AC608");
void nglAddTextureRef(nglTexture *texture)
{
    nglInstanceBank::Instance *instance;
    if ((instance = nglTextureBank.Search(texture->FileName)))
        instance->RefCount++;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00397C90)
// 0x00397C90 nglListAlloc__FUiUi
typedef unsigned int u_int;
extern unsigned char *nglListWorkPos __asm__("nglListWorkPos");
asm(".equ nglListWorkPos, 0x004BB7D0");
void *nglListAlloc(u_int Bytes, u_int Alignment)
{
    register u_int Shifted = 1 << Alignment;
    register u_int WorkPos = (u_int)nglListWorkPos;
    if (WorkPos & (Shifted - 1))
        WorkPos = ((WorkPos >> Alignment) + 1) * Shifted;
    void *Ret = (void *)WorkPos;
    nglListWorkPos = (unsigned char *)(WorkPos + Bytes);
    return Ret;
}
#endif
// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_003A1CA8)
// 0x003A1CA8 nglGetMaterialIdx__FP7nglMeshUi
typedef unsigned int u_int;
struct nglMaterial { char padding[216]; u_int MaterialID; };
struct nglMeshSection { nglMaterial* Material; char padding[60]; };
struct nglMesh { char padding[84]; u_int NSections; nglMeshSection* Sections; };
int nglGetMaterialIdx(nglMesh* Mesh, u_int MaterialID)
{
    u_int i = 0;
    if (Mesh->NSections) {
        nglMeshSection* section = Mesh->Sections;
        do {
            if (section->Material->MaterialID == MaterialID)
                return i;
            i++;
            section++;
        } while (i < Mesh->NSections);
    }
    return -1;
}
#endif
