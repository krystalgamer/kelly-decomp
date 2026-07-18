class text_parser { char padding[0x44]; char* buffer; char* script_ptr; public: text_parser(); };
text_parser::text_parser() { buffer = 0; script_ptr = 0; }
