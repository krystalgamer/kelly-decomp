# TurnPQ__10DialogMenub

- Address: `0x0019DA00`
- Size: `0xB4` (180 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.8889 | 95.5556 | `candidate.cpp` |
| 2 | different | 98.8889 | 95.5556 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and full released DialogMenu declaration matched all instructions except the bar and box member offsets; the target class contains fewer dialog-entry pointers than the released header snapshot.

### Attempt 2 notes

A three-entry shared DialogMenu layout remained one pointer too large.

### Attempt 3 notes

The released body matched with a two-entry target-build DialogMenu declaration retained once in shared SaveLoad frontend context.

## Outcome

Matched dialog panel visibility toggling using shared released SaveLoad and PanelQuad declarations.
