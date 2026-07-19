// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0028A1E0)
// 0x0028A1E0 check_for_pickup__4item
class item {
public:
    bool check_for_pickup();
};

bool item::check_for_pickup() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028A678)
// 0x0028A678 is_picked_up__4item
class item {
    char padding[0x220];
    bool picked_up;
public:
    bool is_picked_up();
};

bool item::is_picked_up() {
    return picked_up;
}
#endif
