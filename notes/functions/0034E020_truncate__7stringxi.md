# truncate__7stringxi

- Address: `0x0034E020`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.1622 | 2.7027 | `candidate.cpp` |
| 2 | different | 12.1622 | 2.7027 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 36.1111 | 13.3333 | `candidate.cpp` |
| 5 | different | 20.0 | 0.0 | `candidate.cpp` |

## Outcome

Five released and flattened truncation variants reproduced copy-on-write, block sizing, zero fill, and chars refresh, but helper inlining and signed division/register scheduling did not match.
