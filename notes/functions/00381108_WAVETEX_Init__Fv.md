# WAVETEX_Init__Fv

- Address: `0x00381108`
- Size: `0x7C` (124 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.0968 | 0.0 | `candidate.cpp` |
| 2 | different | 75.8065 | 64.5161 | `candidate.cpp` |
| 3 | different | 78.2258 | 70.9677 | `candidate.cpp` |
| 4 | different | 92.7419 | 90.3226 | `candidate.cpp` |
| 5 | different | 96.7742 | 93.5484 | `candidate.cpp` |

## Outcome

Deferred the released wave-texture initialization after five source-level attempts; the closest candidate reached 96.77%, but two base-address setup instructions remained scheduled around the callee-save store.
