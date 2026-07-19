// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DBE98)
// 0x001DBE98 GetButton__12ReplayWidget
class ReplayWidget {
    char padding[0x8];
    int vcrButton;
public:
    int GetButton();
};

int ReplayWidget::GetButton() {
    return vcrButton;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DBEA0)
// 0x001DBEA0 GetHighlight__12ReplayWidget
class ReplayWidget {
    char padding[0xC];
    int vcrButtonHL;
public:
    int GetHighlight();
};

int ReplayWidget::GetHighlight() {
    return vcrButtonHL;
}
#endif
