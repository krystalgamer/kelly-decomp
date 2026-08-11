// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_003A6AE0)
// 0x003A6AE0 nglRotateQuad__FP7nglQuadfff
#include "NGL/PS2/ngl_ps2.h"

extern "C" float cosf(float value);
extern "C" float sinf(float value);

__asm__(".equ cosf, 0x003C6340");
__asm__(".equ sinf, 0x003C6530");

void nglRotateQuad(
    nglQuad *quad,
    float center_x,
    float center_y,
    float theta)
{
    for (int index = 0; index < 4; index++)
    {
        nglQuadVertex *vertex = &quad->Verts[index];
        float x = vertex->X - center_x;
        float y = vertex->Y - center_y;
        vertex->X =
            x * cosf(theta) -
            y * sinf(theta) +
            center_x;
        vertex->Y =
            y * cosf(theta) +
            x * sinf(theta) +
            center_y;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A7008)
#include "NGL/PS2/ngl_ps2.h"

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
#include "NGL/PS2/ngl_ps2.h"

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

#if defined(KELLY_DECOMP_FUNCTION_003A6BB0)
// 0x003A6BB0 nglScaleQuad__FP7nglQuadffff
#include "NGL/PS2/ngl_ps2.h"

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

// 0x00398578 nglSetClearFlags__FUi
#include "NGL/PS2/ngl_ps2.h"

void nglSetClearFlags(unsigned int value) { nglCurScene->ClearFlags = value; }

// 0x003985F0 nglSetClearZ__Ff
#include "NGL/PS2/ngl_ps2.h"

void nglSetClearZ(float value) { nglCurScene->ClearZ = value; }

// 0x00398600 nglSetFBWriteMask__FUi
#include "NGL/PS2/ngl_ps2.h"

void nglSetFBWriteMask(unsigned int value) { nglCurScene->FBWriteMask = value; }

// 0x00398610 nglSetZWriteEnable__Fb
#include "NGL/PS2/ngl_ps2.h"

void nglSetZWriteEnable(bool value) { nglCurScene->ZWriteEnable = value; }

// 0x00398620 nglSetZTestEnable__Fb
#include "NGL/PS2/ngl_ps2.h"

void nglSetZTestEnable(bool value) { nglCurScene->ZTestEnable = value; }

// 0x00398658 nglSetAnimTime__Ff
#include "NGL/PS2/ngl_ps2.h"

void nglSetAnimTime(float value) { nglCurScene->AnimTime = value; }

// 0x0039F8A0 nglTim2GetClut__FP10nglTexture
#include "NGL/PS2/ngl_ps2.h"

void* nglTim2GetClut(nglTexture* texture) { return (char*)texture->ph + texture->ph->HeaderSize; }

// 0x003A69E8 nglSetQuadColor__FP7nglQuadUi
#include "NGL/PS2/ngl_ps2.h"

void nglSetQuadColor(nglQuad* quad, unsigned int color) {
    quad->Verts[0].Color = color;
    quad->Verts[1].Color = color;
    quad->Verts[2].Color = color;
    quad->Verts[3].Color = color;
}

#if defined(KELLY_DECOMP_FUNCTION_00395D10)
// 0x00395D10 nglMemAlloc__FUiUi
#include "NGL/PS2/ngl_ps2.h"

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
#include "NGL/PS2/ngl_ps2.h"

__asm__(".equ nglVif1RenderScene__FRPUiP8nglScene, 0x0039A4E0");
__asm__(".equ nglVif1SetupScene__FRPUiP8nglSceneb, 0x0039A128");
extern "C" void setup_scene(
    u_int *&packet,
    nglScene *scene,
    bool clear_enabled
) __asm__("nglVif1SetupScene__FRPUiP8nglSceneb");

void nglVif1RenderSceneNode(u_int *&Packet, void *Param)
{
    nglScene *Scene = (nglScene *)Param;
    nglVif1RenderScene(Packet, Scene);
    void (*setup)(u_int *&, nglScene *, bool) = setup_scene;
    setup(Packet, Scene->Parent, false);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6110)
// 0x003A6110 nglVif1StartQuads__FRPUi
#include "NGL/PS2/ngl_ps2.h"

__asm__(".equ nglDmaTagPtr, 0x004BB7E8");
__asm__(".equ nglVif1FlushSPAD__FRPUib, 0x003996B8");
inline void nglDmaStartTag(u_int *&Packet)
{
    nglDmaTagPtr = (unsigned long long *)Packet;
    Packet += 4;
}
void nglVif1StartQuads(u_int *&Packet)
{
    nglVif1FlushSPAD(Packet, true);
    nglDmaStartTag(Packet);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398558)
// 0x00398558 nglSetViewport__FUiUiUiUi
#include "NGL/PS2/ngl_ps2.h"

void nglSetViewport(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) { nglCurScene->ViewX1 = x1; nglCurScene->ViewY1 = y1; nglCurScene->ViewX2 = x2; nglCurScene->ViewY2 = y2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398638)
// 0x00398638 nglSetFogRange__Fffff
#include "NGL/PS2/ngl_ps2.h"

void nglSetFogRange(float near_value, float far_value, float minimum, float maximum) { nglCurScene->FogNear = near_value; nglCurScene->FogFar = far_value; nglCurScene->FogMin = minimum; nglCurScene->FogMax = maximum; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6A98)
// 0x003A6A98 nglSetQuadVPos__FP7nglQuadiff
#include "NGL/PS2/ngl_ps2.h"

void nglSetQuadVPos(nglQuad *quad, int index, float x, float y) { quad->Verts[index].X = x; quad->Verts[index].Y = y; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6AB8)
// 0x003A6AB8 nglSetQuadVUV__FP7nglQuadiff
#include "NGL/PS2/ngl_ps2.h"

void nglSetQuadVUV(nglQuad *quad, int index, float u, float v) { quad->Verts[index].U = u; quad->Verts[index].V = v; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00396D90)
// 0x00396D90 nglVBlankInterrupt__Fi
extern volatile int nglVBlankCount;
__asm__(".equ nglVBlankCount, 0x004BBFBC");
int nglVBlankInterrupt(int parameter) { nglVBlankCount++; __asm__ volatile("sync\n\tei"); return 0; }
#endif

// 0x003974E8 nglExit__Fv
extern "C" int DisableIntc(int interrupt);
void nglExit() { DisableIntc(5); int (*disable)(int) = DisableIntc; disable(2); }

// 0x00397540 nglSetFrameLock__Ff
#include "NGL/PS2/ngl_ps2.h"

void nglSetFrameLock(float frames_per_second) { int *frame_lock = &nglFrameLock; int value = nglFTOI(60.0f / frames_per_second); *frame_lock = value; }

// 0x003A69C0 nglSetQuadUV__FP7nglQuadffff
#include "NGL/PS2/ngl_ps2.h"

void nglSetQuadUV(nglQuad *quad, float u1, float v1, float u2, float v2) { quad->Verts[0].U = u1; quad->Verts[0].V = v1; quad->Verts[1].U = u2; quad->Verts[1].V = v1; quad->Verts[2].U = u1; quad->Verts[2].V = v2; quad->Verts[3].U = u2; quad->Verts[3].V = v2; }

// 0x003A6A68 nglSetQuadRect__FP7nglQuadffff
#include "NGL/PS2/ngl_ps2.h"

void nglSetQuadRect(nglQuad *quad, float x1, float y1, float x2, float y2) { quad->Verts[0].X = x1; quad->Verts[0].Y = y1; quad->Verts[1].X = x2; quad->Verts[1].Y = y1; quad->Verts[2].X = x1; quad->Verts[2].Y = y2; quad->Verts[3].X = x2; quad->Verts[3].Y = y2; }

// 0x003AA9B0 nglSetMeshFlags__FUi
#include "NGL/PS2/ngl_ps2.h"

void nglSetMeshFlags(unsigned int flags) { nglScratch->Flags = flags | NGLMESH_SCRATCH_MESH | (nglScratch->Flags & NGLMESH_TEMP); }

// 0x00398528 nglSetRenderTarget__FP10nglTextureb
#include "NGL/PS2/ngl_ps2.h"

__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetRenderTarget(nglTexture *texture, bool download) { nglCurScene->RenderTarget = texture; nglCurScene->Download = download; texture->Flags |= (1ULL << 36); }

// 0x0039F8B0 nglTim2GetImage__FP10nglTexturei
#include "NGL/PS2/ngl_ps2.h"

void *nglTim2GetImage(nglTexture *texture, int mipmap) { if (mipmap < texture->ph->MipMapTextures) return texture->GsImage[mipmap].Data; return 0; }

// 0x00397510 nglResetDisplay__Fv
extern "C" int EnableIntc(int interrupt);
__asm__(".equ EnableIntc, 0x003DBDC8");

void _nglSetDisplay();
__asm__(".equ _nglSetDisplay__Fv, 0x00396DB0");
void set_display() __asm__("_nglSetDisplay__Fv");

void nglResetDisplay() {
    EnableIntc(5);
    EnableIntc(2);
    void (*reset_display)() = set_display;
    reset_display();
}

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

// 0x003A9B80 nglDestroyMesh__FP7nglMesh
#include "NGL/PS2/ngl_ps2.h"

void nglVif1SafeWait();
void nglMemFree(void *memory);
__asm__(".equ nglVif1SafeWait__Fv, 0x00397728");
__asm__(".equ nglMemFree__FPv, 0x00395D50");
void free_ngl_memory(void *memory) __asm__("nglMemFree__FPv");

void nglDestroyMesh(nglMesh *mesh) {
    nglVif1SafeWait();
    void (*free_mesh)(void *) = free_ngl_memory;
    free_mesh(mesh);
}

#if defined(KELLY_DECOMP_FUNCTION_0039C750)
// 0x0039C750 nglGetTexture__FRC14nglFixedString
#include "NGL/PS2/ngl_ps2.h"

__asm__(".equ Search__15nglInstanceBankRC14nglFixedString, 0x003AC608");
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
#include "NGL/PS2/ngl_ps2.h"

__asm__(".equ Search__15nglInstanceBankRC14nglFixedString, 0x003AC608");

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
#include "NGL/PS2/ngl_ps2.h"

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
#include "NGL/PS2/ngl_ps2.h"

__asm__(".equ nglSystemCallbacks, 0x004BBF98");
extern "C" void free(void *pointer);
__asm__(".equ free, 0x003D0BC8");
void nglMemFree(void *pointer)
{
    if (nglSystemCallbacks.MemFree) {
        nglMemFreeCallback release = nglSystemCallbacks.MemFree;
        release(pointer);
    } else {
        void (*release)(void *) = free;
        release(pointer);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00395DA8)
// 0x00395DA8 nglSetMeshPath__FPCc
#include "NGL/PS2/ngl_ps2.h"

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
#include "NGL/PS2/ngl_ps2.h"

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
#include "NGL/PS2/ngl_ps2.h"

float nglDistanceToPlane(const nglVector &plane, const nglVector &point)
{
    float distance = plane[0] * point[0] + plane[1] * point[1] + plane[2] * point[2] + plane[3];
    return distance;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039C710)
// 0x0039C710 nglAddTextureRef__FP10nglTexture
#include "NGL/PS2/ngl_ps2.h"

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
#include "NGL/PS2/ngl_ps2.h"

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
#include "NGL/PS2/ngl_ps2.h"

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

#if defined(KELLY_DECOMP_FUNCTION_00395CB8)
// 0x00395CB8 nglReleaseFile__FP10nglFileBuf
#include "NGL/PS2/ngl_ps2.h"

extern "C" void *memset(void *memory, int value, unsigned int size);

__asm__(".equ nglSystemCallbacks, 0x004BBF98");
__asm__(".equ memset, 0x003D18D0");

void nglReleaseFile(nglFileBuf *file)
{
    if (nglSystemCallbacks.ReleaseFile)
        nglSystemCallbacks.ReleaseFile(file);
    else
    {
        nglMemFree(file->Buf);
        void *(*clear)(void *, int, unsigned int) = memset;
        clear(file, 0, sizeof(nglFileBuf));
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039C820)
// 0x0039C820 nglReleaseTexture__FP10nglTexture
#include "NGL/PS2/ngl_ps2.h"

__asm__(".equ nglTextureBank, 0x004BBFF8");
__asm__(".equ nglDestroyTexture__FP10nglTexture, 0x0039C878");
void nglReleaseTexture(nglTexture *texture) {
    if (texture->Flags&(1ULL<<35))
        return;
    if (nglTextureBank.Delete(texture->FileName))
        return;
    void (*destroy)(nglTexture *) = nglDestroyTexture;
    destroy(texture);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039BDB8)
// 0x0039BDB8 nglVif1AddTextureStreamEnd__FRPUi
#include "NGL/PS2/ngl_ps2.h"

__asm__(".equ nglLastIntAddr,0x004BC064");
__asm__(".equ nglNVif1IntEntries,0x004BB780");
__asm__(".equ nglVif1IntArray,0x004BB784");
__asm__(".equ nglVif1IntCloseTextureBlock__Fv,0x0039F488");
void nglVif1AddTextureStreamEnd(u_int *&Packet)
{
    nglVif1IntCloseTextureBlock();
    if (nglLastIntAddr) {
        nglVif1IntEntry *Entry;
        Entry = &nglVif1IntArray[nglNVif1IntEntries++];
        if (nglNVif1IntEntries >= 256)
            return;
        Entry->Type = NGLINT_LOADTEXTURE;
        Entry->NTextures = 0;
        Entry->DataSize = 0;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A1550)
// 0x003A1550 nglGetMesh__FRC14nglFixedStringb
#include "NGL/PS2/ngl_ps2.h"

extern const char warning_text[];
__asm__(".equ Search__15nglInstanceBankRC14nglFixedString,0x003AC608");
__asm__(".equ nglWarning__FPCce,0x003AC088");
__asm__(".equ nglMeshBank,0x004BBFC8");
__asm__(".equ warning_text,0x0051E020");
nglMesh *nglGetMesh(const nglFixedString &name, bool warn)
{
    nglInstanceBank::Instance *instance = nglMeshBank.Search(name);
    if (instance)
        return (nglMesh *)instance->Value;
    if (warn)
        nglWarning(warning_text, name.c_str());
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00398668)
// 0x00398668 nglGetProjectionParams__FPfN40
#include "NGL/PS2/ngl_ps2.h"

void nglGetProjectionParams(
    float *hfov,
    float *cx,
    float *cy,
    float *nearz,
    float *farz)
{
    if (hfov)
        *hfov = nglCurScene->HFOV;
    if (cx)
        *cx = nglCurScene->CX;
    if (cy)
        *cy = nglCurScene->CY;
    if (nearz)
        *nearz = nglCurScene->NearZ;
    if (farz)
        *farz = nglCurScene->FarZ;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A0F98)
// 0x003A0F98 nglScreenShot__FPCc
struct texture{char p0[1];};extern texture backbuffer;extern int ScreenCount;extern char Buf[64];extern "C" void save(texture*,const char*) __asm__("nglSaveTexture__FP10nglTexturePCc");extern "C" int sprintf(char*,const char*,...);__asm__(".equ backbuffer,0x004BBE58");__asm__(".equ ScreenCount,0x004BC9B4");__asm__(".equ Buf,0x005AC058");__asm__(".equ nglSaveTexture__FP10nglTexturePCc,0x003A0E78");__asm__(".equ sprintf,0x003D38A8");extern const char format[];__asm__(".equ format,0x0051E010");extern "C" void screenshot(const char*name) __asm__("nglScreenShot__FPCc");void screenshot(const char*name){if(name)save(&backbuffer,name);else{sprintf(Buf,format,ScreenCount++);save(&backbuffer,Buf);}int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A6920)
// 0x003A6920 nglInitQuad__FP7nglQuad
struct Vert{char pad0[8];float U,V;unsigned Color;};struct nglQuad{Vert Verts[4];char pad[4];unsigned MapFlags,BlendMode;char rest[8];};extern "C" void*memset(void*,int,unsigned);__asm__(".equ memset,0x003D18D0");extern "C" void init(nglQuad*q)__asm__("nglInitQuad__FP7nglQuad");void init(nglQuad*q){memset(q,0,sizeof(nglQuad));q->Verts[0].Color=0x80808080;q->Verts[1].Color=0x80808080;q->Verts[2].Color=0x80808080;q->Verts[3].Color=0x80808080;q->Verts[0].U=0.0f;q->Verts[1].U=1.0f;q->Verts[2].U=0.0f;q->Verts[3].U=1.0f;q->Verts[0].V=0.0f;q->Verts[1].V=0.0f;q->Verts[2].V=1.0f;q->Verts[3].V=1.0f;q->MapFlags=0x30002;q->BlendMode=2;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039F660)
// 0x0039F660 nglVif1IntCreateTextureBlock__Fv
struct Entry{int Type;void*GifDMA;int NTextures;int DataSize;};extern int entry_count;extern Entry*entry_array;extern Entry*current_entry;extern unsigned gif_next;extern char gif_pkt[];extern "C" void pk_init(void*,void*)__asm__("sceGifPkInit");extern "C" void pk_reset(void*)__asm__("sceGifPkReset");__asm__(".equ entry_count,0x004BB780");__asm__(".equ entry_array,0x004BB784");__asm__(".equ current_entry,0x004BB790");__asm__(".equ gif_next,0x004BEF30");__asm__(".equ gif_pkt,0x004BEF40");__asm__(".equ sceGifPkInit,0x003BBFC8");__asm__(".equ sceGifPkReset,0x003BBFD8");extern "C" void create()__asm__("nglVif1IntCreateTextureBlock__Fv");void create(){Entry*entry=&entry_array[entry_count++];if(entry_count>=256)return;entry->Type=1;entry->DataSize=0;entry->NTextures=0;current_entry=entry;entry->GifDMA=(void*)gif_next;pk_init(gif_pkt,(void*)(0x30000000u|gif_next));pk_reset(gif_pkt);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A9BB0)
// 0x003A9BB0 nglEditMesh__FP7nglMesh
struct Batch{char d[40];};struct Section{char p[44];Batch*BatchInfo;};struct Mesh{char p[88];Section*Sections;};extern Mesh*nglScratch;extern Section*nglScratchSection;extern Batch nglScratchBatch;extern int nglScratchBatchIdx,nglScratchVertIdx,nglScratchStripVertIdx;extern "C" void*memcpy(void*,const void*,unsigned);__asm__(".equ nglScratch,0x004BB7B0");__asm__(".equ nglScratchSection,0x004BB7B4");__asm__(".equ nglScratchBatch,0x004BCF00");__asm__(".equ nglScratchBatchIdx,0x004BB7B8");__asm__(".equ nglScratchVertIdx,0x004BB7BC");__asm__(".equ nglScratchStripVertIdx,0x004BB7C0");extern "C" void edit(Mesh*)__asm__("nglEditMesh__FP7nglMesh");void edit(Mesh*mesh){nglScratch=mesh;nglScratchSection=nglScratch->Sections;memcpy(&nglScratchBatch,nglScratch->Sections->BatchInfo,40);nglScratchBatchIdx=0;nglScratchVertIdx=0;nglScratchStripVertIdx=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A0008)
// 0x003A0008 nglBlockPSMT8toPSMCT32__FPUcT0
extern int lut[];asm(".equ lut,0x004BC5B0");extern "C" int convert(unsigned char*,unsigned char*) __asm__("nglBlockPSMT8toPSMCT32__FPUcT0");int convert(unsigned char*p_input,unsigned char*p_output){unsigned i,j,k,i0,index0,index1;unsigned char*pIn=p_input;index1=0;for(k=0;k<4;k++){index0=(k%2)*64;for(i=0;i<16;i++){for(j=0;j<4;j++){i0=lut[index0++];p_output[index1++]=pIn[i0];}}pIn+=64;}return 0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A9AE0)
// 0x003A9AE0 nglCloseMesh__Fv
struct nglMesh{unsigned Flags;void*File;nglMesh*NextMesh;unsigned DataSize;};extern unsigned*nglScratchMeshPos;extern nglMesh*nglScratch;extern void*nglMemAlloc(unsigned,unsigned);extern "C" void*memcpy(void*,const void*,unsigned);extern void nglRebaseMesh(unsigned,unsigned,nglMesh*,bool);asm(".equ nglScratchMeshPos,0x004BB7A8");asm(".equ nglScratch,0x004BB7B0");asm(".equ nglMemAlloc__FUiUi,0x00395D10");asm(".equ memcpy,0x003D171C");asm(".equ nglRebaseMesh__FUiUiP7nglMeshb,0x003A1010");nglMesh*nglCloseMesh(){nglScratch->DataSize=(unsigned)nglScratchMeshPos-(unsigned)nglScratch;if(!(nglScratch->Flags&0x1000)){nglScratchMeshPos=(unsigned*)nglScratch;nglMesh*Mesh=(nglMesh*)nglMemAlloc(nglScratch->DataSize,128);memcpy(Mesh,nglScratch,nglScratch->DataSize);nglRebaseMesh((unsigned)Mesh,(unsigned)nglScratch,Mesh,true);return Mesh;}else{nglScratchMeshPos=(unsigned*)(((unsigned)nglScratchMeshPos+127)&~127);return nglScratch;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A11B8)
// 0x003A11B8 nglCalcMaterialHash__FP11nglMaterial
typedef unsigned int u_int;struct nglTexture{char pad0[12];u_int Hash;char pad1[84];u_int GsSize;};struct nglMaterialInfo{u_int Hash;};struct nglMaterial{u_int Flags;nglTexture*Map;nglTexture*LightMap;nglTexture*DetailMap;nglTexture*EnvironmentMap;char pad[216];nglMaterialInfo*Info;};void nglCalcMaterialHash(nglMaterial*Material);void nglCalcMaterialHash(nglMaterial*Material){nglMaterialInfo*Info=Material->Info;if(!Info)return;u_int Size=0;if(Material->Map){Info->Hash=Material->Map->Hash;Size=Material->Map->GsSize;}if(Material->DetailMap&&Material->DetailMap->GsSize>Size){Info->Hash=Material->DetailMap->Hash;Size=Material->DetailMap->GsSize;}if(Material->EnvironmentMap&&Material->EnvironmentMap->GsSize>Size){Info->Hash=Material->EnvironmentMap->Hash;Size=Material->EnvironmentMap->GsSize;}if(Material->LightMap&&Material->LightMap->GsSize>Size){Info->Hash=Material->LightMap->Hash;Size=Material->LightMap->GsSize;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0039B2D0)
// 0x0039B2D0 nglIsSphereVisible__FP10nglFrustumRC9nglVectorf
#include "NGL/PS2/ngl_ps2.h"
#include "decomp_annotations.h"

bool nglIsSphereVisible(
    nglFrustum *frustum,
    const nglVector &center,
    float radius)
{
    radius = -radius;

    if (nglDistanceToPlane(
            frustum->Planes[NGLFRUSTUM_LEFT], center) < radius)
        return false;
    if (nglDistanceToPlane(
            frustum->Planes[NGLFRUSTUM_RIGHT], center) < radius)
        return false;
    if (nglDistanceToPlane(
            frustum->Planes[NGLFRUSTUM_NEAR], center) < radius)
        return false;
    if (nglDistanceToPlane(
            frustum->Planes[NGLFRUSTUM_TOP], center) < radius)
        return false;
    if (nglDistanceToPlane(
            frustum->Planes[NGLFRUSTUM_BOTTOM], center) < radius)
        return false;
    if (nglDistanceToPlane(
            frustum->Planes[NGLFRUSTUM_FAR], center) < radius)
        return false;

    KELLY_DECOMP_COMPILER_BARRIER();
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AA530)
// 0x003AA530 nglMeshSetSphere__FR9nglVectorf
#include "NGL/PS2/ngl_ps2.h"

void nglMeshSetSphere( nglVector& Center, float Radius )
{
  sceVu0CopyVector( nglScratch->SphereCenter, Center );
  nglScratch->SphereRadius = Radius;

  for ( u_int s = 0; s < nglScratch->NSections; ++s)
  {
   sceVu0CopyVector( nglScratch->Sections[s].SphereCenter, Center );
   nglScratch->Sections[s].SphereRadius = Radius;
  }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00397CD0)
// 0x00397CD0 nglListAddNode__FUiPFRPUiPv_vPvP11nglSortInfoPPUc
typedef void (*nglCustomNodeFn)(unsigned int *&, void *);

struct nglSortInfo {
    unsigned int Type;
    unsigned int Hash;
};

struct nglListNode {
    nglListNode *Next;
    unsigned int Type;
    nglSortInfo SortInfo;
    nglCustomNodeFn NodeFn;
    void *NodeData;
};

struct nglScene {
    char padding[1024];
    nglListNode *OpaqueRenderList;
    nglListNode *TransRenderList;
    unsigned int OpaqueListCount;
    unsigned int TransListCount;
};

extern nglScene *nglCurScene;
extern "C" void *nglListAlloc(unsigned int bytes, unsigned int alignment)
    __asm__("nglListAlloc__FUiUi");

__asm__(".equ nglCurScene, 0x004BBD04");
__asm__(".equ nglListAlloc__FUiUi, 0x00397C90");

void nglListAddNode(
    unsigned int type,
    nglCustomNodeFn node_function,
    void *data,
    nglSortInfo *sort_info,
    unsigned char **buffer
)
{
    nglListNode *node;
    if (buffer)
    {
        node = reinterpret_cast<nglListNode *>(*buffer);
        *buffer += sizeof(nglListNode);
    }
    else
    {
        register unsigned int alignment __asm__("$5") = 4;
        __asm__ __volatile__("" : "+r"(alignment));
        node = static_cast<nglListNode *>(
            nglListAlloc(sizeof(nglListNode), alignment)
        );
        if (!node)
            return;
    }

    node->Type = type;
    node->NodeFn = node_function;
    node->NodeData = data;
    node->SortInfo = *sort_info;

    if (sort_info->Type == 0)
    {
        node->Next = nglCurScene->TransRenderList;
        nglCurScene->TransRenderList = node;
        nglCurScene->TransListCount++;
    }
    else
    {
        node->Next = nglCurScene->OpaqueRenderList;
        nglCurScene->OpaqueRenderList = node;
        nglCurScene->OpaqueListCount++;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003A9E60)
// 0x003A9E60 nglMeshCopyVertex__FP16nglMeshBatchInfoiT0i
typedef unsigned int u_int;

struct nglMeshBatchInfo
{
  u_int NVerts;
  u_int* StripData;
  float* PosData;
  float* UVData;
  u_int* ColorData;
  float* NormData;
  float* LightUVData;
  char* BoneCountData;
  unsigned short* BoneIdxData;
  float* BoneWeightData;
};

void nglMeshCopyVertex( nglMeshBatchInfo* DestBatch, int DestIdx, nglMeshBatchInfo* SrcBatch, int SrcIdx )
{
  // Position, normal, UV, color.
  DestBatch->PosData[DestIdx * 3 + 0] = SrcBatch->PosData[SrcIdx * 3 + 0];
  DestBatch->PosData[DestIdx * 3 + 1] = SrcBatch->PosData[SrcIdx * 3 + 1];
  DestBatch->PosData[DestIdx * 3 + 2] = SrcBatch->PosData[SrcIdx * 3 + 2];

  if ( DestBatch->NormData )
  {
    DestBatch->NormData[DestIdx * 3 + 0] = SrcBatch->NormData[SrcIdx * 3 + 0];
    DestBatch->NormData[DestIdx * 3 + 1] = SrcBatch->NormData[SrcIdx * 3 + 1];
    DestBatch->NormData[DestIdx * 3 + 2] = SrcBatch->NormData[SrcIdx * 3 + 2];
  }

  if ( DestBatch->UVData )
  {
    DestBatch->UVData[DestIdx * 2 + 0] = SrcBatch->UVData[SrcIdx * 2 + 0];
    DestBatch->UVData[DestIdx * 2 + 1] = SrcBatch->UVData[SrcIdx * 2 + 1];
  }

  if ( DestBatch->ColorData )
    DestBatch->ColorData[DestIdx] = SrcBatch->ColorData[SrcIdx];

  if ( DestBatch->LightUVData )
  {
    DestBatch->LightUVData[DestIdx * 2 + 0] = SrcBatch->LightUVData[SrcIdx * 2 + 0];
    DestBatch->LightUVData[DestIdx * 2 + 1] = SrcBatch->LightUVData[SrcIdx * 2 + 1];
  }

  if ( DestBatch->BoneCountData )
  {
    DestBatch->BoneCountData[DestIdx] = SrcBatch->BoneCountData[SrcIdx];
    DestBatch->BoneIdxData[DestIdx * 4 + 0] = SrcBatch->BoneIdxData[SrcIdx * 4 + 0];
    DestBatch->BoneIdxData[DestIdx * 4 + 1] = SrcBatch->BoneIdxData[SrcIdx * 4 + 1];
    DestBatch->BoneIdxData[DestIdx * 4 + 2] = SrcBatch->BoneIdxData[SrcIdx * 4 + 2];
    DestBatch->BoneIdxData[DestIdx * 4 + 3] = SrcBatch->BoneIdxData[SrcIdx * 4 + 3];
    DestBatch->BoneWeightData[DestIdx * 4 + 0] = SrcBatch->BoneWeightData[SrcIdx * 4 + 0];
    DestBatch->BoneWeightData[DestIdx * 4 + 1] = SrcBatch->BoneWeightData[SrcIdx * 4 + 1];
    DestBatch->BoneWeightData[DestIdx * 4 + 2] = SrcBatch->BoneWeightData[SrcIdx * 4 + 2];
    DestBatch->BoneWeightData[DestIdx * 4 + 3] = SrcBatch->BoneWeightData[SrcIdx * 4 + 3];
  }

}
#endif
