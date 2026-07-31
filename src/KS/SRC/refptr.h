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

template <class T>
class refptr {
protected:
    T *pointer;

    inline void addref() {
        if (pointer)
            pointer->addref();
    }
    inline void subref() {
        if (pointer && !pointer->subref())
            delete pointer;
    }

public:
    inline refptr(T *value = 0) : pointer(value) {
        addref();
    }
    inline refptr(const refptr<T> &other)
      : pointer(other.pointer)
    {
        addref();
    }
    inline ~refptr() {
        subref();
    }
    inline refptr<T> &operator=(T *value) {
        if (pointer != value) {
            subref();
            pointer = value;
            addref();
        }
        return *this;
    }
    inline operator T *() const { return pointer; }
    inline T *operator->() const { return pointer; }
};

#endif
