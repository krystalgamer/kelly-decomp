class PanelGeom { char padding[0x6C]; PanelGeom* children; PanelGeom* next; PanelGeom* parent; public: void cons(); };
void PanelGeom::cons() {
    children = 0;
    next = 0;
    parent = 0;
}
