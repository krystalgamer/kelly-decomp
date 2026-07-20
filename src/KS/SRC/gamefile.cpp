// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002889E0)
// 0x002889E0 __Q210gamefile_t11file_info_t
class gamefile_t { public: class file_info_t { char sublevel[24]; int slot_num; public: file_info_t(); }; };
gamefile_t::file_info_t::file_info_t() { sublevel[0] = 0; slot_num = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002889B0)
// 0x002889B0 __Q210gamefile_t10cur_data_t
class gamefile_t { public: class cur_data_t { unsigned short version_num; unsigned char field2; unsigned char field3; char heroname0[16]; char heroname1[16]; int initialized; public: cur_data_t(); }; };
gamefile_t::cur_data_t::cur_data_t() { version_num = 1001; heroname0[0] = 0; heroname1[0] = 0; field2 = 0; field3 = 0; initialized = 0; }
#endif
