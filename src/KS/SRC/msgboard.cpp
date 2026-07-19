// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002CED28)
// 0x002CED28 __13message_board
class message_vector { void *begin_; void *end_; void *capacity_; public: message_vector() : begin_(0), end_(0), capacity_(0) {} };
class message_board { message_vector messages; public: message_board(); };
message_board::message_board() { volatile int unused; }
#endif
