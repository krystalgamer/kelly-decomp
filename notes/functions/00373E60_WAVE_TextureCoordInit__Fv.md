# WAVE_TextureCoordInit__Fv

- Address: `0x00373E60`
- Size: `0xDC` (220 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.1818 | 9.0909 | `candidate-round1.cpp` |
| 2 | different | 17.2727 | 5.4545 | `candidate-round2.cpp` |
| 3 | different | 14.0909 | 1.8182 | `candidate-round3.cpp` |
| 4 | different | 20.614 | 7.0175 | `candidate-round4.cpp` |
| 5 | different | 12.7273 | 3.6364 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released texture-coordinate initialization with reconstructed WaveDebug, marker, mesh, scale, offset, and speed globals. GCC coalesced three target global bases and produced 208 bytes.

### Attempt 2 notes

Named intermediate mesh dimensions and tile values. Additional common-subexpression elimination reduced the function to 192 bytes.

### Attempt 3 notes

Pinned the scale-U output and a wave-data base register. The constraints changed allocation but still produced only 196 bytes with different floating-point scheduling.

### Attempt 4 notes

Made mesh dimensions volatile to prevent base coalescing. Stack traffic expanded the function to 228 bytes without reproducing the target register plan.

### Attempt 5 notes

Kept local scale and marker values to preserve repeated uses. GCC again coalesced globals and emitted a 200-byte body; the exact 220-byte global-base schedule remained unrecovered.

## Outcome

Deferred after five source-level attempts. All texture-scale, marker-offset, and scroll-speed calculations and globals were recovered, but EE GCC consistently coalesced several target global base registers and emitted a shorter schedule.
