class FEMenuEntry {
    char padding[0x40];
    bool no_flash;
public:
    void SetNoFlash(bool value);
};

void FEMenuEntry::SetNoFlash(bool value) {
    no_flash = value;
}
