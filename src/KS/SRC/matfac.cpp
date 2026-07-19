// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002BD170)
// 0x002BD170 get_anim_length__C7mat_fac
class mat_fac {
public:
    int get_anim_length() const;
};

int mat_fac::get_anim_length() const {
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BD178)
// 0x002BD178 is_translucent__C7mat_fac
class mat_fac { char padding[0x38]; int blend_mode; public: bool is_translucent() const; };
bool mat_fac::is_translucent() const { return blend_mode != 0 && blend_mode != 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BD188)
// 0x002BD188 has_texture__C7mat_fac
class material;

class mat_fac {
    char padding[0x4];
    material* m_pcmat;
public:
    bool has_texture() const;
};

bool mat_fac::has_texture() const {
    return m_pcmat != 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BD198)
// 0x002BD198 get_original_width__C7mat_faci5map_e
enum map_e { MAP_DEFAULT };
struct nglTexture { char padding[8]; unsigned short Width; unsigned short Height; };
class mat_fac { char padding[4]; nglTexture *map; public: int get_original_width(int frame, map_e which) const; };
int mat_fac::get_original_width(int frame, map_e which) const { if (!map) return 0; return map->Width; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BD1B8)
// 0x002BD1B8 get_original_height__C7mat_faci5map_e
enum map_e { MAP_DEFAULT };
struct nglTexture { char padding[8]; unsigned short Width; unsigned short Height; };
class mat_fac { char padding[4]; nglTexture *map; public: int get_original_height(int frame, map_e which) const; };
int mat_fac::get_original_height(int frame, map_e which) const { if (!map) return 0; return map->Height; }
#endif
