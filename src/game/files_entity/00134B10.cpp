class entity_anim;

class entity {
    char padding[0x110];
    entity_anim *current_anim;

public:
    void detach_anim();
};

void entity::detach_anim() {
    current_anim = 0;
}
