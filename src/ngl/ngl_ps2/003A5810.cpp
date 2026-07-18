typedef void (*nglCustomNodeFn)(unsigned int*& packet, void* data);

struct nglMeshSection {
    char padding[0x3C];
    nglCustomNodeFn RenderFn;
};

void nglSetSectionRenderer(nglMeshSection* section, nglCustomNodeFn render) {
    section->RenderFn = render;
}
