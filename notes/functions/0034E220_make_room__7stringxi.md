# make_room__7stringxi

- Address: `0x0034E220`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.0 | 70.0 | `candidate.cpp` |
| 2 | different | 93.75 | 90.0 | `candidate.cpp` |
| 3 | different | 85.0 | 70.0 | `candidate.cpp` |
| 4 | different | 85.0 | 75.0 | `candidate.cpp` |
| 5 | different | 93.75 | 90.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released make_room body and source-faithful string_buf/stringx layouts. The compiler kept the pre-branch buffer pointer on the no-call path, yielding 85%.

### Attempt 2 notes

Made the my_buf member access volatile so it was reloaded after either branch. This reached 93.75%; the remaining difference was the target branch-likely with the reload in its delay slot.

### Attempt 3 notes

Restored the released pointer type and inserted the matching-only compiler barrier before the final buffer reload. The compiler retained the original 85% shape.

### Attempt 4 notes

Expressed the post-branch buffer selection explicitly in both source branches. The compiler reused the old pointer on the no-call path and remained at 85%.

### Attempt 5 notes

Combined volatile member access with an explicit post-branch buffer local. It reproduced the 93.75% result but still emitted beqz/nop instead of the target beqzl/reload pair.

## Outcome

Released stringx::make_room remained blocked by the branch-likely delay-slot schedule after five source-level attempts.
