class KSReplay {
    char padding[0x78];
    bool noDraw;
public:
    bool NoDraw();
};

bool KSReplay::NoDraw() {
    return noDraw;
}
