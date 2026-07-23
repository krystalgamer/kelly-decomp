// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00335CA0)
// 0x00335CA0 get_size__8app_file
class os_file {
public:
    int get_size();
};

class stash {
public:
    unsigned int get_size();
};

__asm__(".equ get_size__7os_file, 0x001E0A48");
__asm__(".equ get_size__5stash, 0x003480E8");

class app_file {
public:
    enum app_file_t {
        CFT_NONE,
        CFT_TEXT,
        CFT_BINARY
    };

    bool use_stash;

private:
    app_file_t type;
    os_file binary;
    char file_storage_padding[0xCF];
    stash the_stash;

public:
    int get_size();
};

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
