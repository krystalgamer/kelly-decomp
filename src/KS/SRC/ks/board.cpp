// Matching decompilation blocks selected by generated build shims.

// 0x001EFC10 DoingFaceTurn__20SurfBoardObjectClass
class SurfBoardObjectClass {
    char padding[0xA84];
    int turn_type;
public:
    bool DoingFaceTurn();
};

bool SurfBoardObjectClass::DoingFaceTurn()
{
    return turn_type == 7 || turn_type == 13 || turn_type == 9 ||
        turn_type == 10 || turn_type == 11 || turn_type == 12 ||
        turn_type == 8;
}


// 0x001EE8D8 Terminate__20SurfBoardObjectClass
class SurfBoardObjectClass {
public:
    int Terminate();
};

int SurfBoardObjectClass::Terminate() {
    return 1;
}

// 0x001F1ED0 ResetTimers__20SurfBoardObjectClass
class SurfBoardObjectClass {
    char padding_to_backwards[0xA54];
    float backwards_time;
    char padding_to_standing[0x8];
    float standing_time;
public:
    void ResetTimers();
};

void SurfBoardObjectClass::ResetTimers() {
    standing_time = 0;
    backwards_time = 0;
}

// 0x001F9B18 IncrementFloatSpeed__20SurfBoardObjectClass
class SurfBoardObjectClass { char padding[0xaa0]; float float_speed; public: void IncrementFloatSpeed(); };
void SurfBoardObjectClass::IncrementFloatSpeed() { float value = float_speed; __asm__ volatile("" : : "f"(value)); float increment = 1.5f; __asm__ volatile("nop"); float_speed = value + increment; }

// 0x001F99D0 GetLeanPercentage__20SurfBoardObjectClass
class SurfBoardObjectClass { char padding0[0xd8]; float maxLeanAngle; char padding1[0x8f4]; float curLeanAngle; public: float GetLeanPercentage(); };
float SurfBoardObjectClass::GetLeanPercentage() { return curLeanAngle / (maxLeanAngle * 0.017453292f); }

// 0x001F1EE0 SetWipeoutDone__20SurfBoardObjectClass
void ks_fx_end_wipeout_splash(int player);
__asm__(".equ ks_fx_end_wipeout_splash__Fi, 0x0036B0E8");
struct controller_layout { char padding[0x1674]; int player; };
class SurfBoardObjectClass { char padding0[0x9c4]; bool wipeout_active; char padding1[0x14]; controller_layout *controller; char padding2[0x7c]; bool wipeout_done; public: void SetWipeoutDone(); };
void SurfBoardObjectClass::SetWipeoutDone() { wipeout_done = false; wipeout_active = false; ks_fx_end_wipeout_splash(controller->player); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x001F99F0 CalculatePathPeakTime__20SurfBoardObjectClass
struct rigid_body {
    float mass;
    char padding[0x70];
    float lin_mom_y;
};

extern float air_gravity;
__asm__(".equ air_gravity, 0x0042EBDC");

class SurfBoardObjectClass {
    char padding[4];
    rigid_body *rb;

public:
    float CalculatePathPeakTime();
};

float SurfBoardObjectClass::CalculatePathPeakTime()
{
    float velocity = rb->lin_mom_y / rb->mass;
    float gravity = -air_gravity * 0.72f / rb->mass;
    if (gravity == 0.0f)
        goto no_gravity;
    return -velocity / gravity;

no_gravity:
    return 0.0f;
}

// 0x001EDD40 _$_20SurfBoardObjectClass
extern "C" void destroy_physics(void *,int)
    __asm__("_$_18PhysicsObjectClass");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
extern const char surfboard_vtable[];
__asm__(".equ _$_18PhysicsObjectClass, 0x002418A0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ surfboard_vtable, 0x004ED4E8");
struct surfboard_layout {
    char padding[4];
    void *rb;
    char padding2[0xac0];
    const void *vtable;
};
extern "C" void destroy_surfboard(
    surfboard_layout *self,int flags
) __asm__("_$_20SurfBoardObjectClass");
void destroy_surfboard(surfboard_layout *self,int flags) {
    self->vtable=surfboard_vtable;
    if (self->rb)
        destroy_physics(self->rb,3);
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}

// 0x001F9B38 CollideWithLip__20SurfBoardObjectClass
struct vector3d{float x,y,z;vector3d(){}vector3d(float a,float b,float c):x(a),y(b),z(c){}vector3d(const vector3d&v){x=v.x;y=v.y;z=v.z;}vector3d operator-(const vector3d&v)const{return vector3d(x-v.x,y-v.y,z-v.z);}};inline float dot(const vector3d&a,const vector3d&b){return a.x*b.x+a.y*b.y+a.z*b.z;}struct Pose{char p[48];vector3d position;};struct Board{char p[80];Pose*pose;};class SurfBoardObjectClass{char p0[248];bool float_jump;char p1[2264];Board*my_board;char p2[204];vector3d float_pos;public:bool CollideWithLip() __asm__("CollideWithLip__20SurfBoardObjectClass");};bool SurfBoardObjectClass::CollideWithLip(){vector3d vec1=my_board->pose->position-float_pos;if(float_jump)vec1.y=0.0f;return dot(vec1,vec1)<0.4f;}

// 0x001EE8E0 Load__20SurfBoardObjectClassPc
class SurfBoardObjectClass {
    char padding[0x24];
    float x_extent;
    float y_extent;
    float z_extent;

public:
    int Load(char *name);
};

int SurfBoardObjectClass::Load(char *name)
{
    float min_x = 100000.0f;
    float min_y = 100000.0f;
    float min_z = 100000.0f;
    float max_x = -100000.0f;
    float max_y = -100000.0f;
    float max_z = -100000.0f;

    x_extent = __builtin_fabsf(max_x - min_x);
    y_extent = __builtin_fabsf(max_y - min_y);
    z_extent = __builtin_fabsf(max_z - min_z);
    return 1;
}
