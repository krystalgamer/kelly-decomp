// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00145988)
#include "KS/SRC/hard_attrib_interface_shared.h"

extern "C" void **hard_attrib_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *hard_attrib_base_type[] __asm__("__ti16entity_interface");
extern "C" void *hard_attrib_type[] __asm__("__ti21hard_attrib_interface");
extern "C" const char hard_attrib_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti21hard_attrib_interface, 0x005A2858");
__asm__(".equ hard_attrib_name, 0x004CEB98");

// 0x00145988 __tf21hard_attrib_interface
extern "C" void **hard_attrib_rtti() __asm__("__tf21hard_attrib_interface");
void **hard_attrib_rtti()
{
    if (!hard_attrib_type[0]) {
        hard_attrib_base_rtti();
        __rtti_si(hard_attrib_type, hard_attrib_name, hard_attrib_base_type);
    }
    return hard_attrib_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00313348)
// 0x00313348 __tf31character_hard_attrib_interface
#include "KS/SRC/rtti_shared.h"
extern "C" void **CharacterHardAttribBaseRtti() __asm__("__tf21hard_attrib_interface");
extern "C" void *character_hard_attrib_type[] __asm__("__ti31character_hard_attrib_interface");
extern "C" const char character_hard_attrib_name[];
extern "C" void *character_hard_attrib_base_type[] __asm__("__ti21hard_attrib_interface");
__asm__(".equ __tf21hard_attrib_interface, 0x00145988");
__asm__(".equ __ti31character_hard_attrib_interface, 0x005A4180");
__asm__(".equ character_hard_attrib_name, 0x005089F0");
__asm__(".equ __ti21hard_attrib_interface, 0x005A2858");
extern "C" void **CharacterHardAttribRtti() __asm__("__tf31character_hard_attrib_interface");
void **CharacterHardAttribRtti()
{
    if (!character_hard_attrib_type[0]) {
        CharacterHardAttribBaseRtti();
        __rtti_si(
            character_hard_attrib_type,
            character_hard_attrib_name,
            character_hard_attrib_base_type
        );
    }
    return character_hard_attrib_type;
}
#endif
