class Heap {
    char padding[0x24];
    unsigned int minalloc;
    unsigned int minalign;
public:
    void SetGranularity(unsigned int allocation, unsigned int alignment);
};

void Heap::SetGranularity(unsigned int allocation, unsigned int alignment) {
    minalloc = allocation;
    minalign = alignment;
}
