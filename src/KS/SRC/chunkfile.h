#ifndef CHUNKFILE_H
#define CHUNKFILE_H

class stringx;

class chunk_flavor {
    char flavor[1];

public:
    const char *c_str() const;
    stringx to_stringx() const;
    bool operator==(const chunk_flavor &other) const;
};

#endif
