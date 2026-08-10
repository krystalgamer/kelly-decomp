# _$_9BurstText

- Address: `0x001D8E08`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released BurstText inheritance/declaration and confirmed its empty derived destructor collapses to the established TextString generated destructor: reset the TextString vtable, destroy stringx at offset 4, and handle deleting mode. It matched byte-exactly.

## Outcome

The handwritten compiler-generated destructor was removed and the shipped
wrapper was deferred.
