class vector3d;

class entity {
public:
    bool camera_slide_to_orbit(
        const vector3d &center,
        float range,
        float theta,
        float psi,
        float speed
    );
};

bool entity::camera_slide_to_orbit(
    const vector3d &center,
    float range,
    float theta,
    float psi,
    float speed
) {
    return false;
}
