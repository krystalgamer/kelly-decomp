# AdvanceSet__14TimeAttackMode

- Address: `0x00286170`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_timeattack.cpp`
- Reference source: `KS/SRC/ks/mode_timeattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.4762 | 73.6842 | `candidate.cpp` |
| 2 | different | 80.9524 | 57.8947 | `candidate.cpp` |
| 3 | different | 90.4762 | 73.6842 | `candidate.cpp` |
| 4 | different | 88.0952 | 63.1579 | `candidate.cpp` |
| 5 | different | 90.4762 | 73.6842 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released AdvanceSet body, MAX_PLAYERS value, PLAYER layout, and gameNum/setNum offsets. All semantics and bytes except the loop pointer decrement schedule matched (90.48%).

### Attempt 2 notes

Added a non-emitting barrier after each released prevScore store. The compiler changed to a forward pointer loop and regressed.

### Attempt 3 notes

Expressed the independent two-player clearing loop in reverse order to mirror the target induction. The same pointer decrement remained scheduled before the branch.

### Attempt 4 notes

Made the reverse PLAYER pointer explicit. The compiler used a base-plus-eight store and retained the early pointer decrement.

### Attempt 5 notes

Used an explicit prevScore pointer and do/while with a non-emitting boundary between index and pointer updates. The compiler still placed the equivalent pointer decrement before the branch rather than in its delay slot.

## Outcome

Released TimeAttackMode::AdvanceSet remained blocked by an equivalent loop pointer delay-slot schedule after five source-level attempts.
