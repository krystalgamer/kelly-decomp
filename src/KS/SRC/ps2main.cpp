// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/kshooks.h"
#include "KS/SRC/osfile.h"
#include "KS/SRC/wds.h"
#include "NGL/PS2/ngl_ps2.h"

void *arch_memalign(
    unsigned int alignment,
    unsigned int size,
    const char *file,
    int line);
void onscreenerror(const char *text, ...);
void error(const char *text, ...);

// 0x001E30C0 KSHeapError__FPCc
void KSHeapError(const char *text)
{
    onscreenerror(text);
    error(text);
    for (;;) {
    }
}

// 0x001E3168 KSMemAllocate__FUiUiPCci
void *KSMemAllocate(
    unsigned int size,
    unsigned int alignment,
    const char *file,
    int line)
{
    return arch_memalign(alignment, size, file, line);
}

// 0x001E32A0 KSReadFile__FPCcP10nglFileBufUi
bool KSReadFile(
    const char *filename,
    nglFileBuf *file,
    unsigned int alignment)
{
    bool was_locked = false;
    if (os_file::is_system_locked()) {
        os_file::system_unlock();
        was_locked = true;
    }
    bool result = world_dynamics_system::wds_readfile(
        filename,
        &file->Buf,
        &file->Size,
        alignment);
    if (was_locked)
        os_file::system_lock();
    return result;
}

// 0x001E3890 system_idle__Fv
void system_idle()
{
}

// 0x001E3898 register_exception_handlers__Fv
void register_exception_handlers()
{
}
