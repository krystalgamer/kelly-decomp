class pstring;
class stringx;

class generic_interface {
public:
    bool set_ifc_str(const pstring &att, const stringx &val);
};

bool generic_interface::set_ifc_str(const pstring &att, const stringx &val) {
    return false;
}
