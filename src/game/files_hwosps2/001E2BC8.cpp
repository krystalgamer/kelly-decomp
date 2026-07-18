class vert_buf_xformed { void* verts; int max_size; bool locked; bool reserved; public: vert_buf_xformed(); };
vert_buf_xformed::vert_buf_xformed() { verts = 0; max_size = 0; locked = false; reserved = false; }
