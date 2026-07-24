# MainEntityRegion__8KSReplayi

- Address: `0x0023CD60`
- Size: `0x78` (120 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.1667 | 20.0 | `candidate.cpp` |
| 2 | different | 84.1667 | 76.6667 | `candidate.cpp` |
| 3 | different | 96.6667 | 86.6667 | `candidate.cpp` |
| 4 | different | 84.1667 | 76.6667 | `candidate.cpp` |
| 5 | different | 97.5 | 90.0 | `candidate.cpp` |

## Outcome

Deferred KSReplay::MainEntityRegion after five source-level attempts; the released region logic plus the target dry-state guard reproduced at 97.5%, but the final conditional-move register selection did not.
