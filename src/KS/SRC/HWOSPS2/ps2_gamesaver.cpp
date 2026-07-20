// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E6780)
// 0x001E6780 getOverwriteString__16GenericGameSaverii
class stringx {
    char *chars;
    void *my_buf;

public:
    stringx(const char *text, int length = -1);
    ~stringx();
};

__asm__(".equ __7stringxPCci, 0x0034D438");

extern const char *overwrite_text;
__asm__(".equ overwrite_text, 0x003E6860");

class GenericGameSaver {
public:
    stringx getOverwriteString(int port, int slot);
};

stringx GenericGameSaver::getOverwriteString(int port, int slot)
{
    return stringx(overwrite_text);
}
#endif
