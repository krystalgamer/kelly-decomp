# _$_14ScoringManager

- Address: `0x00246CA0`
- Size: `0x84` (132 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.2121 | 60.6061 | `candidate.cpp` |
| 2 | different | 89.3939 | 84.8485 | `candidate.cpp` |
| 3 | different | 80.303 | 78.7879 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 89.3939 | 84.8485 | `candidate.cpp` |

## Outcome

Deferred the released scoring-manager destructor after five source-level attempts; both series-list cleanups, allocator returns, vtable reset, and base teardown were reproduced, but prologue scheduling remained different.
