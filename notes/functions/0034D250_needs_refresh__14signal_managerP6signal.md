# needs_refresh__14signal_managerP6signal

- Address: `0x0034D250`
- Size: `0x4C` (76 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.1053 | 10.5263 | `candidate.cpp` |
| 2 | different | 17.1053 | 10.5263 | `candidate.cpp` |
| 3 | different | 39.2857 | 9.5238 | `candidate.cpp` |
| 4 | different | 48.8095 | 28.5714 | `candidate.cpp` |
| 5 | different | 51.3158 | 36.8421 | `candidate.cpp` |

## Outcome

Used immutable signal.cpp needs_refresh and reconstructed the historical three-pointer vector behavior. The simplified inline declaration remained out-of-line; direct and placement-construction variants changed branching/scheduling. Deferred after five source-only attempts pending exact GCC vector context.
