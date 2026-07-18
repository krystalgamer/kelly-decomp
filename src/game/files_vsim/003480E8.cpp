struct stash_index { char padding[0x24]; int size; };
class stash { stash_index* index; public: int get_size(); };
int stash::get_size() { return index->size; }
