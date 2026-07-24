# make_instance__C6markerRC9entity_idUi

- Address: `0x0028C048`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/marker.cpp`
- Reference source: `KS/SRC/marker.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 84.375 | `candidate.cpp` |
| 2 | different | 74.2188 | 62.5 | `candidate.cpp` |
| 3 | different | 94.5312 | 84.375 | `candidate.cpp` |
| 4 | different | 96.875 | 93.75 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released marker instance factory after five source-level attempts; the closest candidate matched 124 of 128 bytes, but two prologue save instructions remained reversed.
