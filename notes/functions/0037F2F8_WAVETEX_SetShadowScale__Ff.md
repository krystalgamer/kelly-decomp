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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter converts the supplied scale by the fixed 15-by-0.5 factor and stores the global result.

## Outcome

The released `WAVETEX_SetShadowScale` implementation matched exactly.
