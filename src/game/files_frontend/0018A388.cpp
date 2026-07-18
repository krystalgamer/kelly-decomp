class SurferBioFrontEnd { char padding[0x1EC]; bool up_pressed; bool down_pressed; int bio_counter; public: void OnDown(int controller); };
void SurferBioFrontEnd::OnDown(int controller) { down_pressed = true; bio_counter = 3; }
