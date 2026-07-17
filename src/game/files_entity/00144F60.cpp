class visual_rep;

class entity {
    char padding[0x128];
    visual_rep *my_visrep;

public:
    visual_rep *get_vrep() const;
};

visual_rep *entity::get_vrep() const {
    return my_visrep;
}
