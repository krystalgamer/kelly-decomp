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
