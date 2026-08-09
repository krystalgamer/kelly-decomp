#ifndef NGL_PS2_H
#define NGL_PS2_H

typedef unsigned int u_int;
typedef void *(*nglMemAllocCallback)(
    u_int size,
    u_int alignment);
typedef void (*nglMemFreeCallback)(void *pointer);

struct nglSystemCallbackStruct {
    char data_before_mem_alloc[0x10];
    nglMemAllocCallback MemAlloc;
    nglMemFreeCallback MemFree;
};

inline int nglFTOI(float input)
{
    register float output;
    __asm__ volatile(
        "cvt.w.s %0, %1"
        : "=f"(output)
        : "f"(input));
    return *(int *)&output;
}

struct nglFileBuf {
    unsigned char *Buf;
    unsigned int Size;
    unsigned int UserData;
};

struct nglTexture;

struct nglScene {
    nglScene *Parent;
    char data_to_render_target[0xC];
    nglTexture *RenderTarget;
    int Download;
    char data_to_viewport[0x3F8];
    u_int ViewX1;
    u_int ViewY1;
    u_int ViewX2;
    u_int ViewY2;
    u_int ClearFlags;
    float ClearZ;
    char data_to_fb_write_mask[0x18];
    u_int FBWriteMask;
    bool ZWriteEnable;
    bool ZTestEnable;
    float FogNear;
    float FogFar;
    float FogMin;
    float FogMax;
    char data_to_anim_time[0x40];
    float AnimTime;
};

struct nglFixedString {
    char data[32];
};

class nglVector {
public:
    float x;
    float y;
    float z;
    float w;

    inline nglVector() {}
    inline nglVector(const nglVector &other)
      : x(other.x), y(other.y), z(other.z), w(other.w)
    {
    }
    inline operator float *() { return &x; }
    inline operator const float *() const { return &x; }
    inline float &operator[](int index) { return (&x)[index]; }
    inline const float &operator[](int index) const {
        return (&x)[index];
    }
} __attribute__((aligned(16)));

class nglMatrix {
public:
    nglVector x;
    nglVector y;
    nglVector z;
    nglVector w;
};

enum {
    NGLFRUSTUM_TOP,
    NGLFRUSTUM_BOTTOM,
    NGLFRUSTUM_LEFT,
    NGLFRUSTUM_RIGHT,
    NGLFRUSTUM_NEAR,
    NGLFRUSTUM_FAR
};

typedef nglVector nglPlane;

struct nglFrustum {
    nglPlane Planes[6];
};

struct nglMaterialInfo;
struct nglMaterial {
    u_int Flags;
    nglTexture *Map;
    nglTexture *LightMap;
    nglTexture *DetailMap;
    nglTexture *EnvironmentMap;
    u_int Pad0;
    nglFixedString MapName;
    int MapBlendMode;
    int MapBlendModeConstant;
    nglFixedString LightMapName;
    int LightMapBlendMode;
    int LightMapBlendModeConstant;
    nglFixedString DetailMapName;
    int DetailMapBlendMode;
    int DetailMapBlendModeConstant;
    float DetailMapUScale;
    float DetailMapVScale;
    float DetailMapRange;
    float DetailMapAlphaClamp;
    nglFixedString EnvironmentMapName;
    int EnvironmentMapBlendMode;
    int EnvironmentMapBlendModeConstant;
    u_int SpecularColor;
    float SpecularPower;
    float SpecularIntensity;
    u_int Color;
    u_int MaterialID;
    float AlphaFalloff;
    float ForcedSortDistance;
    float ScrollU;
    float ScrollV;
    nglMaterialInfo *Info;
    float MapMipRatio;
    float LightMapMipRatio;
    u_int UserFlags;
    u_int Pad[2];
} __attribute__((aligned(8)));
struct nglMesh;
struct nglMeshFile {
    char data_to_first_mesh[0x130];
    nglMesh *FirstMesh;
};
struct nglMeshLODInfo;
struct nglMeshBatchInfo;
struct nglQuad;

