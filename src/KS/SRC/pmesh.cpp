// pmesh definitions extracted by generated one-function shims.


// 0x002D6FC0 is_cosmetic__C8vr_pmeshUi
#include "KS/SRC/pmesh.h"

bool vr_pmesh::is_cosmetic(face_ref faceid) const
{
    if (!faces)
        return reduced_faces[faceid].is_cosmetic();
    return faces[faceid].is_cosmetic();
}

// 0x002D6F78 get_surface_type__C8vr_pmeshUi
#include "KS/SRC/pmesh.h"

unsigned char vr_pmesh::get_surface_type(face_ref faceid) const
{
    if (!faces)
        return reduced_faces[faceid].get_surface_type();
    return faces[faceid].get_surface_type();
}

// 0x002D3338 render_instance__8vr_pmeshUiP20instance_render_infoPs
class instance_render_info;

class vr_pmesh {
public:
    void render_instance(unsigned int flavor, instance_render_info* info, short* bones);
};

void vr_pmesh::render_instance(unsigned int flavor, instance_render_info* info, short* bones) {
}

// 0x002D3340 render_skin__8vr_pmeshUiPC20instance_render_infoPC2poi
class instance_render_info;
class po;

class vr_pmesh {
public:
    void render_skin(unsigned int flavor, const instance_render_info* info, const po* bones, int count);
};

void vr_pmesh::render_skin(unsigned int flavor, const instance_render_info* info, const po* bones, int count) {
}

// 0x002D3F98 serial_in__FR10chunk_fileP8vr_pmesh
class chunk_file;
class vr_pmesh { public: void internal_serial_in(chunk_file &file); };
__asm__(".equ internal_serial_in__8vr_pmeshR10chunk_file, 0x002D3FC0");
void serial_in(chunk_file &file, vr_pmesh *mesh) { mesh->internal_serial_in(file); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002D6958 face_material_compare__FPCvT0
struct face { char padding[6]; short material_ref; unsigned short level_of_detail; };
__asm__(".globl face_material_compare__FPCvT0");
static int face_material_compare(const void *left_raw, const void *right_raw) { const face *left = (const face *)left_raw; const face *right = (const face *)right_raw; if (left->material_ref != right->material_ref) return left->material_ref - right->material_ref; return left->level_of_detail - right->level_of_detail; }

// 0x002D6F30 get_wedge_ref__C8vr_pmeshUii
#include "KS/SRC/pmesh.h"

wedge_ref vr_pmesh::get_wedge_ref(face_ref fr,int corner) const { if(!faces) return wedge_index_list[fr*3+corner]; return faces[fr].get_wedge_ref(corner); }
