# __12EventManager

- Address: `0x00349970`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `ks/eventmanager.cpp`
- Reference source: `KS/SRC/ks/eventmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 40.0 | `candidate.cpp` |
| 2 | different | 75.0 | 20.0 | `candidate.cpp` |
| 3 | different | 83.3333 | 40.0 | `candidate.cpp` |
| 4 | different | 55.3571 | 36.3636 | `candidate.cpp` |
| 5 | different | 63.4615 | 50.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released ascending loop over all 50 recipient slots. The candidate matched every operation, but EE GCC scheduled the pointer decrement before three loop nops instead of in the backward branch delay slot (83.33%).

### Attempt 2 notes

Added an empty barrier after each recipient clear. This changed induction to a forward pointer and moved both loop decrements ahead of the nop span, reducing the score to 75%.

### Attempt 3 notes

Expressed the equivalent descending-index loop explicitly. The compiler returned to attempt 1's instruction set and retained the same unmatched pointer-decrement scheduling.

### Attempt 4 notes

Used an explicit descending pointer and emitted the target's three loop nops. The compiler placed the pointer decrement before the branch and added a separate branch-delay nop, growing the function to 56 bytes.

### Attempt 5 notes

Used an ABI-named constructor wrapper with a narrowly explicit loop instruction sequence. The assembler reordered the requested pointer decrement out of the branch delay slot and after the branch, producing 52 bytes rather than the target 48.

## Outcome

Five released-loop and scheduling-directed candidates could not place the recipient pointer decrement in the target backward-branch delay slot.
