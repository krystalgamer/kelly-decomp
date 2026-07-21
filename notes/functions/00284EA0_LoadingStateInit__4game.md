# LoadingStateInit__4game

- Address: `0x00284EA0`
- Size: `0x40` (64 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 75.0 | `candidate.cpp` |
| 2 | different | 92.1875 | 68.75 | `candidate.cpp` |
| 3 | different | 90.625 | 81.25 | `candidate.cpp` |
| 4 | different | 70.3125 | 31.25 | `candidate.cpp` |
| 5 | different | 92.1875 | 68.75 | `candidate.cpp` |

### Attempt 1 notes

Placing all reset fields first caused one auxiliary-count store to move ahead of the target sequence.

### Attempt 2 notes

The literal released statement order matched all but the start_drawing_map store, which was hoisted ahead of the reset fields.

### Attempt 3 notes

A narrow barrier before start_drawing_map pinned it into the return delay slot rather than the target reset group.

### Attempt 4 notes

Reordering independent assignments to target groups changed the compiler store schedule substantially.

### Attempt 5 notes

Expressing the final false value through the preceding zero field retained the start_drawing_map hoist.

## Outcome

Five source-authentic loading-state initializations could not reproduce the target independent-store schedule.
