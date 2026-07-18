class entity;

class trigger {
public:
    bool triggered(entity* value);
};

bool trigger::triggered(entity* value) {
    return false;
}
