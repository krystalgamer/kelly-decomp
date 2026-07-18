struct PanelFile {};

class FrontEnd {
    char padding[0x80];
    PanelFile panel;
public:
    PanelFile* GetPanel();
};

PanelFile* FrontEnd::GetPanel() {
    return &panel;
}
