class PanelQuad {
    char padding[0x110];
    bool on_menu;

public:
    void AddedToMenu() {
        on_menu = true;
    }
};
class FEGraphicalMenuEntry { char padding[0x68]; PanelQuad* pq_high; public: void SetPQHigh(PanelQuad* value); };
void FEGraphicalMenuEntry::SetPQHigh(PanelQuad* value) {
    pq_high = value;
    value->AddedToMenu();
}
