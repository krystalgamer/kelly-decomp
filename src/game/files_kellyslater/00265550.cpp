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
