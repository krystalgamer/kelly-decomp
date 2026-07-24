# path_graph_system_destruct__Fv

- Address: `0x00349C40`
- Size: `0x88` (136 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `candidate.cpp` |
| 2 | different | 76.9737 | 71.0526 | `candidate.cpp` |
| 3 | different | 97.0588 | 94.1176 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released path-graph workspace teardown matched after retaining the vector begin pointer and loading capacity before begin in the generated deallocation path.

## Outcome

The released path-graph workspace teardown matched exactly on the fourth attempt.
