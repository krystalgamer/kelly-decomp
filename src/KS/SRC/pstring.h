#ifndef PSTRING_H
#define PSTRING_H

typedef unsigned long uint64;

class stringx;

class pstring {
    static char output_cache[12][41];
    static unsigned int output_index;
    static const char pc_to_ascii[64];

    uint64 pchunk[4];

    const char *unpack_string() const;
    void pack_string(const char *text);

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

    pstring(const stringx &text);
    explicit pstring(const char *text) {
        pack_string(text);
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

    inline bool operator==(const pstring &other) const {
        for (unsigned int i = 0; i < 4; ++i) {
            if (pchunk[i] != other.pchunk[i])
                return false;
        }
        return true;
    }
};

#endif
