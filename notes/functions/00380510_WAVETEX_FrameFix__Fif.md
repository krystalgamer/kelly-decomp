# WAVETEX_FrameFix__Fif

- Address: `0x00380510`
- Size: `0xA0` (160 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.25 | 55.5556 | `candidate.cpp` |
| 2 | different | 66.25 | 55.5556 | `candidate.cpp` |
| 3 | different | 66.875 | 55.5556 | `candidate.cpp` |
| 4 | different | 66.25 | 55.5556 | `candidate.cpp` |
| 5 | different | 70.625 | 63.8889 | `candidate.cpp` |

## Outcome

Five released frame-wrap variants reproduced the logic but not target-only FPU hazard padding and branch-likely scheduling.
