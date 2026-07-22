# IsDoneAttacking__C14TimeAttackModei

- Address: `0x002862F8`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/ks/mode_timeattack.cpp`
- Reference source: `KS/SRC/ks/mode_timeattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 63.1579 | `candidate.cpp` |
| 2 | different | 40.0 | 20.0 | `candidate.cpp` |
| 3 | different | 41.25 | 20.0 | `candidate.cpp` |
| 4 | different | 56.5789 | 31.5789 | `candidate.cpp` |
| 5 | different | 41.25 | 20.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `mode_timeattack.cpp:208-214` body and created a
shared released TimeAttackMode/Player declaration.  The exact short-circuit
form reproduces every operation but emits 72 bytes: the target retains one
additional floating-point compare hazard nop.  Explicit returns, a ternary,
and normalized barrier placements altered the surrounding control flow
without reproducing that single instruction.

## Outcome

Deferred after five source-only attempts due the isolated floating-point
compare scheduling difference.
