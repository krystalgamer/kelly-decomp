# WAVE_ClearBreakArray__Fv

- Address: `0x00376BE8`
- Size: `0x6C` (108 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.6667 | 3.7037 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the eight 268-byte break records, numbreak/list offsets, memset size, and global max reset. Fixed loop registers and the memset address matched on attempt 2.

## Outcome

Matched wave break array clearing
