# changePos__7BoxTextff

- Address: `0x00149898`
- Size: `0xB4` (180 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.5556 | 95.5556 | `candidate.cpp` |
| 2 | different | 89.4444 | 77.7778 | `candidate.cpp` |
| 3 | different | 95.5556 | 82.2222 | `candidate.cpp` |
| 4 | different | 95.5556 | 82.2222 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and shared source-faithful BoxText, StringList, nglFileBuf, and aligned nglVector declarations matched all but the order of the two stack-reference argument setup instructions.

### Attempt 2 notes

Constraining only the second adjustCoords reference disrupted the surrounding spill and reload schedule.

### Attempt 3 notes

A right-argument register hint preserved target size but reversed the parameter stack slots.

### Attempt 4 notes

Explicitly ordered source pointers retained the reversed stack-slot assignment.

### Attempt 5 notes

The exact released body matched after applying the established EE compiler normalization for the two independent adjustCoords argument-address instructions.

## Outcome

Matched BoxText position propagation using shared released frontend declarations.
