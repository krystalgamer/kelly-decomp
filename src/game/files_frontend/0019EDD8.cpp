class NamesMenu {
    char padding_to_parent[0x64];
    void* parent;
    char padding_to_sl_parent[0x108];
    void* sl_parent;
public:
    void Init();
};

void NamesMenu::Init() {
    sl_parent = parent;
}
