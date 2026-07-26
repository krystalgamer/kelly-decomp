# _$_19WaveIndicatorWidget

- Address: `0x001672D8`
- Size: `0xC4` (196 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_waveindicator.cpp`
- Reference source: `KS/SRC/ks/igo_widget_waveindicator.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 86.2245 | 77.551 | `candidate.cpp` |
| 3 | different | 88.2653 | 85.7143 | `candidate.cpp` |
| 4 | different | 88.2653 | 85.7143 | `candidate.cpp` |
| 5 | different | 88.2653 | 85.7143 | `candidate.cpp` |

## Outcome

Five attempts reproduced all owned-text destruction at 88.27% byte similarity, but the compiler flattened the final base destructor as a tail call.