typedef void (*nglCustomNodeFn)(
    unsigned int *&packet,
    void *data);

struct nglMeshSection {
    nglMaterial *Material;
    u_int NVerts;
    u_int NStrips;
    float SphereRadius;
    nglVector SphereCenter;
    u_int NBones;
    nglMatrix *Bones;
    u_int NBatches;
    nglMeshBatchInfo *BatchInfo;
    u_int *BatchDMA;
    u_int BatchQWC;
    u_int BatchBufSize;
    nglCustomNodeFn RenderFn;
};

struct nglMesh {
    u_int Flags;
    nglMeshFile *File;
    nglMesh *NextMesh;
    u_int DataSize;
    nglFixedString Name;
    nglVector SphereCenter;
    float SphereRadius;
    u_int NLODs;
    nglMeshLODInfo *LODs;
    u_int NBones;
    nglMatrix *Bones;
    u_int NSections;
    nglMeshSection *Sections;
    u_int Pad;
};

struct TIM2_PICTUREHEADER {
    char data_to_header_size[0xC];
    unsigned short HeaderSize;
    char data_to_mipmap_textures[3];
    unsigned char MipMapTextures;
};

struct nglGsImage {
    void *Data;
    char padding[12];
};

struct nglTexture {
    char texture_stream_position[8];
    unsigned short Width;
    unsigned short Height;
    unsigned int Hash;
    unsigned long long Flags;
    struct TIM2_PICTUREHEADER *ph;
    unsigned int Format;
    unsigned int *Data;
    unsigned int NFrames;
    nglTexture **Frames;
    unsigned int SrcDataSize;
    nglFileBuf FileBuf;
    char alignment_before_file_name[4];
    nglFixedString FileName;
    char remaining_data[0x30];
    nglGsImage GsImage[10];
} __attribute__((aligned(16)));

void nglRelockAllTexturesPS2();
void nglExportTextureTGA(
    nglTexture *texture,
    const char *filename);
void nglSetSectionRenderer(
    nglMeshSection *section,
    nglCustomNodeFn renderer);
void nglSetQuadTex(
    nglQuad *quad,
    nglTexture *texture);
void nglSetQuadMapFlags(
    nglQuad *quad,
    unsigned int flags);
void nglSetQuadZ(
    nglQuad *quad,
    float value);

enum {
    NGLMAP_BILINEAR_FILTER = 0x00000002,
    NGLMAP_CLAMP_U = 0x00000010,
    NGLMAP_CLAMP_V = 0x00000020,
    NGLMESH_TEMP = 0x00001000,
    NGLMESH_SCRATCH_MESH = 0x00400000
};

struct nglQuadVertex {
    float X;
    float Y;
    float U;
    float V;
    u_int Color;
};

struct nglQuad {
    nglQuadVertex Verts[4];
    float Z;
    u_int MapFlags;
    u_int BlendMode;
    u_int BlendModeConstant;
    nglTexture *Tex;
};

struct nglFont {
    nglTexture *Tex;
    void *GlyphInfo;
};

class nglInstanceBank {
public:
    struct Instance {
        nglFixedString Key;
        void *Value;
        int RefCount;
        Instance *Forward[1];
    };

    typedef void *(*InstanceAlloc)(
        unsigned int size,
        unsigned int alignment);
    typedef void (*InstanceFree)(void *pointer);

    static InstanceAlloc SetAllocFunc(InstanceAlloc allocator);
    static InstanceFree SetFreeFunc(InstanceFree allocator);
    static InstanceAlloc AllocFunc;
    static InstanceFree FreeFunc;

    Instance *NIL;
    Instance *Head;
    int RandomsLeft;
    int RandomBits;
    int Level;

    nglInstanceBank();
    Instance *NewNodeOfLevel(int level);
    Instance *Search(const nglFixedString &name);
    bool Delete(const nglFixedString &name);
};

