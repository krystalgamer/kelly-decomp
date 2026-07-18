class PanelQuad {
    char padding[0x110];
    bool on_menu;

public:
    void AddedToMenu() {
        on_menu = true;
    }
};
class FEGraphicalMenuEntry { char padding[0x64]; PanelQuad* pq; public: void SetPQ(PanelQuad* value); };
void FEGraphicalMenuEntry::SetPQ(PanelQuad* value) {
    pq = value;
    value->AddedToMenu();
}
