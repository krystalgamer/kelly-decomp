# getPercentage__13PreformatText

- Address: `0x0014C918`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.0 | 60.0 | `size40-frontend-core.cpp` |
| 2 | different | 55.0 | 40.0 | `size40-frontend-variants-2.cpp` |
| 3 | different | 65.0 | 60.0 | `size40-frontend-variants-3.cpp` |

## Outcome

Across three native forms, the ordinary percentage calculations omit the target pipeline NOP. The closest candidate is 36 bytes
rather than the target 40 bytes, so the matching-only implementation was
removed and the target function was deferred.
