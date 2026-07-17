class vector3d;

class entity {
public:
    bool camera_slide_to(
        const vector3d &position,
        const vector3d &target,
        float roll,
        float speed
    );
};

bool entity::camera_slide_to(
    const vector3d &position,
    const vector3d &target,
    float roll,
    float speed
) {
    return false;
}
