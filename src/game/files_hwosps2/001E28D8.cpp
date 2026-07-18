class vert_buf;

class hw_rasta {
public:
    void send_indexed_vertex_list(const vert_buf& buf, int num_verts, const unsigned short* indices, int num_indices, unsigned int flags);
};

void hw_rasta::send_indexed_vertex_list(const vert_buf& buf, int num_verts, const unsigned short* indices, int num_indices, unsigned int flags) {
}
