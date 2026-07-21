// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00242E98)
// 0x00242E98 __11text_parser
class text_parser { char padding[0x44]; char* buffer; char* script_ptr; public: text_parser(); };
text_parser::text_parser() { buffer = 0; script_ptr = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00242EF0)
// 0x00242EF0 cleanup__11text_parser
extern void wds_releasefile(unsigned char **) __asm__("wds_releasefile__21world_dynamics_systemPPUc");
asm(".equ wds_releasefile__21world_dynamics_systemPPUc, 0x00294CF0");
class text_parser { char padding[0x44]; unsigned char *buffer; unsigned char *script_ptr; unsigned char last_val; char padding2[3]; unsigned char *last_val_pos; public: void cleanup(); };
void text_parser::cleanup()
{
    if (last_val_pos)
        *last_val_pos = last_val;
    wds_releasefile(&buffer);
    script_ptr = 0;
}
#endif
