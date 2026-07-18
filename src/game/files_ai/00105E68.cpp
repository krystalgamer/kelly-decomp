class ai_interface {
    ai_interface* self;
public:
    ai_interface* get_ai_interface() {
        return self;
    }
};

class ai_action {
    ai_interface* owner;
public:
    ai_interface* get_ai_interface() const;
};

ai_interface* ai_action::get_ai_interface() const {
    return owner->get_ai_interface();
}
