# DecValue__16MenuEntryIntEdit

- Address: `0x0023F550`
- Size: `0x6C` (108 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4444 | 7.4074 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 28.3333 | 13.3333 | `candidate.cpp` |
| 4 | different | 87.037 | 81.4815 | `candidate.cpp` |
| 5 | different | 87.037 | 81.4815 | `candidate.cpp` |

## Outcome

Deferred integer menu decrement after five source-faithful candidates; only callee-save prologue scheduling remained different in the closest candidate
