enum PanelGeomKind {
    PanelGeomMovie = 0x97
};

class PanelMovie {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelMovie::Kind() const {
    return PanelGeomMovie;
}
