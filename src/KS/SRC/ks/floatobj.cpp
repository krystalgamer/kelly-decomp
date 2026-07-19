// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001FB320)
// 0x001FB320 collide__12beach_objectP6entityRC8vector3d
class entity;
class vector3d;

class beach_object {
    char padding[0x24];
    bool active;
public:
    void collide(entity* other, const vector3d& direction);
};

void beach_object::collide(entity* other, const vector3d& direction) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FB330)
// 0x001FB330 jumped_over__12beach_objectP6entity
class entity;

class beach_object {
    char padding[0x24];
    bool active;
public:
    void jumped_over(entity* other);
};

void beach_object::jumped_over(entity* other) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FB340)
// 0x001FB340 sprayed__12beach_objectP6entity
class entity;

class beach_object {
    char padding[0x24];
    bool active;
public:
    void sprayed(entity* other);
};

void beach_object::sprayed(entity* other) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD7A0)
// 0x001FD7A0 collide__12water_objectP6entityRC8vector3d
class entity;
class vector3d;

class water_object {
    char padding[0x24];
    bool active;
public:
    void collide(entity* other, const vector3d& direction);
};

void water_object::collide(entity* other, const vector3d& direction) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD7B0)
// 0x001FD7B0 jumped_over__12water_objectP6entity
class entity;

class water_object {
    char padding[0x24];
    bool active;
public:
    void jumped_over(entity* other);
};

void water_object::jumped_over(entity* other) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FD7C0)
// 0x001FD7C0 sprayed__12water_objectP6entity
class entity;

class water_object {
    char padding[0x24];
    bool active;
public:
    void sprayed(entity* other);
};

void water_object::sprayed(entity* other) {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FE758)
// 0x001FE758 collide__15floating_objectP6entityRC8vector3d
class entity;
class vector3d;

class floating_object {
    char padding[0x24];
    bool active;
public:
    void collide(entity* other, const vector3d& direction);
};

void floating_object::collide(entity* other, const vector3d& direction) {
    active = true;
}
#endif
