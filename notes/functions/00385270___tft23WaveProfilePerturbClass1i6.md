# __tft23WaveProfilePerturbClass1i6

- Address: `0x00385270`
- Size: `0x88` (136 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.6471 | 79.4118 | `candidate.cpp` |
| 2 | different | 16.1765 | 0.0 | `candidate.cpp` |
| 3 | different | 17.8571 | 5.7143 | `candidate.cpp` |
| 4 | different | 77.2059 | 67.6471 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released wave-profile perturb RTTI helper after five source-level attempts; template base and derived RTTI initialization were reconstructed, but generated high-address register materialization remained different.
