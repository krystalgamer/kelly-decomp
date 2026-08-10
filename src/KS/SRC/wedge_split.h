#ifndef WEDGE_SPLIT_H
#define WEDGE_SPLIT_H

#include "g++-2/stl_vector.h"

typedef unsigned short wedge_ref;
typedef unsigned int face_ref;

class wedge_split {
public:
    wedge_split(const wedge_split &other);

    wedge_ref old_wedge_id;
    wedge_ref new_wedge_id;
    vector<face_ref> faces_for_split;
};

#endif
