// pmesh inline definitions extracted by generated one-function shims.


// 0x002FF640 get_min_faces__C8vr_pmeshf
#include "KS/SRC/pmesh.h"

int vr_pmesh::get_min_faces(float delta_t) const {
    return min_faces;
}

// 0x002FF648 get_max_faces__C8vr_pmeshf
#include "KS/SRC/pmesh.h"

int vr_pmesh::get_max_faces(float delta_t) const {
    return num_faces;
}

// 0x002FF650 get_center__C8vr_pmeshf
#include "KS/SRC/pmesh.h"

const vector3d& vr_pmesh::get_center(float delta_t) const {
    return center;
}

// 0x002FF658 get_radius__C8vr_pmeshf
#include "KS/SRC/pmesh.h"

float vr_pmesh::get_radius(float delta_t) const {
    return radius;
}

// 0x002FF660 get_max_detail__C8vr_pmesh
#include "KS/SRC/pmesh.h"

int vr_pmesh::get_max_detail() const {
    return max_detail;
}

// 0x002FF678 get_distance_fade_ok__C8vr_pmesh
#include "KS/SRC/pmesh.h"

bool vr_pmesh::get_distance_fade_ok() const {
    return !has_translucent_verts;
}
