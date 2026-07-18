class KeyboardMenu {
    char padding_to_parent[0x64];
    void* parent;
    char padding_to_sl_parent[0x1A4];
    void* sl_parent;
public:
    void Init();
};

void KeyboardMenu::Init() {
    sl_parent = parent;
}
