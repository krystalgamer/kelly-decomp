// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016EE38)
// 0x0016EE38 clear__13IGOPrintQueue
class IGOPrintQueue { char padding[0xC0]; int start; int end; unsigned char size; public: void clear(); };
void IGOPrintQueue::clear() { start = end = size = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017C1A8)
// 0x0017C1A8 OnScoreChange__11IGOFrontEndi
class IGOFrontEnd {
public:
    void OnScoreChange(int player_index);
};

void IGOFrontEnd::OnScoreChange(int player_index) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CEB0)
// 0x0017CEB0 IsPhotoShown__C11IGOFrontEnd
class PhotoWidget { char padding[0x18]; int shown; public: bool IsShown() const { return shown; } };
class IGOFrontEnd { char padding[0x5ac]; PhotoWidget *photoWidget; public: bool IsPhotoShown() const; };
bool IGOFrontEnd::IsPhotoShown() const { return photoWidget && photoWidget->IsShown(); }
#endif
