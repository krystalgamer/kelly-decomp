#ifndef REFPTR_H
#define REFPTR_H

class ref {
private:
    ref(const ref &) : count(0) {}
    ref &operator=(const ref &) { return *this; }

protected:
    unsigned int count;
    explicit ref(unsigned int value) : count(value) {}

public:
    ref() : count(0) {}
    inline unsigned int refs() const { return count; }
    inline void addref() { ++count; }
    inline bool subref() { return --count != 0; }
};

#endif
