#ifndef CHUNKFILE_H
#define CHUNKFILE_H

class chunk_flavor {
    char flavor[1];

public:
    const char *c_str() const;
};

#endif
