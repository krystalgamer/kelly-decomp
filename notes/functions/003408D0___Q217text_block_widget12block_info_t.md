# __Q217text_block_widget12block_info_t

- Address: `0x003408D0`
- Size: `0xE8` (232 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.0862 | 86.2069 | `candidate.cpp` |
| 2 | different | 91.3793 | 86.2069 | `candidate.cpp` |
| 3 | different | 91.3793 | 86.2069 | `candidate.cpp` |
| 4 | different | 52.9661 | 37.2881 | `candidate.cpp` |
| 5 | different | 91.3793 | 86.2069 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released text-block constructor reaches exact size and recovers every offset, constant, constructor, assignment, and return; only eight independent prologue/address/store scheduling positions differ.
