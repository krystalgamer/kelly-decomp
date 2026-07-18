class vector3d {
    float x;
    float y;
    float z;
};

class point_trigger {
    char padding[0x38];
    vector3d position;
public:
    const vector3d& get_abs_position() const;
};

const vector3d& point_trigger::get_abs_position() const {
    return position;
}
