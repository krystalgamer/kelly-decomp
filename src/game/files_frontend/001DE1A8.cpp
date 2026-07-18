class FEMenuSystem;

class PAL60FrontEnd {
    char padding[0x50];
    FEMenuSystem* system;
public:
    void SetSystem(FEMenuSystem* value);
};

void PAL60FrontEnd::SetSystem(FEMenuSystem* value) {
    system = value;
}
