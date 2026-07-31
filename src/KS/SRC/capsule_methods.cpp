// capsule inline definitions extracted by generated one-function shims.


// 0x002FF4D8 get_type__C17collision_capsule
class collision_capsule {
public:
    unsigned int get_type() const;
};

unsigned int collision_capsule::get_type() const {
    return 1;
}

// 0x002FF578 get_core_radius__C17collision_capsule
class collision_capsule {
    char padding[0x40];
    float radius;
public:
    float get_core_radius() const;
};

float collision_capsule::get_core_radius() const {
    return radius;
}

// 0x002FF4E0 get_radius__C17collision_capsule
extern "C" float sqrtf(float);asm(".equ sqrtf,0x003C7058");class vector3d{public:float x,y,z;vector3d(){}vector3d(float a,float b,float c):x(a),y(b),z(c){}vector3d operator-(const vector3d&v)const{return vector3d(x-v.x,y-v.y,z-v.z);}float length()const{return sqrtf(x*x+y*y+z*z);}};struct capsule{vector3d base,end;float radius;};class collision_capsule{char p[40];capsule abs_cap;public:float get_radius()const __asm__("get_radius__C17collision_capsule");};float collision_capsule::get_radius()const{return abs_cap.radius+(abs_cap.base-abs_cap.end).length();}
