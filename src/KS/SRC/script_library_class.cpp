// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0034F078)
// 0x0034F078 __Q220script_library_class8functioni
struct ScriptFunctionLayout { const void *name_data; const void *vtable; };
extern const char empty_script_name[];
extern const char script_function_vtable[];
__asm__(".equ empty_script_name, 0x00500D28");
__asm__(".equ script_function_vtable, 0x005052B0");
extern "C" void *ScriptFunctionCtor(void *self, int dummy) __asm__("__Q220script_library_class8functioni");
void *ScriptFunctionCtor(void *self, int dummy) { ScriptFunctionLayout *layout = (ScriptFunctionLayout *)self; layout->vtable = script_function_vtable; layout->name_data = empty_script_name; return self; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00350070)
// 0x00350070 read_value__9slc_num_tR10chunk_filePc
class chunk_file;
void serial_in(chunk_file &file, float *value);
__asm__(".equ serial_in__FR10chunk_filePf, 0x00336998");
class slc_num_t { public: void read_value(chunk_file &file, char *buffer); };
void slc_num_t::read_value(chunk_file &file, char *buffer) { serial_in(file, (float *)buffer); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00350038)
// 0x00350038 __9slc_num_tPCciT1
extern "C" void ScriptLibraryClassCtor(
    void *self,
    const char *name,
    int size,
    const char *parent
) __asm__("__20script_library_classPCciT1");

__asm__(".equ __20script_library_classPCciT1, 0x0034ECD0");

extern const char slc_num_vtable[];
__asm__(".equ slc_num_vtable, 0x00505208");

struct slc_num_layout {
    char padding[0x20];
    const void *vtable;
};

extern "C" void *SlcNumCtor(
    void *self,
    const char *name,
    int size,
    const char *parent
) __asm__("__9slc_num_tPCciT1");

void *SlcNumCtor(
    void *self,
    const char *name,
    int size,
    const char *parent
) {
    ScriptLibraryClassCtor(self, name, size, parent);
    ((slc_num_layout *)self)->vtable = slc_num_vtable;
    return self;
}
#endif
