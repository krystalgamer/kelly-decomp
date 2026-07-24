// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0030F440)
#include "KS/SRC/ks/menu_scoring_shared.h"
// 0x0030F440 SaveScoringButton__FP9MenuEntryi
bool SaveScoringButton(MenuEntry *entry, int button_id)
{
    bool file_locked = os_file::is_system_locked();
    if (file_locked)
        os_file::system_unlock();
    SaveScoringSystem();
    if (file_locked)
        os_file::system_lock();
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030F490)
// 0x0030F490 LoadScoringButton__FP9MenuEntryi
extern "C" bool mem_locked() __asm__("mem_malloc_locked__Fv");extern "C" void mem_lock(bool) __asm__("mem_lock_malloc__Fb");extern "C" void load_scoring() __asm__("LoadScoringSystem__Fv");__asm__(".equ mem_malloc_locked__Fv,0x002AC4B8");__asm__(".equ mem_lock_malloc__Fb,0x002AC438");__asm__(".equ LoadScoringSystem__Fv,0x0024A560");extern bool file_locked;__asm__(".equ file_locked,0x0040E3A0");extern "C" bool load_button(void*,int) __asm__("LoadScoringButton__FP9MenuEntryi");bool load_button(void*,int){bool memlocked=mem_locked();bool filelocked=file_locked;mem_lock(false);if(filelocked)file_locked=false;load_scoring();mem_lock(memlocked);if(filelocked)file_locked=true;return true;}
#endif
