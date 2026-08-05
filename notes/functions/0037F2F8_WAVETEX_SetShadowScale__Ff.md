# WAVETEX_SetShadowScale__Ff

- Address: `0x0037F2F8`
- Size: `0x24` (36 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size36-wave-shadow.cpp` |

### Attempt 1 notes

The exact released expression folds `shadowtexw` to 128 and stores the scaled result in `WAVETEX_camerahowfar`.

## Outcome

The released `WAVETEX_SetShadowScale` implementation matched exactly.
