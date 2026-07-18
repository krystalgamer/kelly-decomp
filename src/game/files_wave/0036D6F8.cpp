extern bool underwater_camera_reset;
__asm__(".equ underwater_camera_reset, 0x00484568");
void UNDERWATER_CameraReset() { underwater_camera_reset = true; }
