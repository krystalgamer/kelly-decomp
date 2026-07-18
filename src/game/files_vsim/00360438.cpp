class widget {
    char padding[0x38];
    short origin_x;
    short origin_y;
public:
    void set_origin(short x, short y);
};
void widget::set_origin(short x, short y) { origin_x = x; origin_y = y; }
