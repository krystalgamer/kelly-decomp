class SurferBioFrontEnd { char padding[0x1EC]; bool up_pressed; bool down_pressed; int bio_counter; public: void OnUp(int controller); };
void SurferBioFrontEnd::OnUp(int controller) { up_pressed = true; bio_counter = 3; }
