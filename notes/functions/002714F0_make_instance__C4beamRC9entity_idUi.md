# make_instance__C4beamRC9entity_idUi

- Address: `0x002714F0`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 80.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 83.3333 | 80.0 | `candidate.cpp` |
| 4 | different | 78.3333 | 73.3333 | `candidate.cpp` |
| 5 | different | 85.0 | 80.0 | `candidate.cpp` |

## Outcome

Deferred beam::make_instance after five source-level attempts; the released allocation, constructor, copy, and return reproduced, but six target call-argument and prologue scheduling instructions did not.
