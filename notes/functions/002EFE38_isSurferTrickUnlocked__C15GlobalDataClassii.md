# isSurferTrickUnlocked__C15GlobalDataClassii

- Address: `0x002EFE38`
- Size: `0xD4` (212 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.0 | 1.8182 | `candidate.cpp` |
| 2 | different | 18.8679 | 1.8868 | `candidate.cpp` |
| 3 | different | 21.3636 | 1.8182 | `candidate.cpp` |
| 4 | different | 13.2075 | 0.0 | `candidate.cpp` |
| 5 | different | 2.8302 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Recovered the shipped two-stage trick-ID search and surfer unlock-table layout. The compiler peeled the first iteration and reassigned key registers.

### Attempt 2 notes

An explicit target-shaped goto loop shortened the function and changed branch layout.

### Attempt 3 notes

Using the source-faithful bool unlock table fixed return semantics but retained the peeled-loop schedule; best score was 21.3636%.

### Attempt 4 notes

A combined while-condition produced a different compact search loop.

### Attempt 5 notes

The simple released-snapshot direct array lookup confirmed that the shipped function uses a substantially different trick-mapping path.

## Outcome

The shipped function uses a two-stage surfer trick-ID mapping that differs substantially from the released snapshot direct lookup. Five source shapes could not reproduce its loop/register schedule; best byte score was 21.3636%.
