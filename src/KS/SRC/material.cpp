// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003397B0)
// 0x003397B0 send_context__8materiali5map_eUiG7color32
enum map_e { MAP_DIFFUSE };
class color32 { unsigned int value; };

class material {
public:
    void send_context(int frame, map_e map, unsigned int flags, color32 color);
};

void material::send_context(int frame, map_e map, unsigned int flags, color32 color) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003397E0)
// 0x003397E0 flush_last_context__8material
extern void* last_context_material;
__asm__(".equ last_context_material, 0x0046B668");
class material { public: static void flush_last_context(); };
void material::flush_last_context() { last_context_material = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003397F0)
// 0x003397F0 get_flags__C8material
class material {
    char padding[0x100];
    unsigned int mat_flags;
public:
    unsigned int get_flags() const;
};

unsigned int material::get_flags() const {
    return mat_flags;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003397F8)
// 0x003397F8 set_flags__8materialUi
class material {
    char padding[0x100];
    unsigned int mat_flags;
public:
    void set_flags(unsigned int value);
};

void material::set_flags(unsigned int value) {
    mat_flags = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00339CA8)
// 0x00339CA8 get_anim_length__C12anim_texture
class anim_texture {
    char padding[0x8];
    void** frame_begin;
    void** frame_end;

public:
    int get_anim_length() const;
};

int anim_texture::get_anim_length() const {
    return frame_end - frame_begin;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003397B8)
// 0x003397B8 get_anim_length__C8materiali
class anim_texture { char storage[0x30]; public: int get_anim_length() const; };
__asm__(".equ get_anim_length__C12anim_texture, 0x00339CA8");
class material { char padding[0x28]; anim_texture maps[1]; public: int get_anim_length(int map) const; };
int material::get_anim_length(int map) const { int result = maps[map].get_anim_length(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
