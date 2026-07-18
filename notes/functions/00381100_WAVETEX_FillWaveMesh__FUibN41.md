# WAVETEX_FillWaveMesh__FUibN41

- Address: `0x00381100`
- Size: `0x8` (8 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released wave-mesh fill hook has an empty body. The isolated compiler spelled the repeated bool parameters explicitly, so a GNU asm label preserves the target's equivalent compact `N41` repetition encoding.

## Outcome

The released empty `WAVETEX_FillWaveMesh` function matched on the second attempt using a documented asm-label bridge for the old-GCC repeated-bool mangling.
