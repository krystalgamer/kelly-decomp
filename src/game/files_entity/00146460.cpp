class pstring {};

extern const pstring basic_attribute_int_type_name;
__asm__(".equ basic_attribute_int_type_name, 0x005A2628");

template <class Type>
class basic_attribute {
public:
    const pstring& get_class_name() const;
};

template <class Type>
const pstring& basic_attribute<Type>::get_class_name() const {
    return basic_attribute_int_type_name;
}

template const pstring& basic_attribute<int>::get_class_name() const;
