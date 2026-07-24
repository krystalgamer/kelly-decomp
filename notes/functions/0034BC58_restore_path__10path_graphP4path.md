# restore_path__10path_graphP4path

- Address: `0x0034BC58`
- Size: `0x7C` (124 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 49.1935 | 29.0323 | `candidate.cpp` |
| 2 | different | 31.4516 | 12.9032 | `candidate.cpp` |
| 3 | different | 51.5625 | 34.375 | `candidate.cpp` |
| 4 | different | 96.7742 | 93.5484 | `candidate.cpp` |
| 5 | different | 46.875 | 28.125 | `candidate.cpp` |

## Outcome

Deferred the released path restoration loop after five source-level attempts; the closest candidate reached 96.77%, but the loop-back branch-likely and delay-slot node load could not coexist with the required end-pointer reload.
