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
