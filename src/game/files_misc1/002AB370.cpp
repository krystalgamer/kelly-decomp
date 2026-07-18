class Heap { char padding[0x24]; unsigned int minalloc; public: unsigned int HeaderSize() const; };
unsigned int Heap::HeaderSize() const { return (28 + minalloc - 1) & -minalloc; }
