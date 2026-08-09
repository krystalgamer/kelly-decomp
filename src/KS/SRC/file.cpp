// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00335CA0)
// 0x00335CA0 get_size__8app_file
#include "KS/SRC/file.h"

__asm__(".equ get_size__7os_file, 0x001E0A48");
__asm__(".equ get_size__5stash, 0x003480E8");

int app_file::get_size()
{
    if (type == CFT_BINARY)
    {
        if (use_stash)
            return the_stash.get_size();
        else
            return binary.get_size();
    }
    else if (type == CFT_TEXT)
        return 0;
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00335CF0)
// 0x00335CF0 read__8app_filePvi
#include "KS/SRC/file.h"

__asm__(".equ read__7os_filePvib, 0x001E0450");
__asm__(".equ read__5stashPvi, 0x00348010");

bool app_file::read(void *buf, int bytes)
{
    if (get_type() == CFT_TEXT)
    {
        return false;
    }
    else
    {
        if (use_stash)
            the_stash.read(buf, bytes);
        else
            binary.read(buf, bytes);
    }
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00335C18)
// 0x00335C18 close__8app_file
typedef unsigned long uint64;struct pstring{uint64 pchunk[4];pstring(){for(unsigned i=0;i<4;++i)pchunk[i]=0;}};struct os_file{char data[64];os_file();void close();};struct text_file{char data[144];text_file();void close();};struct stash{void*index;bool opened;bool eof;unsigned fp;unsigned max_fp;char align[4];pstring fullname;stash(){opened=false;eof=false;index=0;fp=0;max_fp=0;}void close(){index=0;eof=false;opened=false;fp=0;max_fp=0;}};__asm__(".equ __7os_file,0x001DFC58");__asm__(".equ close__7os_file,0x001E03A0");__asm__(".equ __9text_file,0x00336D50");__asm__(".equ close__9text_file,0x00337170");class app_file{public:bool use_stash;int type;os_file binary;text_file text;stash the_stash;app_file()__asm__("close__8app_file");void close()__asm__("close__8app_file");};void app_file::close(){if(type==2){if(use_stash==true){use_stash=false;the_stash.close();}else binary.close();}else if(type==1){text.close();}type=0;}
#endif
