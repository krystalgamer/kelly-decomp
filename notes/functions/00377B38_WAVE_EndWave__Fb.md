# WAVE_EndWave__Fb

- Address: `0x00377B38`
- Size: `0xC4` (196 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.4286 | 57.1429 | `candidate.cpp` |
| 2 | different | 69.3878 | 53.0612 | `candidate.cpp` |
| 3 | different | 71.9388 | 57.1429 | `candidate.cpp` |
| 4 | different | 71.9388 | 57.1429 | `candidate.cpp` |
| 5 | different | 60.7143 | 44.898 | `candidate.cpp` |

## Outcome

Five attempts recovered the wave-ending state machine, but one FP compare nop and global scheduling difference remained.
