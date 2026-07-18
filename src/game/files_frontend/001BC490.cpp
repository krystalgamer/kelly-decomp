class FEMenuSystem;

class LegalFrontEnd {
    char padding[0x50];
    FEMenuSystem* system;

public:
    void SetSystem(FEMenuSystem* s);
};

void LegalFrontEnd::SetSystem(FEMenuSystem* s) {
    system = s;
}
