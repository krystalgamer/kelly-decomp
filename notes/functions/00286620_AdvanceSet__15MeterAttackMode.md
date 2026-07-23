# AdvanceSet__15MeterAttackMode

- Address: `0x00286620`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.4762 | 73.6842 | `candidate.cpp` |
| 2 | different | 90.4762 | 73.6842 | `candidate.cpp` |
| 3 | different | 90.4762 | 73.6842 | `candidate.cpp` |
| 4 | different | 72.619 | 42.8571 | `candidate.cpp` |
| 5 | different | 90.4762 | 73.6842 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released MeterAttackMode::AdvanceSet body and PLAYER layout. As with the equivalent TimeAttack loop, only the pointer decrement delay-slot schedule differed (90.48%).

### Attempt 2 notes

Expressed the two independent stores through an explicit reverse prevScore pointer. The compiler retained the same early pointer decrement.

### Attempt 3 notes

Used a reverse do/while index loop matching the target induction direction. The same schedule remained.

### Attempt 4 notes

Made prevScore volatile to constrain store ordering. This changed the loop form and regressed.

### Attempt 5 notes

Restored the exact released loop with a register-qualified index. The compiler returned to the 90.48% form with the pointer decrement before, rather than in, the branch delay slot.

## Outcome

Released MeterAttackMode::AdvanceSet remained blocked by an equivalent loop pointer delay-slot schedule after five source-level attempts.
