# OnR1__17PlaylistMenuClassi

- Address: `0x001B0358`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 87.5 | 87.5 | `001B0358.cpp` |
| 3 | different | 87.5 | 87.5 | `size64-playlist-r1-base.cpp` |

### Attempt 1 notes

The released active-state wrapper and virtual down dispatch match with the same narrow scheduling barrier as OnL1.

### Attempt 2 notes

The clean shared wrapper preserves behavior and size but moves the `this`
copy before the return-address save.

### Attempt 3 notes

Dispatching through an explicit shared `FEMenu` base retains the same prologue
schedule.

## Outcome

The matching-only scheduling barrier and manual vtable layout were removed,
and the wrapper was deferred.
