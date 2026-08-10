// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DFC58)
// 0x001DFC58 __7os_file
#include "KS/SRC/osfile.h"

os_file::os_file() { flags = 0; opened = false; eof = true; from_cd = false; curr_fp = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E03A0)
// 0x001E03A0 close__7os_file
class stringx{char*chars;void*buf;public:inline const char*c_str()const{return chars;}};extern "C" void error(const char*,...)__asm__("error__FPCce");extern "C" int sceClose(int);extern const char close_error[];extern int g_try_count;extern int g_error_condition;asm(".equ error__FPCce,0x001DFBD8");asm(".equ close_error,0x004DE690");asm(".equ sceClose,0x003DEC00");asm(".equ g_try_count,0x0040E3A8");asm(".equ g_error_condition,0x0040E3A4");class os_file{stringx name;int flags;int opened;int eof;int from_cd;union{int host;char cd[36];}io;int curr_fp;public:void close();};void os_file::close(){if(!opened){error(close_error,name.c_str());}int ret;if(!from_cd){g_try_count=0;do{ret=sceClose(io.host);g_error_condition=(ret<0);g_try_count++;}while((g_try_count<300)&&g_error_condition);}opened=false;eof=true;from_cd=false;curr_fp=-1;}
#endif
