class flyby_camera {
    char padding[0x2D4];
    bool is_playing;
public:
    void start();
};

void flyby_camera::start() {
    is_playing = true;
}
