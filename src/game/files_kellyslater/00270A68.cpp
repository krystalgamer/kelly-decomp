class Submenu {
    char padding[0x10];
    void* parent;
    void* system;
public:
    void OnMenuClose();
};

void Submenu::OnMenuClose() {
    parent = 0;
    system = 0;
}
