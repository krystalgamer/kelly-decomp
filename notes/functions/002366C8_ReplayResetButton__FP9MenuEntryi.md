# ReplayResetButton__FP9MenuEntryi

- Address: `0x002366C8`
- Size: `0xA8` (168 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 27.381 | 11.9048 | `candidate.cpp` |
| 3 | different | 44.0476 | 19.0476 | `candidate.cpp` |
| 4 | different | 34.5238 | 21.4286 | `candidate.cpp` |
| 5 | different | 60.119 | 50.0 | `candidate.cpp` |

## Outcome

Five released replay-reset variants reproduced random seeding and menu closure but not inlined clock register scheduling.
