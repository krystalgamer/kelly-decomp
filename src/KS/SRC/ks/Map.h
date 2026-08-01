#ifndef MAP_H
#define MAP_H

class PanelQuad;
class PanelQuad4;
class PathData;

class MapData {
public:
    struct MapBeach {
        bool desc_at_right;
        float location[2];
    };

    MapBeach *beaches;
    int *west_east_order;

private:
    int num_paths;
    PathData *paths;
    int max_pqs;
    PanelQuad4 *copy;
    PanelQuad4 *array;
    PathData *chosen_path;

public:
    MapData();
    ~MapData();
    void Load(char *filename, PanelQuad *copy_quad);
    void Reload(PanelQuad *copy_quad);
    bool setPath(int beach_to, int beach_from);
    void DrawPath(float percent);
};

#endif
