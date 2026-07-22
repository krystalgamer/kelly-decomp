#ifndef KELLY_DECOMP_AI_RTTI_SHARED_H
#define KELLY_DECOMP_AI_RTTI_SHARED_H

class input_device {
public:
    virtual ~input_device();
};

class AISurferController : public input_device {
public:
    virtual ~AISurferController();
};

class generic_interface {
public:
    virtual ~generic_interface();
};

class entity_interface : public generic_interface {
public:
    virtual ~entity_interface();
};

class ai_interface : public entity_interface {
public:
    virtual ~ai_interface();
};

extern "C" void __rtti_si(void **type, const char *name, void **base);

__asm__(".equ __rtti_si, 0x003CE2D8");

#endif
