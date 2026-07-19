// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0018A370)
// 0x0018A370 OnUp__17SurferBioFrontEndi
class SurferBioFrontEnd { char padding[0x1EC]; bool up_pressed; bool down_pressed; int bio_counter; public: void OnUp(int controller); };
void SurferBioFrontEnd::OnUp(int controller) { up_pressed = true; bio_counter = 3; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0018A388)
// 0x0018A388 OnDown__17SurferBioFrontEndi
class SurferBioFrontEnd { char padding[0x1EC]; bool up_pressed; bool down_pressed; int bio_counter; public: void OnDown(int controller); };
void SurferBioFrontEnd::OnDown(int controller) { down_pressed = true; bio_counter = 3; }
#endif
