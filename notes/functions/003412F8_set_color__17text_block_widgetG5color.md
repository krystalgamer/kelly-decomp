# set_color__17text_block_widgetG5color

- Address: `0x003412F8`
- Size: `0xB4` (180 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.6667 | 0.0 | `candidate.cpp` |
| 2 | different | 83.3333 | 56.5217 | `candidate.cpp` |
| 3 | different | 26.1111 | 2.2222 | `candidate.cpp` |
| 4 | different | 26.1111 | 2.2222 | `candidate.cpp` |
| 5 | different | 38.0 | 22.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used shared source-faithful widget list, text widget, block_info, and color declarations, but the reduced color declaration copied the by-value parameter to the entry stack and used a smaller frame.

### Attempt 2 notes

Adding the released color copy constructor restored target size and direct input use, while the generated call temporary occupied stack offset zero instead of sixteen and the end iterator was not materialized at stack offset zero.

### Attempt 3 notes

A separate materialized end-iterator copy reduced the function and changed register allocation.

### Attempt 4 notes

Forcing the original end iterator into memory produced the same reduced form.

### Attempt 5 notes

An explicit forwarded color temporary enlarged the loop and moved farther from the original. No local widget, list, or color layout was retained.

## Outcome

Deferred text-block color propagation after five source-level attempts; exact shared declarations could not reproduce iterator and by-value temporary stack placement.
