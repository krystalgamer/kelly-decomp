#ifndef KELLY_DECOMP_NGL_PS2_SHARED_H
#define KELLY_DECOMP_NGL_PS2_SHARED_H

typedef unsigned int u_int;

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

typedef void (*nglCustomNodeFn)(void *);

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
    char padding[0x40];
    nglFixedString FileName;
};

enum {
    NGLMAP_BILINEAR_FILTER = 0x00000002,
    NGLMAP_CLAMP_U = 0x00000010,
    NGLMAP_CLAMP_V = 0x00000020
};

#ifndef KELLY_DECOMP_NGL_QUAD_DEFINED
#define KELLY_DECOMP_NGL_QUAD_DEFINED
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
#endif

struct nglFont {
    nglTexture *Tex;
    void *GlyphInfo;
};

struct nglInstanceBank {
    bool Delete(const nglFixedString &name);
};

extern nglScene *nglCurScene;
extern nglScene nglDefaultScene;
extern nglInstanceBank nglFontBank;
extern nglMesh *nglScratch;

void nglFatal(const char *format, ...);
void nglMemFree(void *memory);
void nglSetQuadMapFlags(nglQuad *quad, u_int flags);
void nglSetQuadTex(nglQuad *quad, nglTexture *texture);
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
