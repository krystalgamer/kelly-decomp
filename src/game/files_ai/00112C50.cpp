class pstring;
class vector3d;

class generic_interface {
public:
    bool set_ifc_vec(const pstring &att, const vector3d &val);
};

bool generic_interface::set_ifc_vec(const pstring &att, const vector3d &val) {
    return false;
}
