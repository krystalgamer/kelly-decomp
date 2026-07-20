// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0028CDC8)
// 0x0028CDC8 __3skyR10chunk_fileRC9entity_id15entity_flavor_tUi
class chunk_file;
class entity_id;

extern "C" void EntityCtor(
    void *self,
    chunk_file &file,
    const entity_id &id,
    int flavor,
    unsigned int flags
) __asm__("__6entityR10chunk_fileRC9entity_id15entity_flavor_tUi");

__asm__(".equ __6entityR10chunk_fileRC9entity_id15entity_flavor_tUi, 0x0012AB18");

extern const char sky_vtable[];
__asm__(".equ sky_vtable, 0x004F9730");

struct sky_layout {
    char padding[8];
    const void *vtable;
};

extern "C" void *SkyCtor(
    void *self,
    chunk_file &file,
    const entity_id &id,
    int flavor,
    unsigned int flags
) __asm__("__3skyR10chunk_fileRC9entity_id15entity_flavor_tUi");

void *SkyCtor(
    void *self,
    chunk_file &file,
    const entity_id &id,
    int flavor,
    unsigned int flags
) {
    EntityCtor(self, file, id, flavor, flags);
    ((sky_layout *)self)->vtable = sky_vtable;
    return self;
}
#endif
