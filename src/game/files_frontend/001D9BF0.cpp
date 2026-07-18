class nglTexture;

class PanelQuad {
    char padding[0x7C];
    nglTexture* texture;
public:
    nglTexture* GetTexture();
};

nglTexture* PanelQuad::GetTexture() {
    return texture;
}
