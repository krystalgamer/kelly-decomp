#include "NGL/PS2/ngl_ps2.h"

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

// 0x003A6A90 nglSetQuadZ__FP7nglQuadf
void nglSetQuadZ(
    nglQuad *quad,
    float value)
{
    quad->Z = value;
}
