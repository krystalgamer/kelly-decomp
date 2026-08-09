#ifndef SCAN_LIGHT_CONTEXT_H
#define SCAN_LIGHT_CONTEXT_H

class light_source;

class scan_light_context {
public:
    struct light_rec {
        float brightness;
        light_source *light;

        light_rec() {}
        light_rec(float influence, light_source *source)
          : brightness(influence),
            light(source)
        {
        }
        inline bool operator<(const light_rec &other) const {
            return brightness > other.brightness;
        }
    };
};

#endif
