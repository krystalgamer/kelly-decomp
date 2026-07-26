# read__5stashPvi

- Address: `0x00348010`
- Size: `0xC0` (192 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.125 | 41.6667 | `candidate.cpp` |
| 2 | different | 24.4792 | 12.5 | `candidate.cpp` |
| 3 | different | 46.3542 | 35.4167 | `candidate.cpp` |
| 4 | different | 53.125 | 41.6667 | `candidate.cpp` |
| 5 | different | 53.6458 | 43.75 | `candidate.cpp` |

## Outcome

Five source-level attempts recovered the released stash read logic, but register allocation and branch scheduling remained different.
