# CheckConsistency__C4Heap

- Address: `0x002AB830`
- Size: `0xC4` (196 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.6327 | 17.9487 | `candidate.cpp` |
| 2 | different | 58.1633 | 17.9487 | `candidate.cpp` |
| 3 | different | 58.1633 | 17.9487 | `candidate.cpp` |
| 4 | different | 54.5918 | 15.3846 | `candidate.cpp` |
| 5 | different | 47.9592 | 4.878 | `candidate.cpp` |

## Outcome

Five attempts recovered the heap traversal and checks, but release-only assertion nops and literal scheduling did not reproduce.
