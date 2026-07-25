# Draw__16SplitMeterWidget

- Address: `0x0016BFE0`
- Size: `0x9C` (156 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.0769 | 92.3077 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Restored the released SplitMeterWidget drawing loop with the exact IGO base and PanelQuad virtual-table layouts.

## Outcome

Matched split meter drawing
