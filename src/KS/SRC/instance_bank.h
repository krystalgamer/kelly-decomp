#ifndef INSTANCE_BANK_H
#define INSTANCE_BANK_H

template <class T>
class instance_bank {
public:
    T *new_instance(T *instance);
    void delete_instance(T *instance);
};

#endif
