# set_render_color__12conglomerateG7color32

- Address: `0x00306320`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.3333 | 26.6667 | `candidate.cpp` |
| 2 | different | 68.3333 | 60.0 | `candidate.cpp` |
| 3 | different | 48.3333 | 13.3333 | `candidate.cpp` |
| 4 | different | 56.6667 | 20.0 | `candidate.cpp` |
| 5 | different | 56.6667 | 20.0 | `candidate.cpp` |

### Attempt 1 notes

A direct member-pointer loop reloaded the end pointer after possible member aliasing and used different registers.

### Attempt 2 notes

Caching begin/end as released matched 9 instructions but optimized the loop to 56 bytes, omitting the target nop before the branch.

### Attempt 3 notes

Authentic iterator wrappers retained the 56-byte loop and changed register allocation.

### Attempt 4 notes

A reviewed barrier after pointer increment did not recover the target loop nop or register schedule.

### Attempt 5 notes

Moving the barrier before pointer increment produced the same nonmatching 56-byte loop.

## Outcome

Five source-authentic member loops could not reproduce the target 60-byte iterator schedule; the released cached-iterator form optimized to 56 bytes.
