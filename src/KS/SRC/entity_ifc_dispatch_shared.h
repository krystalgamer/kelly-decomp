#ifndef KELLY_DECOMP_ENTITY_IFC_DISPATCH_SHARED_H
#define KELLY_DECOMP_ENTITY_IFC_DISPATCH_SHARED_H

class pstring;
class stringx;
class vector3d;

#pragma interface

class generic_interface
{
public:
    virtual ~generic_interface();
    virtual bool get_ifc_num(const pstring &attribute, float &value);
    virtual bool set_ifc_num(const pstring &attribute, float value);
    virtual bool get_ifc_vec(const pstring &attribute, vector3d &value);
    virtual bool set_ifc_vec(
        const pstring &attribute,
        const vector3d &value
    );
    virtual bool get_ifc_str(const pstring &attribute, stringx &value);
    virtual bool set_ifc_str(
        const pstring &attribute,
        const stringx &value
    );
};

class entity_interface : public generic_interface
{
    void *owner;
};

class entity
{
    char data_to_ai_interface[0xAC];
    entity_interface *my_ai_interface;
    char data_to_physical_interface[0x0C];
    entity_interface *my_physical_interface;
    char data_to_soft_attrib_interface[0x0C];
    entity_interface *my_soft_attrib_interface;

public:
    bool set_ifc_vec(
        const pstring &attribute,
        const vector3d &value
    );
    bool set_ifc_str(
        const pstring &attribute,
        const stringx &value
    );
};

#endif
