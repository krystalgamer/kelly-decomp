class controller {
    bool active;
public:
    void kill();
};

void controller::kill() {
    active = false;
}
