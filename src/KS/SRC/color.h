#ifndef COLOR_H
#define COLOR_H

class color32 {
public:
    union {
        struct {
            unsigned char b;
            unsigned char g;
            unsigned char r;
            unsigned char a;
        } channels;
        struct {
            unsigned char b;
            unsigned char g;
            unsigned char r;
            unsigned char a;
        } c;
        unsigned int value;
        unsigned int i;
    };

    color32(unsigned int packed = 0) : value(packed) {}

    color32(
        unsigned char red,
        unsigned char green,
        unsigned char blue,
        unsigned char alpha = 255)
    {
        channels.b = blue;
        channels.g = green;
        channels.r = red;
        channels.a = alpha;
    }

    inline unsigned char get_red() const { return channels.r; }
    inline unsigned char get_green() const { return channels.g; }
    inline unsigned char get_blue() const { return channels.b; }
    inline unsigned char get_alpha() const { return channels.a; }
    inline void set_red(unsigned char value) { channels.r = value; }
    inline void set_green(unsigned char value) { channels.g = value; }
    inline void set_blue(unsigned char value) { channels.b = value; }
    inline void set_alpha(unsigned char value) { channels.a = value; }
};

class color {
public:
    float r;
    float g;
    float b;
    float a;

    inline color() {}
    inline color(float red, float green, float blue, float alpha = 1.0f)
      : r(red), g(green), b(blue), a(alpha)
    {
    }
    inline color(const color &other)
      : r(other.r), g(other.g), b(other.b), a(other.a)
    {
    }
    inline color &operator=(const color &other)
    {
        r = other.r;
        g = other.g;
        b = other.b;
        a = other.a;
        return *this;
    }
};

#endif
