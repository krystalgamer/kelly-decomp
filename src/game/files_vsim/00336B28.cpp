class chunk_flavor {
    char flavor[1];
public:
    const char* c_str() const;
};

const char* chunk_flavor::c_str() const {
    return flavor;
}
