// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003397E0)
// 0x003397E0 flush_last_context__8material
extern void* last_context_material;
__asm__(".equ last_context_material, 0x0046B668");
class material { public: static void flush_last_context(); };
void material::flush_last_context() { last_context_material = 0; }
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

#if defined(KELLY_DECOMP_FUNCTION_00339800)
// 0x00339800 process_vertex_contexts__8material
struct string_buf{char pad[8];int char_length;};struct stringx{char*chars;string_buf*my_buf;int length()const{return my_buf->char_length;}};struct anim_texture{char data[48];void process_vertex_contexts(unsigned)__asm__("process_vertex_contexts__12anim_textureUi");};__asm__(".equ process_vertex_contexts__12anim_textureUi,0x00339CC0");struct material{stringx material_name;stringx texture_filename[4];anim_texture diffuse_map[4];char pad[24];unsigned mat_flags;void process_vertex_contexts()__asm__("process_vertex_contexts__8material");};void material::process_vertex_contexts(){diffuse_map[0].process_vertex_contexts(mat_flags);for(int i=1;i<4;++i){if(texture_filename[i].length())diffuse_map[i].process_vertex_contexts(mat_flags);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00339728)
// 0x00339728 is_translucent__C8material
struct string_buf{char pad[8];int char_length;};struct stringx{char*chars;string_buf*buf;int length()const{return buf->char_length;}};struct anim_texture{char data[48];bool is_translucent()const;};__asm__(".equ is_translucent__C12anim_texture,0x00339C20");struct material{stringx material_name;stringx texture_filename[4];anim_texture diffuse_map[4];bool texture_exists(int i)const{return texture_filename[i].length()!=0;}};extern "C" bool translucent(const material*self)__asm__("is_translucent__C8material");bool translucent(const material*self){if(self->diffuse_map[0].is_translucent())return true;for(int i=1;i<4;++i)if(self->texture_exists(i)&&self->diffuse_map[i].is_translucent())return true;return false;}
#endif
