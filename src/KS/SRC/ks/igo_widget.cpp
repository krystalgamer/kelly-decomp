// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00164658)
// 0x00164658 SetDisplay__9IGOWidgetb
class IGOWidget {
    bool display;

public:
    void SetDisplay(bool visible);
};

void IGOWidget::SetDisplay(bool visible) {
    display = visible;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164660)
// 0x00164660 Update__9IGOWidgetf
class IGOWidget {
public:
    void Update(float delta_time);
};

void IGOWidget::Update(float delta_time) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164668)
// 0x00164668 Draw__9IGOWidget
class IGOWidget {
public:
    void Draw();
};

void IGOWidget::Draw() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164670)
// 0x00164670 GetDisplay__C9IGOWidget
class IGOWidget {
    bool display;

public:
    bool GetDisplay() const;
};

bool IGOWidget::GetDisplay() const {
    return display;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164608)
// 0x00164608 __9IGOWidget
__asm__(".equ _vt$9IGOWidget, 0x004DB668");

class IGOWidget {
    bool display;

public:
    IGOWidget();
    virtual ~IGOWidget();
};

IGOWidget::IGOWidget() {
    display = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164628)
// 0x00164628 _$_9IGOWidget
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004DB668");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_9IGOWidget");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
