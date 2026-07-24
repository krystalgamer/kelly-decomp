# SetFilename__9PanelFileG7stringx

- Address: `0x00152360`
- Size: `0x88` (136 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.7941 | 55.8824 | `candidate.cpp` |
| 2 | different | 67.6471 | 50.0 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 98.5294 | 94.1176 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released panel filename replacement matched after correcting the generated PanelGeom next/vtable offsets while preserving old-ABI by-value string cleanup.

## Outcome

The released panel filename replacement matched exactly on the fifth attempt.
