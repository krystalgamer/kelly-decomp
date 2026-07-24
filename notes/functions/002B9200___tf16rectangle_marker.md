# __tf16rectangle_marker

- Address: `0x002B9200`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/marker.h`
- Reference source: `KS/SRC/marker.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.6471 | 79.4118 | `candidate.cpp` |
| 2 | different | 16.9118 | 0.0 | `candidate.cpp` |
| 3 | different | 17.8571 | 5.7143 | `candidate.cpp` |
| 4 | different | 77.2059 | 67.6471 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released rectangle-marker RTTI helper after five source-level attempts; entity-to-marker-to-rectangle-marker RTTI initialization was reconstructed, but generated high-address register materialization remained different.
