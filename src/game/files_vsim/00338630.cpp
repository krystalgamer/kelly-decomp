class fog_manager {
    char padding[0x1C];
    float specified_fog_table_gamma;
public:
    void set_fog_table_gamma(float value);
};

void fog_manager::set_fog_table_gamma(float value) {
    specified_fog_table_gamma = value;
}
