# get_next_item__C11menu_widget

- Address: `0x0033F6C8`
- Size: `0xA4` (164 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.0465 | 16.2791 | `candidate.cpp` |
| 2 | different | 32.9268 | 13.1579 | `candidate.cpp` |
| 3 | different | 41.0714 | 21.4286 | `candidate.cpp` |
| 4 | different | 35.9756 | 13.1579 | `candidate.cpp` |
| 5 | different | 29.4444 | 8.8889 | `candidate.cpp` |

## Outcome

Five released menu-list traversal variants reproduced wrap and skip semantics but not GCC2 iterator control flow.
