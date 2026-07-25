#ifndef KELLY_DECOMP_PSTRING_SHARED_H
#define KELLY_DECOMP_PSTRING_SHARED_H

typedef unsigned long uint64;

class pstring {
    uint64 pchunk[4];

    const char *unpack_string() const;

public:
    inline operator const char *() const {
        return unpack_string();
    }

    inline const char *c_str() const {
        return unpack_string();
    }
};

#endif
