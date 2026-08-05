// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DFC58)
// 0x001DFC58 __7os_file
__asm__(".equ __7stringx, 0x0034D3E0");
class stringx { public: stringx(); int data[2]; };
class os_file { public: os_file(); stringx name; int flags; bool opened; bool eof; bool from_cd; char data[0x24]; int curr_fp; };
os_file::os_file() { flags = 0; opened = false; eof = true; from_cd = false; curr_fp = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DFD10)
// 0x001DFD10 _$_7os_file
extern "C" void close_file(void *) __asm__("close__7os_file");
extern "C" void destroy_string(void *,int) __asm__("_$_7stringx");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
__asm__(".equ close__7os_file, 0x001E03A0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
struct os_file_layout { char padding[0xc]; int opened; };
extern "C" void destroy_file(
    os_file_layout *self,int flags
) __asm__("_$_7os_file");
void destroy_file(os_file_layout *self,int flags) {
    if (self->opened)
        close_file(self);
    destroy_string(self,2);
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E03A0)
// 0x001E03A0 close__7os_file
class stringx{char*chars;void*buf;public:inline const char*c_str()const{return chars;}};extern "C" void error(const char*,...)__asm__("error__FPCce");extern "C" int sceClose(int);extern const char close_error[];extern int g_try_count;extern int g_error_condition;asm(".equ error__FPCce,0x001DFBD8");asm(".equ close_error,0x004DE690");asm(".equ sceClose,0x003DEC00");asm(".equ g_try_count,0x0040E3A8");asm(".equ g_error_condition,0x0040E3A4");class os_file{stringx name;int flags;int opened;int eof;int from_cd;union{int host;char cd[36];}io;int curr_fp;public:void close();};void os_file::close(){if(!opened){error(close_error,name.c_str());}int ret;if(!from_cd){g_try_count=0;do{ret=sceClose(io.host);g_error_condition=(ret<0);g_try_count++;}while((g_try_count<300)&&g_error_condition);}opened=false;eof=true;from_cd=false;curr_fp=-1;}
#endif
