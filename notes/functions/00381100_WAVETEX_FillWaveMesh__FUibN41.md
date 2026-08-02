# WAVETEX_FillWaveMesh__FUibN41

- Address: `0x00381100`
- Size: `0x8` (8 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `fill-1.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `fill-2.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `fill-3.cpp` |

## Outcome

Three native six-argument declarations emitted repeated-type mangling instead of the legacy N41 form; the asm-named wrapper was removed.
