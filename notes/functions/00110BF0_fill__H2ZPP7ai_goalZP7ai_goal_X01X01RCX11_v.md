# fill__H2ZPP7ai_goalZP7ai_goal_X01X01RCX11_v

- Address: `0x00110BF0`
- Size: `0x34` (52 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.0769 | 20.0 | `candidate.cpp` |
| 2 | different | 48.0769 | 20.0 | `candidate.cpp` |
| 3 | different | 48.0769 | 20.0 | `candidate.cpp` |
| 4 | different | 50.0 | 20.0 | `candidate.cpp` |
| 5 | different | 50.0 | 20.0 | `candidate.cpp` |

### Attempt 1 notes

Used the canonical pointer range-fill loop. EE GCC emitted a 44-byte loop that reloads the value at the loop head, while the target preloads it, carries three nops after the pointer increment, and reloads through a branch-likely delay slot.

### Attempt 2 notes

Used the equivalent post-increment assignment spelling. Output was identical to attempt 1 and did not reproduce the target's preload/branch-likely schedule.

### Attempt 3 notes

Qualified the referenced fill value as volatile to force per-iteration loads. This legacy compiler emitted the same 44-byte loop as the canonical candidate.

### Attempt 4 notes

Used an explicit preload/goto loop with the target's three nops after pointer advancement. The compiler proved the value invariant, removed the bottom reload, and emitted an unconditional backedge to the entry check.

### Attempt 5 notes

Added a memory clobber to the explicit three-nop scheduling block to invalidate the referenced value. The compiler still retained the attempt 4 loop shape and did not reproduce the target branch-likely reload.

## Outcome

Five canonical and scheduling-directed range-fill candidates could not reproduce the target preload and branch-likely value reload.
