# SetInfo__5TrackPCcT1Ui

- Address: `0x00258690`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.8182 | 72.7273 | `candidate.cpp` |
| 2 | different | 81.8182 | 72.7273 | `candidate.cpp` |
| 3 | different | 81.8182 | 72.7273 | `candidate.cpp` |
| 4 | different | 24.0 | 4.0 | `candidate.cpp` |
| 5 | different | 81.8182 | 72.7273 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released Track::SetInfo body and shared Track layout with strcpy. All operations were present, but s1/s2/ra saves and artist/source preservation were scheduled differently.

### Attempt 2 notes

Named the song destination explicitly. Code generation was unchanged.

### Attempt 3 notes

Bound artist/source to their target callee-saved registers without an asm constraint. The compiler retained the same 81.82% schedule.

### Attempt 4 notes

Constrained this/artist/source to s0/s1/s2 through a non-emitting input boundary. This extended lifetimes and caused spills/growth.

### Attempt 5 notes

Restored ordinary locals with explicit member qualification and invalid-ID cast. The original equivalent schedule remained.

## Outcome

Released Track::SetInfo remained blocked by equivalent callee-save and argument scheduling after five source-level attempts.
