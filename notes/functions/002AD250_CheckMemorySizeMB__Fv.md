# CheckMemorySizeMB__Fv

- Address: `0x002AD250`
- Size: `0x70` (112 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.2759 | 6.8966 | `candidate.cpp` |
| 2 | different | 25.0 | 7.1429 | `candidate.cpp` |
| 3 | different | 29.4118 | 14.7059 | `candidate.cpp` |
| 4 | different | 21.6667 | 0.0 | `candidate.cpp` |
| 5 | different | 65.1786 | 57.1429 | `candidate.cpp` |

## Outcome

Deferred memory-size detection after five source-level attempts; the released allocation probe and global state reproduced, but the target cross-call global-base register allocation did not.
