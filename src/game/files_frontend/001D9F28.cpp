enum PanelGeomKind {
    PanelGeomObject = 0x91
};

class PanelObject {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelObject::Kind() const {
    return PanelGeomObject;
}
