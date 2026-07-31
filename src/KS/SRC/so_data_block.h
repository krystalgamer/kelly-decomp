#ifndef _SO_DATA_BLOCK_H
#define _SO_DATA_BLOCK_H

class so_data_block {
protected:
    int blocksize;
    char *buffer;

public:
    so_data_block() : blocksize(0), buffer(0) {}
    so_data_block(const so_data_block &other);
    explicit so_data_block(int size);
    ~so_data_block();
    void init(int size);
    void clear();
    int size() const { return blocksize; }
    char *get_buffer() const { return buffer; }

protected:
    void _destroy();
    void _init(int size);
};

#endif
