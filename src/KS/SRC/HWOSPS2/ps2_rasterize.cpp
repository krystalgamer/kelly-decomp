// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E2768)
// 0x001E2768 low_level_console_init__Fv
extern bool llc_available;
__asm__(".equ llc_available, 0x0040E420");
void low_level_console_init() { llc_available = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2778)
// 0x001E2778 low_level_console_release__Fv
extern bool llc_available;
__asm__(".equ llc_available, 0x0040E420");

void low_level_console_release() {
    llc_available = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E27C8)
// 0x001E27C8 low_level_console_flush__Fv
void low_level_console_flush() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E28D0)
// 0x001E28D0 send_start__8hw_rastaQ28hw_rasta11poly_type_t
class hw_rasta {
public:
    enum poly_type_t {
        PT_NONE
    };

private:
    char padding[0x8];
    poly_type_t send_type;

public:
    void send_start(poly_type_t type);
};

void hw_rasta::send_start(poly_type_t type) {
    send_type = type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E28D8)
// 0x001E28D8 send_indexed_vertex_list__8hw_rastaRC8vert_bufiPCUsiUi
class vert_buf;

class hw_rasta {
public:
    void send_indexed_vertex_list(const vert_buf& buf, int num_verts, const unsigned short* indices, int num_indices, unsigned int flags);
};

void hw_rasta::send_indexed_vertex_list(const vert_buf& buf, int num_verts, const unsigned short* indices, int num_indices, unsigned int flags) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E28E0)
// 0x001E28E0 send_context__8hw_rastaR14vertex_contextUiG7color32
class vertex_context;

class color32 {
    unsigned int value;
};

class hw_rasta {
public:
    void send_context(vertex_context& context, unsigned int flags, color32 color);
};

void hw_rasta::send_context(vertex_context& context, unsigned int flags, color32 color) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E28E8)
// 0x001E28E8 send_texture__8hw_rastaP10hw_texturei
class hw_texture;

class hw_rasta {
public:
    void send_texture(hw_texture* texture, int stage);
};

void hw_rasta::send_texture(hw_texture* texture, int stage) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E28F0)
// 0x001E28F0 end_scene__8hw_rasta
class hw_rasta {
public:
    void end_scene();
};

void hw_rasta::end_scene() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E28F8)
// 0x001E28F8 get_poly_count__8hw_rasta
class hw_rasta {
public:
    int get_poly_count();
};

int hw_rasta::get_poly_count() {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2920)
// 0x001E2920 begin_scene__8hw_rasta
class hw_rasta {
public:
    void begin_scene();
};

void hw_rasta::begin_scene() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2998)
// 0x001E2998 set_cop__8hw_rastaffff
class hw_rasta {
public:
    void set_cop(float x, float y, float min_z, float max_z);
};

void hw_rasta::set_cop(float x, float y, float min_z, float max_z) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E29A0)
// 0x001E29A0 set_fog_color__8hw_rastaRC5color
class color;

class hw_rasta {
public:
    void set_fog_color(const color& value);
};

void hw_rasta::set_fog_color(const color& value) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E29A8)
// 0x001E29A8 set_fog_dist__8hw_rastaff
class hw_rasta {
public:
    void set_fog_dist(float start_dist, float end_dist);
};

void hw_rasta::set_fog_dist(float start_dist, float end_dist) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2BB8)
// 0x001E2BB8 unlock__8vert_buf
class vert_buf {
    char padding[0xC];
    bool locked;
public:
    void unlock();
};

void vert_buf::unlock() {
    locked = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2BC8)
// 0x001E2BC8 __16vert_buf_xformed
class vert_buf_xformed { void* verts; int max_size; bool locked; bool reserved; public: vert_buf_xformed(); };
vert_buf_xformed::vert_buf_xformed() { verts = 0; max_size = 0; locked = false; reserved = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2C70)
// 0x001E2C70 unlock__16vert_buf_xformed
class vert_buf_xformed {
    char padding[0xC];
    bool locked;
public:
    void unlock();
};

void vert_buf_xformed::unlock() {
    locked = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2890)
// 0x001E2890 get_screen_width__C8hw_rasta
int nglGetScreenWidth();
__asm__(".equ nglGetScreenWidth__Fv, 0x00395D88");
class hw_rasta { public: int get_screen_width() const; };
int hw_rasta::get_screen_width() const { int result = nglGetScreenWidth(); __asm__ volatile(""); return result; }
#endif
