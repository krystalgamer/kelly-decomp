# fade_to__6widgetf

- Address: `0x0033F078`
- Size: `0x54` (84 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.4762 | 42.1053 | `candidate.cpp` |
| 2 | different | 90.4762 | 42.1053 | `candidate.cpp` |
| 3 | different | 85.7143 | 31.5789 | `candidate.cpp` |
| 4 | different | 85.7143 | 31.5789 | `candidate.cpp` |
| 5 | different | 90.4762 | 42.1053 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released widget::fade_to body with the exact color-array and widget-vptr offsets plus update_col virtual slot. Only the loop pointer decrement schedule differed (90.48%).

### Attempt 2 notes

Expressed the independent stores as a reverse index loop. The compiler retained the same early pointer decrement.

### Attempt 3 notes

Made the reverse alpha pointer and counter explicit. The loop register allocation changed and regressed.

### Attempt 4 notes

Inserted a non-emitting boundary between counter and pointer updates. The compiler retained the alternate explicit-pointer loop.

### Attempt 5 notes

Restored the released forward loop with a register-qualified index. Code returned to the 90.48% form with the pointer decrement before rather than in the branch delay slot.

## Outcome

Released widget::fade_to remained blocked by an equivalent loop pointer delay-slot schedule after five source-level attempts.
