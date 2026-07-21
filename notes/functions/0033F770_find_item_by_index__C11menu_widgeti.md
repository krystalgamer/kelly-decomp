# find_item_by_index__C11menu_widgeti

- Address: `0x0033F770`
- Size: `0x3C` (60 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.3333 | 6.6667 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 16.1765 | 0.0 | `candidate.cpp` |
| 4 | different | 71.6667 | 60.0 | `candidate.cpp` |
| 5 | different | 71.6667 | 60.0 | `candidate.cpp` |

### Attempt 1 notes

A raw list-node loop optimized to 52 bytes and fell through directly on a match.

### Attempt 2 notes

The first authentic iterator wrapper failed because its default construction was omitted.

### Attempt 3 notes

A constructible iterator wrapper expanded to 68 bytes with extra iterator state moves.

### Attempt 4 notes

An ordered raw loop with explicit match exit recovered the target body but used the sentinel directly in a2 and inserted a load-hazard nop.

### Attempt 5 notes

An explicit list-head local retained the same 71.67% register/hazard schedule mismatch.

## Outcome

Five source-authentic list traversals could not reproduce the target sentinel register move and omitted load-hazard nop; the closest body reached 71.67%.
