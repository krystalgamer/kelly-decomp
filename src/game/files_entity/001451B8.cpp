class entity {
    char padding[0x190];
    float programmed_cell_death;

public:
    float get_programmed_cell_death() const;
};

float entity::get_programmed_cell_death() const {
    return programmed_cell_death;
}
