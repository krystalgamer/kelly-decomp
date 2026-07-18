class FEMenuEntry {
    char padding[0x14];
    bool disabled;
public:
    bool GetDisable();
};

bool FEMenuEntry::GetDisable() {
    return disabled;
}
