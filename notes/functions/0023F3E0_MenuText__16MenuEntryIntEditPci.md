# MenuText__16MenuEntryIntEditPci

- Address: `0x0023F3E0`
- Size: `0xF4` (244 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 88.9344 | 95.082 | `candidate.cpp` |
| 3 | different | 88.9344 | 95.082 | `candidate.cpp` |
| 4 | different | 88.9344 | 95.082 | `candidate.cpp` |
| 5 | different | 88.9344 | 95.082 | `candidate.cpp` |

## Outcome

Exact released logic confirmed; five bounded source-only attempts did not reproduce the target instruction scheduling.
