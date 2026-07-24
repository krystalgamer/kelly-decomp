// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0011CE38)
// 0x0011CE38 binary_load__10scene_animRC7stringx
struct substash_layout{char padding[588];void*stored_buf;char p2[116];int stash_file_is_open;char tail[80];};extern int curstash;extern substash_layout substash[];__asm__(".equ curstash,0x0046D9C0");__asm__(".equ substash,0x0046B7B8");extern "C" void load_stash(void*,const void*) __asm__("binary_load_from_stash__10scene_animRC7stringx");extern "C" void load_os(void*,const void*) __asm__("binary_load_from_os__10scene_animRC7stringx");__asm__(".equ binary_load_from_stash__10scene_animRC7stringx,0x0011C5A0");__asm__(".equ binary_load_from_os__10scene_animRC7stringx,0x0011CA20");inline bool using_stash(){substash_layout&s=substash[curstash];return s.stash_file_is_open||s.stored_buf!=0;}extern "C" void binary_load(void*self,const void*filename) __asm__("binary_load__10scene_animRC7stringx");void binary_load(void*self,const void*filename){if(using_stash()){load_stash(self,filename);__asm__ __volatile__("");}else{load_os(self,filename);__asm__ __volatile__("");}}
#endif
