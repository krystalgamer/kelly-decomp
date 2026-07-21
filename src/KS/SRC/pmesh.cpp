// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002D3338)
// 0x002D3338 render_instance__8vr_pmeshUiP20instance_render_infoPs
class instance_render_info;

class vr_pmesh {
public:
    void render_instance(unsigned int flavor, instance_render_info* info, short* bones);
};

void vr_pmesh::render_instance(unsigned int flavor, instance_render_info* info, short* bones) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D3340)
// 0x002D3340 render_skin__8vr_pmeshUiPC20instance_render_infoPC2poi
class instance_render_info;
class po;

class vr_pmesh {
public:
    void render_skin(unsigned int flavor, const instance_render_info* info, const po* bones, int count);
};

void vr_pmesh::render_skin(unsigned int flavor, const instance_render_info* info, const po* bones, int count) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D3F98)
// 0x002D3F98 serial_in__FR10chunk_fileP8vr_pmesh
class chunk_file;
class vr_pmesh { public: void internal_serial_in(chunk_file &file); };
__asm__(".equ internal_serial_in__8vr_pmeshR10chunk_file, 0x002D3FC0");
void serial_in(chunk_file &file, vr_pmesh *mesh) { mesh->internal_serial_in(file); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D6958)
// 0x002D6958 face_material_compare__FPCvT0
struct face { char padding[6]; short material_ref; unsigned short level_of_detail; };
__asm__(".globl face_material_compare__FPCvT0");
static int face_material_compare(const void *left_raw, const void *right_raw) { const face *left = (const face *)left_raw; const face *right = (const face *)right_raw; if (left->material_ref != right->material_ref) return left->material_ref - right->material_ref; return left->level_of_detail - right->level_of_detail; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D6F30)
// 0x002D6F30 get_wedge_ref__C8vr_pmeshUii
typedef unsigned int face_ref; typedef unsigned short wedge_ref; struct face { wedge_ref wedge[3]; char pad[6]; wedge_ref get_wedge_ref(int c) const{return wedge[c];} };
class vr_pmesh { public: char p0[0x2c]; face *faces; char p1[0x18]; wedge_ref *wedge_index_list; wedge_ref get_wedge_ref(face_ref,int) const; };
wedge_ref vr_pmesh::get_wedge_ref(face_ref fr,int corner) const { if(!faces) return wedge_index_list[fr*3+corner]; return faces[fr].get_wedge_ref(corner); }
#endif
