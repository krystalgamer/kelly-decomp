extern void* anim_maker_vtable;
__asm__(".equ anim_maker_vtable, 0x004CA030");
class anim_maker { void* vptr; public: anim_maker(); };
anim_maker::anim_maker() { vptr = &anim_maker_vtable; }
