# transform__6widgetPfR5colori

- Address: `0x0033F1A8`
- Size: `0xE8` (232 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.1897 | 50.0 | `candidate.cpp` |
| 2 | different | 41.3793 | 17.2414 | `candidate.cpp` |
| 3 | different | 58.1897 | 50.0 | `candidate.cpp` |
| 4 | different | 58.1897 | 50.0 | `candidate.cpp` |
| 5 | different | 58.1897 | 50.0 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact released widget transform emits every functional instruction in target order; only two mtc1-to-conversion FPU hazard zero words are absent from the isolated compiler output.
