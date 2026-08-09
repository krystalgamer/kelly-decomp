#ifndef CHUNKFILE_H
#define CHUNKFILE_H

class stringx;
class chunk_file;

void serial_in(chunk_file &file, int *value);
void serial_in(chunk_file &file, unsigned short *value);
void serial_in(chunk_file &file, unsigned int *value);

class chunk_flavor {
    char flavor[1];

public:
    const char *c_str() const;
    stringx to_stringx() const;
    bool operator==(const chunk_flavor &other) const;
};

#endif
