#include "KS/SRC/pmesh.h"

// 0x002D3338 render_instance__8vr_pmeshUiP20instance_render_infoPs
void vr_pmesh::render_instance(
    unsigned int flavor,
    instance_render_info *info,
    short *bones)
{
}

// 0x002D6F30 get_wedge_ref__C8vr_pmeshUii
wedge_ref vr_pmesh::get_wedge_ref(face_ref face_id, int corner) const
{
    if (!faces)
        return wedge_index_list[face_id * 3 + corner];
    return faces[face_id].get_wedge_ref(corner);
}

// 0x002D6F78 get_surface_type__C8vr_pmeshUi
unsigned char vr_pmesh::get_surface_type(face_ref face_id) const
{
    if (!faces)
        return reduced_faces[face_id].get_surface_type();
    return faces[face_id].get_surface_type();
}

// 0x002D6FC0 is_cosmetic__C8vr_pmeshUi
bool vr_pmesh::is_cosmetic(face_ref face_id) const
{
    if (!faces)
        return reduced_faces[face_id].is_cosmetic();
    return faces[face_id].is_cosmetic();
}
