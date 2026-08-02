// pmesh definitions extracted by generated one-function shims.


// 0x002D3F98 serial_in__FR10chunk_fileP8vr_pmesh
class chunk_file;
class vr_pmesh { public: void internal_serial_in(chunk_file &file); };
__asm__(".equ internal_serial_in__8vr_pmeshR10chunk_file, 0x002D3FC0");
void serial_in(chunk_file &file, vr_pmesh *mesh) { mesh->internal_serial_in(file); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002D6958 face_material_compare__FPCvT0
struct face { char padding[6]; short material_ref; unsigned short level_of_detail; };
__asm__(".globl face_material_compare__FPCvT0");
static int face_material_compare(const void *left_raw, const void *right_raw) { const face *left = (const face *)left_raw; const face *right = (const face *)right_raw; if (left->material_ref != right->material_ref) return left->material_ref - right->material_ref; return left->level_of_detail - right->level_of_detail; }

// Source implementation boundary.
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
