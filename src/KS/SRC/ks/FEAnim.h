// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DA3A0)
// 0x001DA3A0 Kind__C17PanelAnimInstance
enum PanelAnimKind {
    AnimInstance = 0xA1
};

class PanelAnimInstance {
public:
    PanelAnimKind Kind() const;
};

PanelAnimKind PanelAnimInstance::Kind() const {
    return AnimInstance;
}
#endif
