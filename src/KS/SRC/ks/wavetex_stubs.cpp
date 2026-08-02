// Final-build wave texture helpers.

// 0x00380500 WAVETEX_Width__Fii
unsigned int WAVETEX_Width(int texture_type, int frame)
{
    return 128;
}

// 0x00380508 WAVETEX_Height__Fii
unsigned int WAVETEX_Height(int texture_type, int frame)
{
    return 128;
}

// 0x00380D98 WAVETEX_SetMatPlayerShadows__Fbi
void WAVETEX_SetMatPlayerShadows(bool enabled, int material)
{
}

// 0x003810E8 WAVETEX_CloseWaveMesh__Fv
void WAVETEX_CloseWaveMesh()
{
}
