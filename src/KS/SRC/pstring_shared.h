#ifndef KELLY_DECOMP_PSTRING_SHARED_H
#define KELLY_DECOMP_PSTRING_SHARED_H

typedef unsigned long uint64;

class pstring {
    static char output_cache[12][41];
    static unsigned int output_index;
    static const char pc_to_ascii[64];

    uint64 pchunk[4];

    const char *unpack_string() const;

public:
    pstring()
    {
        for (unsigned int i = 0; i < 4; ++i)
            pchunk[i] = 0;
    }

    pstring(const pstring &other)
    {
        for (unsigned int i = 0; i < 4; ++i)
            pchunk[i] = other.pchunk[i];
    }

    pstring &operator=(const pstring &other)
    {
        if (&other == this)
            return *this;
        for (unsigned int i = 0; i < 4; ++i)
            pchunk[i] = other.pchunk[i];
        return *this;
    }

    inline operator const char *() const {
        return unpack_string();
    }

    inline const char *c_str() const {
        return unpack_string();
    }
};

#endif
