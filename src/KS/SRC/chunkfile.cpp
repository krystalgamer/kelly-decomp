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
