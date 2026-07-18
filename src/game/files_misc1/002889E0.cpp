class gamefile_t { public: class file_info_t { char sublevel[24]; int slot_num; public: file_info_t(); }; };
gamefile_t::file_info_t::file_info_t() { sublevel[0] = 0; slot_num = -1; }
