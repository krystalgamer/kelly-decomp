enum PanelGeomKind {
    PanelGeomSkater = 0x95
};

class PanelSkaterModel {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelSkaterModel::Kind() const {
    return PanelGeomSkater;
}
