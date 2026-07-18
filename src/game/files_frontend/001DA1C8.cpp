enum PanelGeomKind {
    PanelGeomObjectView = 0x96
};

class PanelObjectModel {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelObjectModel::Kind() const {
    return PanelGeomObjectView;
}
