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

#if defined(KELLY_DECOMP_FUNCTION_00265580)
// 0x00265580 Append__t5Table1Z8cbVectorRC8cbVector
struct cbVector { int value; };
struct CbVectorTableLayout { cbVector data[16]; int size; };
extern "C" void AppendCbVector(void *raw, const cbVector &element) __asm__("Append__t5Table1Z8cbVectorRC8cbVector");
void AppendCbVector(void *raw, const cbVector &element) { CbVectorTableLayout *table = (CbVectorTableLayout *)raw; register int index __asm__("$2") = table->size; register int offset __asm__("$6") = index << 2; ++index; offset += (int)table; register cbVector *slot __asm__("$6") = (cbVector *)offset; table->size = index; register int value __asm__("$3") = element.value; slot->value = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002655A0)
// 0x002655A0 Append__t5Table1ZiRCi
struct IntTableLayout { int data[16]; int size; };
extern "C" void AppendInt(void *raw, const int &element) __asm__("Append__t5Table1ZiRCi");
void AppendInt(void *raw, const int &element) { IntTableLayout *table = (IntTableLayout *)raw; table->data[table->size++] = element; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00271058)
// 0x00271058 _$_t5Table1Zi
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5390");

struct target_layout {
    char padding[0x44];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_t5Table1Zi");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270F30)
// 0x00270F30 __tft5Table1Z8cbVector
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512108"); asm(".equ type_name, 0x004E51E0");
extern "C" void *GetTypeInfo() __asm__("__tft5Table1Z8cbVector");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270F70)
// 0x00270F70 __tft5Table1Zi
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512110"); asm(".equ type_name, 0x004E51F8");
extern "C" void *GetTypeInfo() __asm__("__tft5Table1Zi");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
