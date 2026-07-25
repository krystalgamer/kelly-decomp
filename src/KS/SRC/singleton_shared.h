#ifndef KELLY_DECOMP_SINGLETON_SHARED_H
#define KELLY_DECOMP_SINGLETON_SHARED_H

class singleton {
protected:
    inline singleton() {}
    virtual inline ~singleton() {}

private:
    singleton(const singleton &);
    singleton &operator=(const singleton &);
};

#endif
