class FEMenuSystem;

class MCDetectFrontEnd {
    char padding[0x50];
    FEMenuSystem *system;

public:
    void SetSystem(FEMenuSystem *new_system);
};

void MCDetectFrontEnd::SetSystem(FEMenuSystem *new_system) {
    system = new_system;
}
