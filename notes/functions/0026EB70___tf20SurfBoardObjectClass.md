# __tf20SurfBoardObjectClass

- Address: `0x0026EB70`
- Size: `0x40` (64 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/board.h`
- Reference source: `KS/SRC/ks/board.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `type-info-1.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `type-info-2.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `type-info-3.cpp` |

## Outcome

Three native C++ type-info forms could not emit the legacy compiler helper symbol; the hand-written extern-C RTTI wrapper was removed from board.h.
