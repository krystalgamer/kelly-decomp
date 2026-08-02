#ifndef NGL_PS2_H
#define NGL_PS2_H

typedef unsigned int u_int;

struct nglFileBuf {
    unsigned char *Buf;
    unsigned int Size;
    unsigned int UserData;
};

struct nglScene {
    nglScene *Parent;
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

struct nglMaterial;
struct nglMeshFile;
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

struct nglTexture {
    char texture_stream_position[8];
    unsigned short Width;
    unsigned short Height;
    unsigned int Hash;
    unsigned char Type;
    unsigned char TW;
    unsigned char TH;
    unsigned char flag_padding;
    struct {
        unsigned int LoadedInPlace : 1;
        unsigned int Locked : 1;
        unsigned int VRAMOnly : 1;
        unsigned int System : 1;
        unsigned int RenderTarget : 1;
    } Flags;
    char data_to_file_name[0x40 - 0x18];
    nglFixedString FileName;
    char remaining_data[0x130 - 0x60];
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
    NGLMAP_CLAMP_V = 0x00000020
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

    Instance *NIL;
    Instance *Head;
    int RandomsLeft;
    int RandomBits;
    int Level;

    nglInstanceBank();
    bool Delete(const nglFixedString &name);
};

extern nglScene *nglCurScene;
extern nglScene nglDefaultScene;
extern nglInstanceBank nglFontBank;
extern nglMesh *nglScratch;
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

void nglFatal(const char *format, ...);
void nglMemFree(void *memory);
int nglGetScreenWidth();
int nglGetScreenHeight();
const char *nglGetMeshPath();
const char *nglGetTexturePath();
void nglSetProViewPS2(bool using_pro_view);
u_int nglGetTVMode();
nglTexture *nglGetFrontBufferTex();
nglTexture *nglGetBackBufferTex();
void nglSetIFLSpeed(float frames_per_second);
void nglSetQuadMapFlags(nglQuad *quad, u_int flags);
void nglSetQuadTex(nglQuad *quad, nglTexture *texture);
void nglSetQuadBlend(
    nglQuad *quad,
    u_int blend,
    u_int constant);
void nglMeshWriteStrip(u_int length);
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
__asm__(".equ nglMemFree__FPv, 0x00395D50");
__asm__(
    ".equ nglDistanceToPlane__FRC9nglVectorT0, "
    "0x0039B298");
__asm__(".equ sceVu0CopyVector, 0x003BC4F0");

#endif
