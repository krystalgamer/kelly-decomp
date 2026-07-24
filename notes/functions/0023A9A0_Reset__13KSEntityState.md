# Reset__13KSEntityState

- Address: `0x0023A9A0`
- Size: `0x64` (100 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.6667 | 22.2222 | `candidate.cpp` |
| 2 | different | 60.0 | 60.0 | `candidate.cpp` |
| 3 | different | 76.0 | 76.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the chained flag/bitfield resets and reconstructed the exact masks, fixed registers, and pipelined scheduling. It matched on attempt 4.

## Outcome

Matched replay entity state reset
