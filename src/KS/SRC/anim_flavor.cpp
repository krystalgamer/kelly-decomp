// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00113290)
// 0x00113290 to_anim_track_flavor_t__FRC12chunk_flavor
struct chunk_flavor { char data[16]; };
extern chunk_flavor anim_track_flavors[];
extern "C" bool equal_flavor(const chunk_flavor *, const chunk_flavor *) __asm__("__eq__C12chunk_flavorRC12chunk_flavor");
__asm__(".equ anim_track_flavors,0x003E5678");
__asm__(".equ __eq__C12chunk_flavorRC12chunk_flavor,0x00336B60");
extern "C" int to_anim_track_flavor(const chunk_flavor *flavor) __asm__("to_anim_track_flavor_t__FRC12chunk_flavor");
int to_anim_track_flavor(const chunk_flavor *flavor)
{
    for (int i=0;i<11;++i)
        if (equal_flavor(flavor, &anim_track_flavors[i]))
            return i;
    return -1;
}
#endif
