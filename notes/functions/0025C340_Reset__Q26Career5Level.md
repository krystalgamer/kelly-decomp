# Reset__Q26Career5Level

- Address: `0x0025C340`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.6154 | 54.5455 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released field clears and five-goal loop. Every operation matched, but EE GCC moved the four-byte goal-pointer decrement before the target's three nops rather than keeping it in the backward branch delay slot.

### Attempt 2 notes

The released reset clears `unlocked`, `is_new`, and all five goal flags. Instruction-emitting inline assembly is limited to this exact loop because EE GCC otherwise moves the goal-pointer decrement ahead of the target's three nops; `.set noreorder` preserves precisely the backedge delay-slot schedule.

## Outcome

The released career level reset matched exactly.
