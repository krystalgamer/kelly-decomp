# dump_threads__C14script_manager

- Address: `0x00352A70`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.973 | 42.8571 | `candidate.cpp` |
| 2 | different | 48.6486 | 42.8571 | `candidate.cpp` |
| 3 | different | 69.5946 | 85.7143 | `candidate.cpp` |
| 4 | different | 69.5946 | 85.7143 | `candidate.cpp` |
| 5 | different | 69.5946 | 85.7143 | `candidate.cpp` |

## Outcome

Five released-source list-iterator variants reproduced all thread dump calls and traversal, but two target-only loop nops and iterator register scheduling did not match.
