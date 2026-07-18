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

class TextString {
public:
    void SetLocation3D(vector3d loc);
};

void TextString::SetLocation3D(vector3d loc) {
}
