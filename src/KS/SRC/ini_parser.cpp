// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ini_parser_shared.h"

#if defined(KELLY_DECOMP_FUNCTION_0030D338)
// 0x0030D338 unget_token__10ini_parser
void ini_parser::unget_token() { stored_token = 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030D348)
// 0x0030D348 new_line__10ini_parserPc
void ini_parser::new_line(char *curr_line)
{
    scan_pos = 0;
    line = curr_line;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030D030)
// 0x0030D030 despacify_token__10ini_parserPc
void ini_parser::despacify_token(char *curr_token)
{
    int i;
    for (i = strlen(curr_token) - 1; i >= 0; --i)
    {
        if (ctype_table[(signed char)curr_token[i]] & 8)
            curr_token[i] = '\0';
        else
            break;
    }
}
#endif
