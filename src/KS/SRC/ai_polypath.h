#ifndef AI_POLYPATH_H
#define AI_POLYPATH_H

#include "KS/SRC/ai_polypath_cell.h"
#include "g++-2/stl_list.h"

class ai_polypath;

class ai_path {
public:
    struct waypoint {
        vector3d pos;
        ai_polypath_cell *cell;
    };

    typedef list<waypoint> WAYPOINT_LIST;
    typedef WAYPOINT_LIST::const_iterator waypoint_ID;

    ai_path() {}
    ~ai_path() {}

private:
    ai_polypath *parent;
    waypoint start_point;
    waypoint end_point;
    waypoint_ID cur_point;
    waypoint_ID next_point;
    vector3d goto_start;
    bool reset;
    WAYPOINT_LIST waypoints;
};

#endif
