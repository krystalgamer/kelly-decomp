enum WaveMarkerEnum { WAVE_MARKER_ZERO };
struct WaveMarker { char data[32]; };
extern WaveMarker wave_markers[];
__asm__(".equ wave_markers, 0x0058BC70");
WaveMarker* WAVE_GetMarker(WaveMarkerEnum marker) { return &wave_markers[marker]; }
