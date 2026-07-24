# __7stringxi

- Address: `0x0034D5C0`
- Size: `0x74` (116 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.931 | 86.2069 | `candidate.cpp` |
| 2 | different | 90.5172 | 89.6552 | `candidate.cpp` |
| 3 | different | 99.1379 | 96.5517 | `candidate.cpp` |
| 4 | different | 99.1379 | 96.5517 | `candidate.cpp` |
| 5 | different | 99.1379 | 96.5517 | `candidate.cpp` |

## Outcome

Deferred integer string construction after five source-level attempts; every released operation and register schedule reproduced except the target used addiu rather than ori for the positive format-string low half.
