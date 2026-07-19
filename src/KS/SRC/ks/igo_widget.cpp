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
