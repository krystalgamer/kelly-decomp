struct nglQuad {};

class PanelQuad {
    char padding[0x1C];
    nglQuad quad;
public:
    nglQuad* getQuad();
};

nglQuad* PanelQuad::getQuad() {
    return &quad;
}
