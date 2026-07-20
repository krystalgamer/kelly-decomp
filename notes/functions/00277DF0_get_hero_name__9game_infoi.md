# get_hero_name__9game_infoi

- Address: `0x00277DF0`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.75 | 66.6667 | `candidate.cpp` |
| 2 | different | 66.6667 | 58.3333 | `candidate.cpp` |
| 3 | different | 68.75 | 66.6667 | `candidate.cpp` |
| 4 | different | 33.3333 | 16.6667 | `candidate.cpp` |
| 5 | different | 34.375 | 12.5 | `candidate.cpp` |

### Attempt 1 notes

The direct switch reproduced both valid hero-name returns, but EE GCC folded
the unreachable default into a direct null return and emitted 40 bytes. Best
byte score: 68.75%.

### Attempt 2 notes

Separating the default behind a label and non-emitting boundary still allowed
the compiler to collapse the default block.

### Attempt 3 notes

Explicit conditional gotos preserved the two case branches but again folded
the invalid path to a direct return.

### Attempt 4 notes

A common result pointer collapsed to a 32-byte branchless selection.

### Attempt 5 notes

A volatile result pointer forced stack traffic and expanded the function to 64
bytes without preserving the target default branch block.

## Outcome

Five source layouts could not preserve the target unreachable default branch block; best byte score was 68.75%.
