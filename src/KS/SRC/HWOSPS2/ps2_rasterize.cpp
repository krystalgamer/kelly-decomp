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
int hw_rasta::get_screen_width() const { int result = nglGetScreenWidth(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E28B0)
// 0x001E28B0 get_screen_height__C8hw_rasta
int nglGetScreenHeight();
__asm__(".equ nglGetScreenHeight__Fv, 0x00395D98");
class hw_rasta { public: int get_screen_height() const; };
int hw_rasta::get_screen_height() const { int result = nglGetScreenHeight(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2900)
// 0x001E2900 flip__8hw_rasta
void nglFlip();
__asm__(".equ nglFlip__Fv, 0x003979E0");
class hw_rasta { public: void flip(); };
void hw_rasta::flip() { nglFlip(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2A38)
// 0x001E2A38 __8vert_buf
class ref { int count; public: ref() : count(0) {} };
class vert_buf : public ref { void *verts; int max_size; bool locked; bool optimized; public: vert_buf(); };
vert_buf::vert_buf() { verts = 0; max_size = 0; locked = false; optimized = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2A10)
// 0x001E2A10 _$_14vertex_context
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void VertexContextDtor(void *self, int deleting) __asm__("_$_14vertex_context");
void VertexContextDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2AA0)
// 0x001E2AA0 deconstruct__8vert_buf
struct hw_rasta_vert {
};

__asm__(".equ __builtin_vec_delete, 0x002AC6D0");

class vert_buf {
    char padding[4];
    hw_rasta_vert *verts;

public:
    void deconstruct();
};

void vert_buf::deconstruct()
{
    if (verts) {
        delete[] verts;
        verts = 0;
    }
}
#endif
