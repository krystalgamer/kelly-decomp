# compute_boost_for_play__10frame_infoi

- Address: `0x00338728`
- Size: `0x54` (84 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/frame_info.cpp`
- Reference source: `KS/SRC/frame_info.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released frame_info field declaration, static frame-rate symbol, and compute_boost_for_play body including integer remainder, negative correction, and unlock. It matched byte-exactly.

## Outcome

Matched released frame_info boost computation
