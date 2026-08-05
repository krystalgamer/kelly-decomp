#ifndef GAMEFILE_H
#define GAMEFILE_H

class gamefile_t {
public:
    class cur_data_t {
    protected:
        unsigned short version_num;
        unsigned char load_seq_index;
        unsigned char sublevel_index;
        char heroname[2][16];
        bool hero_data_valid;

    public:
        cur_data_t();
        ~cur_data_t() {}
        void init() {
            load_seq_index = 0;
            sublevel_index = 0;
            hero_data_valid = false;
        }
    };

    class file_info_t {
        char sublevel[24];
        int slot_num;

    public:
        file_info_t();
    };
};

#endif
