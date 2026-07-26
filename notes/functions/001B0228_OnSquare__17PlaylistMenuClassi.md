# OnSquare__17PlaylistMenuClassi

- Address: `0x001B0228`
- Size: `0xE4` (228 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.0 | 71.6667 | `candidate-round1.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-round2.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate-3-consolidated.cpp` |

### Attempt 1 notes

Used the exact released body and authentic playlist, music, sound, and developer-option layouts. GCC converted the final playNext call to a sibling jump and emitted a larger duplicated epilogue.

### Attempt 2 notes

Added a zero-instruction barrier after playNext to preserve the target normal call and shared epilogue. This matched all 228 bytes and 57 instructions.

### Attempt 3 notes

Revalidated the exact match after adding OnSquare, getCurrent, and playNext to the existing PlaylistMenu shared declarations and normalizing the barrier macro.

## Outcome

Matched the released playlist square-button logic using the existing frontend/music shared context and a documented zero-instruction barrier that preserves the target playNext call and shared epilogue.
