class vector3d {
public:
    float x;
    float y;
    float z;

    vector3d() {}
    vector3d(const vector3d& value) {
        x = value.x;
        y = value.y;
        z = value.z;
    }
};

class kellyslater_controller {
public:
    void StartGrind(const vector3d direction);
};

void kellyslater_controller::StartGrind(const vector3d direction) {
}
