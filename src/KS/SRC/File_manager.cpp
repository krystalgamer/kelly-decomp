// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0030D7A8)
// 0x0030D7A8 release_all_files__12file_manager
class file_manager {
public:
    bool release_all_files();
};

bool file_manager::release_all_files() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030D7B0)
// 0x0030D7B0 release_all_logs__12file_manager
class file_manager {
public:
    bool release_all_logs();
};

bool file_manager::release_all_logs() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030DEA8)
// 0x0030DEA8 clear_level_context__12file_manager
extern const char empty_text[];
extern "C" void write_cache(void *) __asm__("write_cache__12file_manager");
extern "C" void pack_string(void *,const char *) __asm__("pack_string__7pstringPCc");
extern "C" void close_stash(int) __asm__("close_stash__5stashi");
extern "C" void free_stored(int) __asm__("free_stored__5stashi");
extern "C" void release_images(void *) __asm__("release_all_memory_images__12file_manager");
extern "C" void release_files(void *) __asm__("release_all_files__12file_manager");
extern "C" void release_logs(void *) __asm__("release_all_logs__12file_manager");
__asm__(".equ empty_text,0x004F5030");
__asm__(".equ write_cache__12file_manager,0x0030D7C0");
__asm__(".equ pack_string__7pstringPCc,0x003354D0");
__asm__(".equ close_stash__5stashi,0x00345BF0");
__asm__(".equ free_stored__5stashi,0x00346FC0");
__asm__(".equ release_all_memory_images__12file_manager,0x0030D6E8");
__asm__(".equ release_all_files__12file_manager,0x0030D7A8");
__asm__(".equ release_all_logs__12file_manager,0x0030D7B0");
struct file_manager_layout {
    char padding[0x94]; char level_dir[1];
    char padding2[0x4b]; char level_context[1];
};
extern "C" void clear_context(file_manager_layout *self)
    __asm__("clear_level_context__12file_manager");
void clear_context(file_manager_layout *self) {
    write_cache(self);
    pack_string(self->level_context,empty_text);
    self->level_dir[0]=0;
    close_stash(2);
    free_stored(2);
    release_images(self);
    release_files(self);
    release_logs(self);
    __asm__ __volatile__("" : : : "memory");
}
#endif
