# WAVE_PerturbSkipBlanks__Fv

- Address: `0x00377320`
- Size: `0x4C` (76 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.1579 | 31.25 | `candidate.cpp` |
| 2 | different | 68.4211 | 18.75 | `candidate.cpp` |
| 3 | different | 69.7368 | 18.75 | `candidate.cpp` |
| 4 | different | 69.7368 | 18.75 | `candidate.cpp` |
| 5 | different | 26.3158 | 5.8824 | `candidate.cpp` |

## Outcome

Used immutable wave.cpp WAVE_PerturbSkipBlanks and exact WaveBreakStruct/global declarations. Direct source stored globals each iteration; local-state variants retained values but differed in registers and pointer scheduling. Deferred after five source-only attempts.
