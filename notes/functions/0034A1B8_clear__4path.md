# clear__4path

- Address: `0x0034A1B8`
- Size: `0x78` (120 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.3333 | 73.3333 | `candidate.cpp` |
| 2 | different | 25.0 | 11.7647 | `candidate.cpp` |
| 3 | different | 95.0 | 80.0 | `candidate.cpp` |
| 4 | different | 70.1613 | 51.6129 | `candidate.cpp` |
| 5 | different | 89.1667 | 73.3333 | `candidate.cpp` |

## Outcome

Deferred path::clear after five source-level attempts; the released vector resize branches and path field resets reproduced at 95%, but the target count register and final store scheduling did not.
