// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D4F30)
// 0x001D4F30 SwitchPages__14AccompFrontEndb
class AccompFrontEnd {
    char padding[0x168];
    int cur_page;

    void UpdatePhotos();

public:
    void SwitchPages(bool right);
};

__asm__(".equ UpdatePhotos__14AccompFrontEnd, 0x001D4A98");

void AccompFrontEnd::SwitchPages(bool right)
{
    if (right)
        ++cur_page;
    else
        --cur_page;
    UpdatePhotos();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
