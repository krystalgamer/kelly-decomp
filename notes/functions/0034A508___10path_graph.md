# __10path_graph

- Address: `0x0034A508`
- Size: `0x64` (100 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.0 | 20.0 | `candidate.cpp` |
| 2 | different | 32.6923 | 7.6923 | `candidate.cpp` |
| 3 | different | 96.0 | 84.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact path_graph string/vector/warning/vtable layout. Preserving frame size while forcing vector store order matched on attempt 4.

## Outcome

Matched path graph constructor
