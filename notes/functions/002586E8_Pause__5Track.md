# Pause__5Track

- Address: `0x002586E8`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `MusicMan.cpp:62-67` body and extended the shared
released Track declaration with its complete public method surface.

## Outcome

Matched conditional sound pausing and the paused-state update byte-for-byte.
