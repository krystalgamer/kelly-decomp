#ifndef SINGLETON_H
#define SINGLETON_H

template<class T>
class singleton_ptr {
    T *pointer;

public:
    singleton_ptr(T *value = 0) : pointer(value) {}
    void operator=(T *value) { pointer = value; }
    operator T *() const { return pointer; }
};

class singleton {
protected:
    inline singleton() {}
    virtual inline ~singleton() {}

private:
    singleton(const singleton &);
    singleton &operator=(const singleton &);
};

#endif
