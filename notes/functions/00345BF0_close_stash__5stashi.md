# close_stash__5stashi

- Address: `0x00345BF0`
- Size: `0x74` (116 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 44.1667 | 30.0 | `candidate.cpp` |
| 2 | different | 36.2903 | 19.3548 | `candidate.cpp` |
| 3 | different | 51.7241 | 37.931 | `candidate.cpp` |
| 4 | different | 82.7586 | 72.4138 | `candidate.cpp` |
| 5 | different | 29.3103 | 10.3448 | `candidate.cpp` |

## Outcome

Deferred stash closing after five source-level attempts; the released option check, diagnostics, indexed substash addressing, and close call reproduced, but the target multiply/address register allocation did not.
