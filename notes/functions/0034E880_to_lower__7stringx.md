# to_lower__7stringx

- Address: `0x0034E880`
- Size: `0x90` (144 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.6579 | 34.2105 | `candidate.cpp` |
| 2 | different | 83.3333 | 77.7778 | `candidate.cpp` |
| 3 | different | 42.1053 | 28.9474 | `candidate.cpp` |
| 4 | different | 44.375 | 32.5 | `candidate.cpp` |
| 5 | different | 83.3333 | 77.7778 | `candidate.cpp` |

## Outcome

Five released-body candidates could not reproduce the target ctype-table setup placement while preserving the branchless character conversion loop; the best reached 83.33% byte score.
