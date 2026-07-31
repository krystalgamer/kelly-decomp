#ifndef SINGLETON_H
#define SINGLETON_H

class singleton {
protected:
    inline singleton() {}
    virtual inline ~singleton() {}

private:
    singleton(const singleton &);
    singleton &operator=(const singleton &);
};

#endif
