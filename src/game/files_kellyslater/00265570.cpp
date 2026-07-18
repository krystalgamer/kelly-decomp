class cbVector {
    unsigned int value;
};

template <class Type>
class Table {
    Type data[16];
public:
    Type& operator[](int index);
};

template <class Type>
Type& Table<Type>::operator[](int index) {
    return data[index];
}

template cbVector& Table<cbVector>::operator[](int index);
