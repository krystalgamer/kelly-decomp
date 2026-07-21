# Initialize__14TimeAttackModePP22kellyslater_controller

- Address: `0x00286078`
- Size: `0x40` (64 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_timeattack.cpp`
- Reference source: `KS/SRC/ks/mode_timeattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.1875 | 6.25 | `candidate.cpp` |
| 2 | different | 75.0 | 68.75 | `candidate.cpp` |
| 3 | different | 90.625 | 87.5 | `candidate.cpp` |
| 4 | different | 90.625 | 87.5 | `candidate.cpp` |
| 5 | different | 90.625 | 87.5 | `candidate.cpp` |

### Attempt 1 notes

The literal released loop matched the data movement but tail-called Reset and scheduled the player increment before the branch.

### Attempt 2 notes

Loop and post-call barriers prevented the tail call but substantially changed increment/decrement scheduling.

### Attempt 3 notes

An explicit player-pointer walk matched fourteen instructions; the player increment remained before the branch instead of its delay slot.

### Attempt 4 notes

An explicit counted do-loop with a loop barrier retained the same player-increment scheduling mismatch.

### Attempt 5 notes

A labeled source loop also retained the two-instruction nop/delay-slot swap.

## Outcome

Five source-authentic TimeAttack initialization loops could not reproduce the target player-increment branch-delay scheduling.
