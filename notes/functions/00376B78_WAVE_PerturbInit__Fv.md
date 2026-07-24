# WAVE_PerturbInit__Fv

- Address: `0x00376B78`
- Size: `0x6C` (108 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.7778 | 74.0741 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the six wave object destructors, pulse initializer, and partition initializer. Preventing the final tail call matched on attempt 2.

## Outcome

Matched wave perturb initialization
