# set_active__6regionb

- Address: `0x002E8118`
- Size: `0x84` (132 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.7273 | 3.0303 | `candidate.cpp` |
| 2 | different | 85.6061 | 78.7879 | `candidate.cpp` |
| 3 | different | 94.697 | 93.9394 | `candidate.cpp` |
| 4 | different | 94.697 | 93.9394 | `candidate.cpp` |
| 5 | different | 24.3056 | 2.7778 | `candidate.cpp` |

## Outcome

Deferred the released region activation propagation after five source-level attempts; flag updates and old-STL thread iteration were reconstructed, but two boolean scheduling instructions remained different.
