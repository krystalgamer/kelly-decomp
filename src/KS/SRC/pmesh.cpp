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
