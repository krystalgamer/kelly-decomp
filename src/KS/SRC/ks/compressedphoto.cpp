// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00262A38)
// 0x00262A38 Reset__15CompressedPhoto
class CompressedPhoto { char padding[0x2000]; int size; bool valid; public: void Reset(); };
void CompressedPhoto::Reset() { size = 0x2000; valid = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262A08)
// 0x00262A08 __15CompressedPhoto
class CompressedPhoto { public: CompressedPhoto(); void Reset(); };
__asm__(".equ Reset__15CompressedPhoto, 0x00262A38");
CompressedPhoto::CompressedPhoto() { Reset(); }
#endif