extern nglScene *nglCurScene;
extern nglScene nglDefaultScene;
extern nglSystemCallbackStruct nglSystemCallbacks;
extern nglInstanceBank nglFontBank;
extern nglInstanceBank nglTextureBank;
extern nglInstanceBank nglMeshFileBank;
extern nglMesh *nglScratch;
extern int nglFrameLock;
extern int nglDisplayWidth;
extern int nglDisplayHeight;
extern char nglMeshPath[256];
extern char nglTexturePath[256];
extern bool nglUsingProView;
extern u_int nglTVMode;
extern nglTexture nglFrontBufferTex;
extern nglTexture nglBackBufferTex;
extern float nglIFLSpeed;
extern u_int nglScratchStripVertIdx;
extern unsigned char *nglListWorkPos;
extern unsigned long long *nglDmaTagPtr;

void nglFatal(const char *format, ...);
void nglExit();
void nglSetFrameLock(float frames_per_second);
void nglSetQuadUV(
    nglQuad *quad,
    float u1, float v1,
    float u2, float v2);
void nglSetQuadRect(
    nglQuad *quad,
    float x1, float y1,
    float x2, float y2);
void nglSetMeshFlags(u_int flags);
void nglMemFree(void *memory);
void nglSetMeshPath(const char *path);
void nglSetTexturePath(const char *path);
void nglAddTextureRef(nglTexture *texture);
int nglGetScreenWidth();
int nglGetScreenHeight();
const char *nglGetMeshPath();
const char *nglGetTexturePath();
void nglSetProViewPS2(bool using_pro_view);
u_int nglGetTVMode();
nglTexture *nglGetFrontBufferTex();
nglTexture *nglGetBackBufferTex();
void nglSetIFLSpeed(float frames_per_second);
void nglSetClearFlags(u_int flags);
void nglSetClearZ(float value);
void nglSetFBWriteMask(u_int mask);
void nglSetZWriteEnable(bool enabled);
void nglSetZTestEnable(bool enabled);
void nglSetAnimTime(float time);
void *nglTim2GetClut(nglTexture *texture);
void nglSetQuadMapFlags(nglQuad *quad, u_int flags);
void nglSetQuadTex(nglQuad *quad, nglTexture *texture);
void nglSetQuadBlend(
    nglQuad *quad,
    u_int blend,
    u_int constant);
void nglSetQuadColor(nglQuad *quad, u_int color);
void nglMeshWriteStrip(u_int length);
void *nglListAlloc(u_int bytes, u_int alignment);
void nglVif1RenderScene(u_int *&packet, nglScene *scene);
void nglVif1SetupScene(
    u_int *&packet,
    nglScene *scene,
    bool clear_enabled);
void nglVif1FlushSPAD(u_int *&packet, bool force);
float nglDistanceToPlane(
    const nglVector &plane,
    const nglVector &point);
extern "C" void sceVu0CopyVector(float *destination, const float *source);

extern const char ngl_scene_stack_underflow[];

__asm__(".equ nglCurScene, 0x004BBD04");
__asm__(".equ nglDefaultScene, 0x004BB850");
__asm__(".equ ngl_scene_stack_underflow, 0x0051D7F8");
__asm__(".equ nglFatal__FPCce, 0x003AC0C0");
__asm__(".equ nglFontBank, 0x004BC010");
__asm__(".equ nglScratch, 0x004BB7B0");
__asm__(".equ Delete__15nglInstanceBankRC14nglFixedString, 0x003AC440");
#if !defined(KELLY_DECOMP_FUNCTION_00395D50)
__asm__(".equ nglMemFree__FPv, 0x00395D50");
#endif
#if !defined(KELLY_DECOMP_FUNCTION_0039B298)
__asm__(
    ".equ nglDistanceToPlane__FRC9nglVectorT0, "
    "0x0039B298");
#endif
__asm__(".equ sceVu0CopyVector, 0x003BC4F0");

#endif
