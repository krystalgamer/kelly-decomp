class frame_time_info_t {
public:
    float age;

    void set_age(float new_age) {
        age = new_age;
    }
};

class entity {
    char padding[0x1CC];
    frame_time_info_t frame_time_info;

public:
    void set_age(float new_age);
};

void entity::set_age(float new_age) {
    frame_time_info.set_age(new_age);
}
