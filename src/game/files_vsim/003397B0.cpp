enum map_e { MAP_DIFFUSE };
class color32 { unsigned int value; };

class material {
public:
    void send_context(int frame, map_e map, unsigned int flags, color32 color);
};

void material::send_context(int frame, map_e map, unsigned int flags, color32 color) {
}
