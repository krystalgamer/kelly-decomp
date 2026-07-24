# __tft11WaveScratch1Zt12SplineData2D1i16

- Address: `0x00384010`
- Size: `0x78` (120 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 15.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred WaveScratch<SplineData2D<16>> RTTI generation after five source-level attempts; the released WaveScratchBase inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
