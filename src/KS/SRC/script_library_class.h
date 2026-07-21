// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0035F6C0)
// 0x0035F6C0 __cl__Q220script_library_class8functionR8vm_stackQ320script_library_class8function7entry_t
class vm_stack;

class script_library_class {
public:
    class function {
    public:
        enum entry_t { FIRST_ENTRY };
        bool operator()(vm_stack& stack, entry_t entry);
    };
};

bool script_library_class::function::operator()(vm_stack& stack, entry_t entry) {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F6E0)
// 0x0035F6E0 find_instance__C20script_library_classRC7stringx
class stringx;

class script_library_class {
public:
    unsigned int find_instance(const stringx& name) const;
};

unsigned int script_library_class::find_instance(const stringx& name) const {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F6E8)
// 0x0035F6E8 read_value__20script_library_classR10chunk_filePc
class chunk_file;

class script_library_class {
public:
    void read_value(chunk_file& file, char* buffer);
};

void script_library_class::read_value(chunk_file& file, char* buffer) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F6F0)
// 0x0035F6F0 purge__20script_library_class
class script_library_class {
public:
    void purge();
};

void script_library_class::purge() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F790)
// 0x0035F790 _$_19slc_script_object_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptObjectClassDtor(void *self) __asm__("_$_19slc_script_object_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptObjectClassDtor(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F828)
// 0x0035F828 _$_9slc_num_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptNumClassDtor(void *self) __asm__("_$_9slc_num_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptNumClassDtor(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F640)
// 0x0035F640 __tfQ220script_library_class8function
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *function_type[] __asm__("__tiQ220script_library_class8function");
extern "C" char function_name[] __asm__("__tnQ220script_library_class8function");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
__asm__(".equ __tnQ220script_library_class8function, 0x00505608");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **function_rtti() __asm__("__tfQ220script_library_class8function");
void **function_rtti()
{
    if (!function_type[0])
        __rtti_user(function_type, function_name);
    return function_type;
}
#endif
