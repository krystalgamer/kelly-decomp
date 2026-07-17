class pstring;
class stringx;

class generic_interface {
public:
    bool get_ifc_str(const pstring &att, stringx &val);
};

bool generic_interface::get_ifc_str(const pstring &att, stringx &val) {
    return false;
}
