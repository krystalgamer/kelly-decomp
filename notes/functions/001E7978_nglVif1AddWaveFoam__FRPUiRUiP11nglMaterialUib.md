# nglVif1AddWaveFoam__FRPUiRUiP11nglMaterialUib

- Address: `0x001E7978`
- Size: `0x44` (68 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_waverender.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_waverender.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 9.2105 | 2.6316 | `candidate.cpp` |
| 3 | different | 26.1905 | 19.0476 | `candidate.cpp` |
| 4 | different | 97.0588 | 100.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Used the exact released wrapper and the exact NGL inline helper. Casting the microprogram pointers to u_int restores the released unsigned address arithmetic; isolated aliases then resolve the authentic relocation addends exactly.

## Outcome

The released wave foam command-list wrapper matches exactly with the original NGL program helper.
