# link__13script_objectRC14script_manager

- Address: `0x00350F80`
- Size: `0x64` (100 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.0 | 4.0 | `candidate.cpp` |
| 2 | different | 50.0 | 28.0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 50.0 | 28.0 | `candidate.cpp` |
| 5 | different | 24.0 | 4.0 | `candidate.cpp` |

## Outcome

Released script executable vector traversal was reconstructed across five candidates, but retained-vector pointer, prologue, and load-delay scheduling did not match.
