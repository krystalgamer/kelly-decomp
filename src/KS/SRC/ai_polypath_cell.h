#ifndef AI_POLYPATH_CELL_H
#define AI_POLYPATH_CELL_H

#include "KS/SRC/plane.h"
#include "KS/SRC/render_data.h"
#include "g++-2/stl_vector.h"

class ai_polypath;
class ai_polypath_heap;
class region_node;
class sphere;
class terrain;

class ai_polypath_line {
public:
    enum ePointClassification {
        ON_LINE,
        LEFT_SIDE,
        RIGHT_SIDE
    };
    enum eLineClassification {
        COLLINEAR,
        LINES_INTERSECT,
        SEGMENTS_INTERSECT,
        A_BISECTS_B,
        B_BISECTS_A,
        PARALELL
    };

    vector2d a;
    vector2d b;
    mutable vector2d norm;
    mutable bool norm_calc;
};

class ai_polypath_plane {
public:
    vector3d norm;
    vector3d pt;
    rational_t dist;
};

class ai_polypath_cell {
public:
    enum eCellVert {
        VERT_A,
        VERT_B,
        VERT_C
    };
    enum eCellSide {
        SIDE_AB,
        SIDE_BC,
        SIDE_CA
    };
    enum ePathResult {
        NO_RELATIONSHIP,
        ENDING_CELL,
        EXITING_CELL
    };

    void init(
        const vector3d &a,
        const vector3d &b,
        const vector3d &c);
    void compute_cell_data();
    bool request_link(
        const vector3d &a,
        const vector3d &b,
        ai_polypath_cell *caller);
    bool process_cell(ai_polypath_heap *heap);
    bool query_for_path(
        ai_polypath_heap *heap,
        ai_polypath_cell *caller,
        rational_t arrival_cost);

private:
    friend class ai_polypath;

    ai_polypath_plane m_CellPlane;
    vector3d m_Vertex[3];
    vector3d m_CenterPoint;
    rational_t radius;
    ai_polypath_line m_Side[3];
    ai_polypath_cell *m_Link[3];
    int m_SessionID;
    rational_t m_ArrivalCost;
    rational_t m_Heuristic;
    bool m_Open;
    int m_ArrivalWall;
    vector3d m_WallMidpoint[3];
    rational_t m_WallDistance[3];
    void compute_heuristic(const vector3d &goal);
    char sector_valid;
};

class ai_polypath_node {
public:
    ai_polypath_cell *cell;
    rational_t cost;
};

class ai_polypath_heap {
public:
    typedef vector<ai_polypath_node> CONTAINER;
    greater<ai_polypath_node> comp;
    inline int session_id() const { return sessionID; }

private:
    CONTAINER nodes;
    int sessionID;
    vector3d the_goal;
};

extern "C" int abs(int value);

#endif
