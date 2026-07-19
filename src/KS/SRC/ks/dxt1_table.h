// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00265550)
// 0x00265550 Resize__t5Table1Z8cbVectori
class cbVector {};

template <class Type>
class Table {
    char padding[0x40];
    int size;
public:
    void Resize(int n);
};

template <class Type>
void Table<Type>::Resize(int n) {
    size = n;
}

template void Table<cbVector>::Resize(int n);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00265558)
// 0x00265558 Resize__t5Table1Zii
template <class Type>
class Table {
    char padding[0x40];
    int size;
public:
    void Resize(int n);
};

template <class Type>
void Table<Type>::Resize(int n) {
    size = n;
}

template void Table<int>::Resize(int n);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00265560)
// 0x00265560 __vc__t5Table1Zii
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

template int& Table<int>::operator[](int index);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00265570)
// 0x00265570 __vc__t5Table1Z8cbVectori
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
#endif
