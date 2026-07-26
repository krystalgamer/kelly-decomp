# __Q214ScoringManager6SeriesRCQ214ScoringManager6Series

- Address: `0x0026EC68`
- Size: `0xCC` (204 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/scoringmanager.h`
- Reference source: `KS/SRC/ks/scoringmanager.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 29.4118 | 3.9216 | `candidate.cpp` |
| 3 | different | 57.3529 | 37.2549 | `candidate.cpp` |
| 4 | different | 68.6275 | 50.9804 | `candidate.cpp` |
| 5 | different | 68.6275 | 50.9804 | `candidate.cpp` |

## Outcome

The released series copy reached 68.63%, but old-STL list-copy iterator temporaries and stack layout remained irreducible after five source-level attempts.
