class pstring;
class stringx;

class ai_interface {
public:
    bool get_ifc_str(const pstring &att, stringx &val);
};

bool ai_interface::get_ifc_str(const pstring &att, stringx &val) {
    return false;
}
