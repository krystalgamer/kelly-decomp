class pstring;
class vector3d;

class generic_interface {
public:
    bool get_ifc_vec(const pstring &att, vector3d &val);
};

bool generic_interface::get_ifc_vec(const pstring &att, vector3d &val) {
    return false;
}
