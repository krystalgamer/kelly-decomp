# getNotEnoughRoomString__16GenericGameSaverii

- Address: `0x001E65A8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.9677 | 6.4516 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 22.5806 | 3.2258 | `candidate.cpp` |
| 4 | different | 22.5806 | 3.2258 | `candidate.cpp` |
| 5 | different | 77.4194 | 67.7419 | `candidate.cpp` |

## Outcome

Deferred GenericGameSaver::getNotEnoughRoomString after five source-level attempts; the released card-string temporary, localized format arguments, saved-game size, cleanup, and aggregate return reproduced, but the target variadic temporary and callee-save schedule did not.
