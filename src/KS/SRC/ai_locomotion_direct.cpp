// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001095C0)
// 0x001095C0 copy__20ai_locomotion_directP20ai_locomotion_direct
class ai_locomotion { public: void copy(ai_locomotion* other); };
__asm__(".equ copy__13ai_locomotionP13ai_locomotion, 0x00106F18");
class ai_locomotion_direct : public ai_locomotion { public: void copy(ai_locomotion_direct* other); };
void ai_locomotion_direct::copy(ai_locomotion_direct* other) {
    ai_locomotion::copy((ai_locomotion*)other);
    __asm__ volatile("");
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00109D88)
// 0x00109D88 handle_chunk__20ai_locomotion_directR10chunk_fileR7stringx
class chunk_file;
class stringx;
class ai_locomotion { public: void handle_chunk(chunk_file& file, stringx& label); };
__asm__(".equ handle_chunk__13ai_locomotionR10chunk_fileR7stringx, 0x00108158");
class ai_locomotion_direct : public ai_locomotion { public: void handle_chunk(chunk_file& file, stringx& label); };
void ai_locomotion_direct::handle_chunk(chunk_file& file, stringx& label) {
    ai_locomotion::handle_chunk(file, label);
    __asm__ volatile("");
}
#endif
