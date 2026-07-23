# WAVE_PerturbNext__Fv

- Address: `0x003772C8`
- Size: `0x54` (84 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.7619 | 76.1905 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released WAVE_PerturbNext body, WaveBreakStruct size/type/time offsets, global addresses, and skip/reset helpers. Adding a non-emitting post-reset continuation prevented the final tail call and matched byte-exactly on attempt 2.

## Outcome

Matched released wave perturb advance
