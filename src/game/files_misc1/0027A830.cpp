class game { char padding[0x224]; int levelid; int beachid; public: void set_beach(int beach); };
void game::set_beach(int beach) { levelid = 31; beachid = beach; }
