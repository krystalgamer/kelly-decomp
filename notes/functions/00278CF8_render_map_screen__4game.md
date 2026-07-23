# render_map_screen__4game

- Address: `0x00278CF8`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.4286 | 38.0952 | `candidate.cpp` |
| 2 | different | 46.4286 | 38.0952 | `candidate.cpp` |
| 3 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 4 | different | 50.0 | 40.9091 | `candidate.cpp` |
| 5 | different | 90.4762 | 90.4762 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released render_map_screen body with the exact game loading-field offsets, FEManager global, DrawMap, and LoadingProgressUpdate declarations. The released tree omits the target else-path and compiled to a tail call.

### Attempt 2 notes

Added the target-observed render_black_screen else-path while preserving released behavior. Both final calls were tail-called and the branch layout remained different.

### Attempt 3 notes

Added a non-emitting continuation barrier after the conditional to prevent tail calls. This reached 95.24%; only duplicated return-address load scheduling differed.

### Attempt 4 notes

Moved the continuation barrier into the black-screen branch. The draw-map path remained a tail call and grew to 88 bytes.

### Attempt 5 notes

Placed non-emitting continuation barriers after both final calls. Size matched, but the compiler selected an equivalent common-epilogue schedule rather than the target duplicated return-address loads.

## Outcome

Released render_map_screen plus the target-observed black-screen path remained blocked by equivalent epilogue scheduling after five source-level attempts.
