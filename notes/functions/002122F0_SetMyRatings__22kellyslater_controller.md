# SetMyRatings__22kellyslater_controller

- Address: `0x002122F0`
- Size: `0xEC` (236 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.8136 | 74.5763 | `candidate.cpp` |
| 2 | different | 95.7627 | 93.2203 | `candidate.cpp` |
| 3 | different | 29.5833 | 1.6667 | `candidate.cpp` |
| 4 | different | 30.8333 | 1.6667 | `candidate.cpp` |
| 5 | different | 95.7627 | 93.2203 | `candidate.cpp` |

### Attempt 1 notes

Compiled the exact six released SetTurnStat calls with source table/heading enums and method binding. All call values and 44/59 instructions matched. EE GCC tail-called the sixth call, shortening the function by one instruction and moving the return-address save after the first three float moves.

### Attempt 2 notes

Added a final zero-width barrier to prevent sibling-call conversion. This restored exact size and normal final call/epilogue; only four prologue instructions remained permuted, with the return-address save after the first three float argument moves instead of before them.

### Attempt 3 notes

Clobbering `$ra` at function entry forced an early save but also moved all constant/self setup across the barrier and added an explicit first-call self move, expanding the function to 240 bytes. This over-constrained variant was discarded.

### Attempt 4 notes

Pinning `this` to `$s0` with an entry constraint caused the same broad prologue reordering as the `$ra` clobber and expanded the function to 240 bytes. Attempt 2 remains the strong near-match.

### Attempt 5 notes

Replaced the final empty barrier with a zero-width output constraint to perturb register scheduling. Code generation remained identical to attempt 2: exact size and body with only four prologue instructions permuted around the return-address save.

## Outcome

Deferred after five source-level attempts. All six released rating calls, heading constants, float arguments, epilogue, and exact size are recovered with a final non-emitting barrier; only four independent prologue instructions are scheduled differently.
