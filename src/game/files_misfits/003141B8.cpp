class pstring {};
extern const pstring bounded_attribute_int_type_name;
__asm__(".equ bounded_attribute_int_type_name, 0x005A2758");
template <class Type> class bounded_attribute { public: const pstring& get_class_name() const; };
template <class Type> const pstring& bounded_attribute<Type>::get_class_name() const { return bounded_attribute_int_type_name; }
template const pstring& bounded_attribute<int>::get_class_name() const;
