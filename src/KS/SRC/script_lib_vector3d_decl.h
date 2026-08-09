#ifndef SCRIPT_LIB_VECTOR3D_DECL_H
#define SCRIPT_LIB_VECTOR3D_DECL_H

class chunk_file;

class slc_vector3d_t {
public:
    void read_value(chunk_file &file, char *buffer);
};

#endif
