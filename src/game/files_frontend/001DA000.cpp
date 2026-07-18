enum PanelGeomKind {
    PanelGeomText = 0x94
};

class PanelText {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelText::Kind() const {
    return PanelGeomText;
}
