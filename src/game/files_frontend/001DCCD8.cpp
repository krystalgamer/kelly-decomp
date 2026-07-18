class BeachFrontEnd {
    char padding[0xF20];
    bool exitingWithoutSelect;
public:
    void OnUnactivate();
};

void BeachFrontEnd::OnUnactivate() {
    exitingWithoutSelect = false;
}
