class po {};

struct movement_info {
    char padding[0x10];
    po frame_delta;
};

class entity {
    char padding[0x150];
    movement_info* mi;
public:
    const po& get_frame_delta() const;
};

const po& entity::get_frame_delta() const {
    return mi->frame_delta;
}
