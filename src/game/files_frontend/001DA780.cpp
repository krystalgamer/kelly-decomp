class color32 {
public:
    unsigned int value;
    color32(unsigned int initial = 0) : value(initial) {}
};

struct menu_text {
    char padding[0x48];
    color32 color;
};

class FEMenuEntry {
    char padding[0x24];
    menu_text* text;
public:
    void SetColor(color32 value);
};

void FEMenuEntry::SetColor(color32 value) {
    text->color = value;
}
