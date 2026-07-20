// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00328620)
// 0x00328620 _$_26slf_trigger_get_position_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328620(void *self) __asm__("_$_26slf_trigger_get_position_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328620(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328810)
// 0x00328810 _$_31slf_trigger_get_triggered_ent_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328810(void *self) __asm__("_$_31slf_trigger_get_triggered_ent_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328810(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003289D8)
// 0x003289D8 _$_24slf_trigger_set_active_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003289D8(void *self) __asm__("_$_24slf_trigger_set_active_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003289D8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328A98)
// 0x00328A98 _$_26slf_create_point_trigger_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328A98(void *self) __asm__("_$_26slf_create_point_trigger_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328A98(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328C88)
// 0x00328C88 _$_24slf_create_box_trigger_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328C88(void *self) __asm__("_$_24slf_create_box_trigger_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328C88(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328E58)
// 0x00328E58 _$_27slf_create_entity_trigger_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328E58(void *self) __asm__("_$_27slf_create_entity_trigger_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328E58(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329030)
// 0x00329030 _$_30slf_trigger_set_use_any_char_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329030(void *self) __asm__("_$_30slf_trigger_set_use_any_char_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329030(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00316B50)
// 0x00316B50 find_instance__C13slc_trigger_tRC7stringx
class stringx;
class trigger;
class trigger_manager { public: trigger *find_instance(const stringx &name); };
extern trigger_manager *g_trigger_manager;
__asm__(".equ g_trigger_manager, 0x00431A88");
__asm__(".equ find_instance__15trigger_managerRC7stringx, 0x0028D7B0");
class slc_trigger_t { public: unsigned int find_instance(const stringx &name) const; };
unsigned int slc_trigger_t::find_instance(const stringx &name) const { trigger *result = g_trigger_manager->find_instance(name); KELLY_DECOMP_COMPILER_BARRIER(); return (unsigned int)result; }
#endif
