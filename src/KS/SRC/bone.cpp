// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00126D90)
// 0x00126D90 destroy_link_ifc__4bone
class link_interface { public: virtual ~link_interface(); };
class bone {
    char padding[0x68];
    link_interface* my_link_interface;
public:
    void destroy_link_ifc();
};
void bone::destroy_link_ifc()
{
    delete my_link_interface;
    my_link_interface = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00126D28)
// 0x00126D28 create_link_ifc__4bone
class bone;
void *operator new(unsigned int, unsigned int, const char *, int);
extern const char create_link_signature[];
__asm__(".equ __nw__FUiUiPCci,0x002AC578");
__asm__(".equ create_link_signature,0x004CB1C8");
__asm__(".equ _vt$14link_interface,0x004CE6A0");
class generic_interface { public: virtual ~generic_interface(); };
class bone_interface : public generic_interface {
protected:
    bone *my_bone;
public:
    bone_interface(bone *value) : my_bone(value) {}
    virtual ~bone_interface();
};
class link_interface : public bone_interface {
    bone *my_parent;
    bone *my_child;
    bone *my_brother;
    bool link_manages_abs_po;
public:
    link_interface(bone *value) : bone_interface(value) {
        my_parent = 0;
        my_child = 0;
        my_brother = 0;
        link_manages_abs_po = true;
    }
    virtual ~link_interface();
};
class bone {
    char padding[0x68];
    link_interface *my_link_interface;
public:
    link_interface *create_link_ifc();
};
link_interface *bone::create_link_ifc()
{
    my_link_interface = new (0, create_link_signature, 0) link_interface(this);
    return my_link_interface;
}
#endif
