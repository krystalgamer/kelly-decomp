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

#if defined(KELLY_DECOMP_FUNCTION_00335CF0)
// 0x00335CF0 read__8app_filePvi
class os_file {
public:
    int read(void *data, int bytes, bool async = false);
};

class stash {
public:
    unsigned int read(void *data, int bytes);
};

__asm__(".equ read__7os_filePvib, 0x001E0450");
__asm__(".equ read__5stashPvi, 0x00348010");

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
    app_file_t get_type() { return type; }
    bool read(void *buf, int bytes);
};

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
