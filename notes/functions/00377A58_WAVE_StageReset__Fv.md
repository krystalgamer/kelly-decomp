# WAVE_StageReset__Fv

- Address: `0x00377A58`
- Size: `0xA4` (164 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 51.2195 | 26.8293 | `candidate.cpp` |
| 2 | different | 52.439 | 34.1463 | `candidate.cpp` |
| 3 | different | 51.2195 | 26.8293 | `candidate.cpp` |
| 4 | different | 30.1136 | 6.8182 | `candidate.cpp` |
| 5 | different | 28.0488 | 7.3171 | `candidate.cpp` |

## Outcome

Five released wave-stage variants reproduced all calculations but not original FPU and global-address scheduling.
