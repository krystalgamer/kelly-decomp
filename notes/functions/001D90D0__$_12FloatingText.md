# _$_12FloatingText

- Address: `0x001D90D0`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released FloatingText inheritance/declaration and confirmed its empty derived destructor collapses to the established TextString generated destructor: reset the TextString vtable, destroy stringx at offset 4, and handle deleting mode. It matched byte-exactly.

## Outcome

Matched generated FloatingText destructor
