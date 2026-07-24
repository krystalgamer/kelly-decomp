// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00336B28)
// 0x00336B28 c_str__C12chunk_flavor
class chunk_flavor {
    char flavor[1];
public:
    const char* c_str() const;
};

const char* chunk_flavor::c_str() const {
    return flavor;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336B60)
// 0x00336B60 __eq__C12chunk_flavorRC12chunk_flavor
extern "C" int strcmp(const char *left, const char *right);
__asm__(".equ strcmp, 0x003D3E88");
class chunk_flavor { char text[1]; public: bool operator==(const chunk_flavor &other) const; };
bool chunk_flavor::operator==(const chunk_flavor &other) const { return strcmp(text, other.text) == 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336B30)
// 0x00336B30 to_stringx__C12chunk_flavor
class stringx {
    int value;

public:
    stringx(const char *text, int length = -1);

    stringx(const stringx &other) {
        value = other.value;
    }
};

__asm__(".equ __7stringxPCci, 0x0034D438");

class chunk_flavor {
    char flavor[1];

public:
    stringx to_stringx() const;
};

stringx chunk_flavor::to_stringx() const {
    return stringx(flavor);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336900)
// 0x00336900 serial_in__FR10chunk_filePUs
class chunk_file;
void serial_in(chunk_file &file, int *value);
__asm__(".equ serial_in__FR10chunk_filePi, 0x003368A0");

void serial_in(chunk_file &file, unsigned short *value) {
    int temporary;
    serial_in(file, &temporary);
    *value = temporary;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336930)
// 0x00336930 serial_in__FR10chunk_filePUi
class chunk_file;
void serial_in(chunk_file &file, int *value);
__asm__(".equ serial_in__FR10chunk_filePi, 0x003368A0");

void serial_in(chunk_file &file, unsigned int *value) {
    int temporary;
    serial_in(file, &temporary);
    *value = temporary;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336960)
// 0x00336960 serial_in__FR10chunk_filePb
class chunk_file;

void serial_in(chunk_file &file, int *value);
__asm__(".equ serial_in__FR10chunk_filePi, 0x003368A0");

void serial_in(chunk_file &file, bool *value)
{
    int serialized;
    serial_in(file, &serialized);
    *value = (bool)serialized;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003368A0)
// 0x003368A0 serial_in__FR10chunk_filePi
struct chunk_file {
    int use_stash;
    int type;
    char binary[0x40];
    char text[0x90];
    char stash[1];
};
extern "C" void text_read(char *,int *)
    __asm__("read__9text_filePi");
extern "C" void stash_read(char *,void *,int)
    __asm__("read__5stashPvi");
extern "C" void file_read(char *,void *,int,bool)
    __asm__("read__7os_filePvib");
__asm__(".equ read__9text_filePi, 0x003371B0");
__asm__(".equ read__5stashPvi, 0x00348010");
__asm__(".equ read__7os_filePvib, 0x001E0450");
extern "C" void serial_int(chunk_file &io,int *value)
    __asm__("serial_in__FR10chunk_filePi");
void serial_int(chunk_file &io,int *value) {
    if (io.type==1) {
        text_read(io.text,value);
        __asm__ __volatile__("" : : : "memory");
    } else if (io.use_stash) {
        stash_read(io.stash,value,4);
        __asm__ __volatile__("" : : : "memory");
    } else {
        file_read(io.binary,value,4,false);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
