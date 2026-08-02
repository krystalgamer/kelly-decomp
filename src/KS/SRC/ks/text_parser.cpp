// Matching decompilation blocks selected by generated build shims.


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

#if defined(KELLY_DECOMP_FUNCTION_00242F30)
// 0x00242F30 load_file__11text_parserR7stringx
struct stringx{char*data;char pad[4];const char*c_str()const{return data;}};extern "C" int readfile(const char*,unsigned char**,unsigned*,int,int)__asm__("wds_readfile__21world_dynamics_systemPCcPPUcPUiii");class text_parser{public:char token[65];char pad[3];char*buffer;char*script_ptr;char last_val;char pad2[3];char*last_val_pos;int script_line;void cleanup()__asm__("cleanup__11text_parser");bool load_file(stringx&)__asm__("load_file__11text_parserR7stringx");};__asm__(".equ cleanup__11text_parser,0x00242EF0");__asm__(".equ wds_readfile__21world_dynamics_systemPCcPPUcPUiii,0x00294AC8");bool text_parser::load_file(stringx&filename){last_val_pos=0;cleanup();script_line=1;unsigned file_size;if(!readfile(filename.c_str(),(unsigned char**)&buffer,&file_size,1,1)){cleanup();return false;}script_ptr=buffer;last_val=buffer[file_size];last_val_pos=&buffer[file_size];buffer[file_size]='\0';return true;}
#endif
