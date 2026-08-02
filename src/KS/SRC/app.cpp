// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0030C458)
// 0x0030C458 cleanup_stl_memory_dregs__3app
class anim_id_manager { public: void stl_dealloc(); };
extern anim_id_manager *anim_id_manager_instance;
__asm__(".equ anim_id_manager_instance, 0x003E5A58");
__asm__(".equ stl_dealloc__15anim_id_manager, 0x001281F8");
class app { public: static void cleanup_stl_memory_dregs(); };
void app::cleanup_stl_memory_dregs() { anim_id_manager_instance->stl_dealloc(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
