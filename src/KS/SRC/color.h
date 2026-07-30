#ifndef COLOR_H
#define COLOR_H

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
