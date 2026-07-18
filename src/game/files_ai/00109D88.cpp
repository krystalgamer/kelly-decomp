class chunk_file;
class stringx;
class ai_locomotion { public: void handle_chunk(chunk_file& file, stringx& label); };
__asm__(".equ handle_chunk__13ai_locomotionR10chunk_fileR7stringx, 0x00108158");
class ai_locomotion_direct : public ai_locomotion { public: void handle_chunk(chunk_file& file, stringx& label); };
void ai_locomotion_direct::handle_chunk(chunk_file& file, stringx& label) {
    ai_locomotion::handle_chunk(file, label);
    __asm__ volatile("");
}
