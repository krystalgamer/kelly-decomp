#include "NGL/PS2/ngl_ps2.h"

// 0x00395D88 nglGetScreenWidth__Fv
int nglGetScreenWidth()
{
    return nglDisplayWidth;
}

// 0x00395D98 nglGetScreenHeight__Fv
int nglGetScreenHeight()
{
    return nglDisplayHeight;
}

// 0x00395E18 nglGetMeshPath__Fv
const char *nglGetMeshPath()
{
    return nglMeshPath;
}

// 0x00395E28 nglGetTexturePath__Fv
const char *nglGetTexturePath()
{
    return nglTexturePath;
}

// 0x00395E38 nglSetProViewPS2__Fb
void nglSetProViewPS2(bool using_pro_view)
{
    nglUsingProView = using_pro_view;
}

// 0x00395EF0 nglGetTVMode__Fv
u_int nglGetTVMode()
{
    return nglTVMode;
}

// 0x003969F8 nglGetFrontBufferTex__Fv
nglTexture *nglGetFrontBufferTex()
{
    return &nglFrontBufferTex;
}

// 0x00396A08 nglGetBackBufferTex__Fv
nglTexture *nglGetBackBufferTex()
{
    return &nglBackBufferTex;
}

// 0x00397568 nglSetIFLSpeed__Ff
void nglSetIFLSpeed(float frames_per_second)
{
    nglIFLSpeed = frames_per_second;
}

// 0x003A0E70 nglExportTextureTGA__FP10nglTexturePCc
void nglExportTextureTGA(
    nglTexture *texture,
    const char *filename)
{
}

// 0x003A5810 nglSetSectionRenderer__FP14nglMeshSectionPFRPUiPv_v
void nglSetSectionRenderer(
    nglMeshSection *section,
    nglCustomNodeFn renderer)
{
    section->RenderFn = renderer;
}

// 0x003A69A0 nglSetQuadTex__FP7nglQuadP10nglTexture
void nglSetQuadTex(
    nglQuad *quad,
    nglTexture *texture)
{
    quad->Tex = texture;
}

// 0x003A69A8 nglSetQuadMapFlags__FP7nglQuadUi
void nglSetQuadMapFlags(
    nglQuad *quad,
    unsigned int flags)
{
    quad->MapFlags = flags;
}

// 0x003A69B0 nglSetQuadBlend__FP7nglQuadUiUi
void nglSetQuadBlend(
    nglQuad *quad,
    unsigned int blend,
    unsigned int constant)
{
    quad->BlendMode = blend;
    quad->BlendModeConstant = constant;
}

// 0x003A6A90 nglSetQuadZ__FP7nglQuadf
void nglSetQuadZ(
    nglQuad *quad,
    float value)
{
    quad->Z = value;
}

// 0x003AA1A8 nglMeshWriteStrip__FUi
void nglMeshWriteStrip(unsigned int length)
{
    nglScratchStripVertIdx = 0;
}
