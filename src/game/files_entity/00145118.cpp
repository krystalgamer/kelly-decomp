class po {
};

class entity {
    char padding[0x50];
    po *absolute_po;

    const po &get_abs_po() const {
        return *absolute_po;
    }

public:
    const po &get_colgeom_root_po() const;
};

const po &entity::get_colgeom_root_po() const {
    return get_abs_po();
}
