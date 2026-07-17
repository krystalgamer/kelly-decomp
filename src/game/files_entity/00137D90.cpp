class entity {
public:
    bool allow_targeting() const;
};

bool entity::allow_targeting() const {
    return true;
}
