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
