extern void* collision_geometry_vtable;
__asm__(".equ collision_geometry_vtable, 0x004F31E8");
class collision_geometry { char padding[0x4]; void* owner; void* vptr; public: collision_geometry(); };
collision_geometry::collision_geometry() { owner = 0; vptr = &collision_geometry_vtable; }
