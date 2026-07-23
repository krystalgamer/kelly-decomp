# GetAttackSec__C14TimeAttackModei

- Address: `0x00286348`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_timeattack.cpp`
- Reference source: `KS/SRC/ks/mode_timeattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.8571 | 61.9048 | `candidate.cpp` |
| 2 | different | 67.8571 | 61.9048 | `candidate.cpp` |
| 3 | different | 67.8571 | 61.9048 | `candidate.cpp` |
| 4 | different | 67.8571 | 61.9048 | `candidate.cpp` |
| 5 | different | 33.3333 | 23.8095 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released GetAttackSec logic with reconstructed PLAYER, controller score offset, scoreAttackStrength field, and TIME_INITIAL symbol. The body matched except the target retained one scheduler nop after integer-to-float transfer.

### Attempt 2 notes

Reconstructed the exact nested ScoringManager/get_my_scoreManager inline declarations. The same 80-byte form remained.

### Attempt 3 notes

Matched the released separate declaration and assignment spelling for attackSec. Code generation was unchanged.

### Attempt 4 notes

Made the integer score, integer quotient, and float conversion explicit. The compiler still omitted the target conversion scheduling nop.

### Attempt 5 notes

Constrained the converted float through a non-emitting register boundary before clamping. This changed register allocation without producing the target scheduler-only nop.

## Outcome

Released TimeAttackMode::GetAttackSec remained blocked by a scheduler-only floating conversion nop after five source-level attempts.
