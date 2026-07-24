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

#if defined(KELLY_DECOMP_FUNCTION_00339BF0)
// 0x00339BF0 get_texture__C12anim_texturei
class hw_texture;

class anim_texture {
    char padding[8];
    hw_texture **begin;
    hw_texture **end;

public:
    hw_texture *get_texture(int frame) const;
};

hw_texture *anim_texture::get_texture(int frame) const {
    hw_texture **texture = begin;
    unsigned int count = end - texture;
    frame = (unsigned int)frame % count;
    texture += frame;
    return *texture;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003394C0)
// 0x003394C0 set_defaults__8material
__asm__(".equ __7stringx,0x0034D3E0");__asm__(".equ __as__7stringxRC7stringx,0x0034E0B8");__asm__(".equ _$_7stringx,0x0034D6E0");struct stringx{char data[8];stringx();~stringx();stringx&operator=(const stringx&);};struct material{char pad0[8];stringx texture_filename[4];char pad1[192];float u_anim;unsigned int mat_flags;char pad2[16];float v_anim;void set_defaults();};void material::set_defaults(){for(int i=0;i<4;i++)texture_filename[i]=stringx();mat_flags=0;KELLY_DECOMP_COMPILER_BARRIER();u_anim=0.0f;v_anim=0.0f;}
#endif
