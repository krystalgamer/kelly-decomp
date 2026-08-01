#ifndef DXT1_TABLE_H
#define DXT1_TABLE_H

#pragma interface

class cbVector {
public:
    unsigned int value;
};

template <class Type>
class Table {
    Type data[16];
    int size;

public:
    Table() : size(0) {}
    virtual ~Table() {}

    void Resize(int count);
    void Append(const Type &element);
    Type &operator[](int index);
};

template <class Type>
void Table<Type>::Resize(int count)
{
    size = count;
}

template <class Type>
void Table<Type>::Append(const Type &element)
{
    data[size++] = element;
}

template <class Type>
Type &Table<Type>::operator[](int index)
{
    return data[index];
}

#endif
