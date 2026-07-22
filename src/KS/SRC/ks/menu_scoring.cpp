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
