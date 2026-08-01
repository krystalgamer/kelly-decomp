// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/HWOSPS2/ps2_rasterize.h"
#include "KS/SRC/pmesh.h"

extern bool llc_available;

int nglGetScreenWidth();
int nglGetScreenHeight();

// 0x001E2768 low_level_console_init__Fv
void low_level_console_init()
{
    llc_available = true;
}

// 0x001E2778 low_level_console_release__Fv
void low_level_console_release()
{
    llc_available = false;
}

// 0x001E27C8 low_level_console_flush__Fv
void low_level_console_flush()
{
}

// 0x001E28D0 send_start__8hw_rastaQ28hw_rasta11poly_type_t
void hw_rasta::send_start(poly_type_t type)
{
    send_type = type;
}

// 0x001E28D8 send_indexed_vertex_list__8hw_rastaRC8vert_bufiPCUsiUi
void hw_rasta::send_indexed_vertex_list(
    const vert_buf &buf,
    int num_verts,
    const unsigned short *indices,
    int num_indices,
    unsigned int flags)
{
}

// 0x001E28E0 send_context__8hw_rastaR14vertex_contextUiG7color32
void hw_rasta::send_context(
    vertex_context &context,
    unsigned int flags,
    color32 color)
{
}

// 0x001E28E8 send_texture__8hw_rastaP10hw_texturei
void hw_rasta::send_texture(hw_texture *texture, int stage)
{
}

// 0x001E28F0 end_scene__8hw_rasta
void hw_rasta::end_scene()
{
}

// 0x001E28F8 get_poly_count__8hw_rasta
int hw_rasta::get_poly_count()
{
    return 0;
}

// 0x001E2920 begin_scene__8hw_rasta
void hw_rasta::begin_scene()
{
}

// 0x001E2998 set_cop__8hw_rastaffff
void hw_rasta::set_cop(float x, float y, float min_z, float max_z)
{
}

// 0x001E29A0 set_fog_color__8hw_rastaRC5color
void hw_rasta::set_fog_color(const color &value)
{
}

// 0x001E29A8 set_fog_dist__8hw_rastaff
void hw_rasta::set_fog_dist(float start_dist, float end_dist)
{
}

// 0x001E2BB8 unlock__8vert_buf
void vert_buf::unlock()
{
    locked = false;
}

// 0x001E2BC8 __16vert_buf_xformed
vert_buf_xformed::vert_buf_xformed()
{
    verts = 0;
    max_size = 0;
    locked = false;
}

// 0x001E2C70 unlock__16vert_buf_xformed
void vert_buf_xformed::unlock()
{
    locked = false;
}

// 0x001E2890 get_screen_width__C8hw_rasta
int hw_rasta::get_screen_width() const
{
    return nglGetScreenWidth();
}

// 0x001E28B0 get_screen_height__C8hw_rasta
int hw_rasta::get_screen_height() const
{
    return nglGetScreenHeight();
}

// 0x001E2A38 __8vert_buf
vert_buf::vert_buf()
{
    verts = 0;
    max_size = 0;
    locked = false;
    optimized = false;
}

// 0x001E2AA0 deconstruct__8vert_buf
void vert_buf::deconstruct()
{
    if (verts) {
        delete[] verts;
        verts = 0;
    }
}

// 0x001E2C30 deconstruct__16vert_buf_xformed
void vert_buf_xformed::deconstruct()
{
    if (verts) {
        delete[] verts;
        verts = 0;
    }
}
