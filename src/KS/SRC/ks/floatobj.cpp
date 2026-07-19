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

#if defined(KELLY_DECOMP_FUNCTION_002073D8)
// 0x002073D8 icepatch_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool icepatch_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::icepatch_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002073F8)
// 0x002073F8 kelp_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool kelp_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::kelp_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207418)
// 0x00207418 fatbastard_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool fatbastard_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::fatbastard_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207438)
// 0x00207438 swimmer_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool swimmer_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::swimmer_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207458)
// 0x00207458 snorkeler_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool snorkeler_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::snorkeler_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207558)
// 0x00207558 dolphin_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool dolphin_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::dolphin_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207578)
// 0x00207578 greatwhite_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool greatwhite_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::greatwhite_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00207598)
// 0x00207598 seal_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool seal_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::seal_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002075B8)
// 0x002075B8 seagull_ai__14surfing_objectR8vector3dT1f
class vector3d;
class surfing_object { public: bool floating_ai(vector3d &position, vector3d &normal, float time); bool seagull_ai(vector3d &position, vector3d &normal, float time); };
__asm__(".equ floating_ai__14surfing_objectR8vector3dT1f, 0x00203A80");
bool surfing_object::seagull_ai(vector3d &position, vector3d &normal, float time) { bool result = floating_ai(position, normal, time); __asm__ volatile(""); return result; }
#endif
