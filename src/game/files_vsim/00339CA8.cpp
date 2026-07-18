class anim_texture {
    char padding[0x8];
    void** frame_begin;
    void** frame_end;

public:
    int get_anim_length() const;
};

int anim_texture::get_anim_length() const {
    return frame_end - frame_begin;
}
