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
